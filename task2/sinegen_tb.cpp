#include "Vsinegen.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "vbuddy.cpp"

int main(int argc, char **argv, char **env) {
    int i;
    int clk;

    Verilated::commandArgs(argc,argv);
    // init top verilog instance
    Vsinegen* top = new Vsinegen;
    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp, 99);
    tfp->open("sinegen.vcd");

    top-> clk = 1;
    top-> rst =0;
    top-> en= 1;
    top-> incr= 3; //to demostrate whole cycle of sin and cos wave

    if (vbdOpen()!=1)   return(-1);

    for (i=0; i<100000; i++){
        for (clk=0; clk<2; clk++){
            tfp-> dump(2*i+clk);
            top-> clk = !top->clk;
            top->eval ();
        }
        top-> stored= vbdValue();
        vbdPlot(int(top->dout1), 0, 255);
        vbdPlot(int(top->dout2), 0, 255);
        if ((Verilated::gotFinish()) || (vbdGetkey()=='q')) 
             exit(0);
    }
    tfp->close();
    exit(0);
}


