// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_counter_4bit__Syms.h"


VL_ATTR_COLD void Vtb_counter_4bit___024root__trace_init_sub__TOP__0(Vtb_counter_4bit___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_counter_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_counter_4bit___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("tb_counter_4bit ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBus(c+3,"count", false,-1, 3,0);
    tracep->pushNamePrefix("uut ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBus(c+3,"count", false,-1, 3,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtb_counter_4bit___024root__trace_init_top(Vtb_counter_4bit___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_counter_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_counter_4bit___024root__trace_init_top\n"); );
    // Body
    Vtb_counter_4bit___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_counter_4bit___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_counter_4bit___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_counter_4bit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_counter_4bit___024root__trace_register(Vtb_counter_4bit___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_counter_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_counter_4bit___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtb_counter_4bit___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtb_counter_4bit___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtb_counter_4bit___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_counter_4bit___024root__trace_full_sub_0(Vtb_counter_4bit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_counter_4bit___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_counter_4bit___024root__trace_full_top_0\n"); );
    // Init
    Vtb_counter_4bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_counter_4bit___024root*>(voidSelf);
    Vtb_counter_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_counter_4bit___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_counter_4bit___024root__trace_full_sub_0(Vtb_counter_4bit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_counter_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_counter_4bit___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->tb_counter_4bit__DOT__clk));
    bufp->fullBit(oldp+2,(vlSelf->tb_counter_4bit__DOT__reset));
    bufp->fullCData(oldp+3,(vlSelf->tb_counter_4bit__DOT__count),4);
}
