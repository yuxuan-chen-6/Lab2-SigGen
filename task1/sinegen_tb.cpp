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
    top-> incr= 1;

    if (vbdOpen()!=1)   return(-1);

    for (i=0; i<10000; i++){
        for (clk=0; clk<2; clk++){
            tfp-> dump(2*i+clk);
            top-> clk = !top->clk;
            top->eval ();
        }
        top-> incr= vbdValue();
        vbdPlot(int(top->dout), 0, 255);
         if ((Verilated::gotFinish()) || (vbdGetkey()=='q')) 
         exit(0);
    }
    vbdClose();
    tfp->close();
    exit(0);
}


