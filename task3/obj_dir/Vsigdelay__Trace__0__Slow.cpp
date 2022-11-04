// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsigdelay__Syms.h"


VL_ATTR_COLD void Vsigdelay___024root__trace_init_sub__TOP__0(Vsigdelay___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBus(c+3,"incr", false,-1, 8,0);
    tracep->declBit(c+4,"en", false,-1);
    tracep->declBit(c+5,"wr", false,-1);
    tracep->declBit(c+6,"rd", false,-1);
    tracep->declBus(c+7,"mic_signal", false,-1, 7,0);
    tracep->declBus(c+8,"offset", false,-1, 7,0);
    tracep->declBus(c+9,"delayed_signal", false,-1, 7,0);
    tracep->pushNamePrefix("sigdelay ");
    tracep->declBus(c+12,"A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+13,"D_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBus(c+3,"incr", false,-1, 8,0);
    tracep->declBit(c+4,"en", false,-1);
    tracep->declBit(c+5,"wr", false,-1);
    tracep->declBit(c+6,"rd", false,-1);
    tracep->declBus(c+7,"mic_signal", false,-1, 7,0);
    tracep->declBus(c+8,"offset", false,-1, 7,0);
    tracep->declBus(c+9,"delayed_signal", false,-1, 7,0);
    tracep->declBus(c+10,"address", false,-1, 8,0);
    tracep->pushNamePrefix("addrCounter ");
    tracep->declBus(c+12,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBus(c+3,"incr", false,-1, 8,0);
    tracep->declBit(c+4,"en", false,-1);
    tracep->declBus(c+10,"count", false,-1, 8,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sineRam ");
    tracep->declBus(c+12,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+13,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+5,"wr_en", false,-1);
    tracep->declBit(c+6,"rd_en", false,-1);
    tracep->declBus(c+10,"wr_addr", false,-1, 8,0);
    tracep->declBus(c+11,"rd_addr", false,-1, 8,0);
    tracep->declBus(c+7,"din", false,-1, 7,0);
    tracep->declBus(c+9,"doutDelayed", false,-1, 7,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vsigdelay___024root__trace_init_top(Vsigdelay___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root__trace_init_top\n"); );
    // Body
    Vsigdelay___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vsigdelay___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsigdelay___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsigdelay___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vsigdelay___024root__trace_register(Vsigdelay___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vsigdelay___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vsigdelay___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vsigdelay___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vsigdelay___024root__trace_full_sub_0(Vsigdelay___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsigdelay___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root__trace_full_top_0\n"); );
    // Init
    Vsigdelay___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsigdelay___024root*>(voidSelf);
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsigdelay___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsigdelay___024root__trace_full_sub_0(Vsigdelay___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullBit(oldp+2,(vlSelf->rst));
    bufp->fullSData(oldp+3,(vlSelf->incr),9);
    bufp->fullBit(oldp+4,(vlSelf->en));
    bufp->fullBit(oldp+5,(vlSelf->wr));
    bufp->fullBit(oldp+6,(vlSelf->rd));
    bufp->fullCData(oldp+7,(vlSelf->mic_signal),8);
    bufp->fullCData(oldp+8,(vlSelf->offset),8);
    bufp->fullCData(oldp+9,(vlSelf->delayed_signal),8);
    bufp->fullSData(oldp+10,(vlSelf->sigdelay__DOT__address),9);
    bufp->fullSData(oldp+11,((0x1ffU & ((IData)(vlSelf->sigdelay__DOT__address) 
                                        - (IData)(vlSelf->offset)))),9);
    bufp->fullIData(oldp+12,(9U),32);
    bufp->fullIData(oldp+13,(8U),32);
}
