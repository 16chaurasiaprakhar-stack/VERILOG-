// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Valu16bit_tb__Syms.h"


VL_ATTR_COLD void Valu16bit_tb___024root__trace_init_sub__TOP__0(Valu16bit_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu16bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu16bit_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("alu16bit_tb ");
    tracep->declBus(c+1,"A", false,-1, 15,0);
    tracep->declBus(c+2,"B", false,-1, 15,0);
    tracep->declBus(c+3,"ALU_Sel", false,-1, 3,0);
    tracep->declBus(c+4,"ALU_Out", false,-1, 15,0);
    tracep->declBit(c+5,"CarryOut", false,-1);
    tracep->pushNamePrefix("uut ");
    tracep->declBus(c+1,"A", false,-1, 15,0);
    tracep->declBus(c+2,"B", false,-1, 15,0);
    tracep->declBus(c+3,"ALU_Sel", false,-1, 3,0);
    tracep->declBus(c+4,"ALU_Out", false,-1, 15,0);
    tracep->declBit(c+5,"CarryOut", false,-1);
    tracep->declBus(c+6,"tmp", false,-1, 16,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Valu16bit_tb___024root__trace_init_top(Valu16bit_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu16bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu16bit_tb___024root__trace_init_top\n"); );
    // Body
    Valu16bit_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Valu16bit_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Valu16bit_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Valu16bit_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Valu16bit_tb___024root__trace_register(Valu16bit_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu16bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu16bit_tb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Valu16bit_tb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Valu16bit_tb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Valu16bit_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Valu16bit_tb___024root__trace_full_sub_0(Valu16bit_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Valu16bit_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu16bit_tb___024root__trace_full_top_0\n"); );
    // Init
    Valu16bit_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu16bit_tb___024root*>(voidSelf);
    Valu16bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Valu16bit_tb___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Valu16bit_tb___024root__trace_full_sub_0(Valu16bit_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Valu16bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu16bit_tb___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullSData(oldp+1,(vlSelf->alu16bit_tb__DOT__A),16);
    bufp->fullSData(oldp+2,(vlSelf->alu16bit_tb__DOT__B),16);
    bufp->fullCData(oldp+3,(vlSelf->alu16bit_tb__DOT__ALU_Sel),4);
    bufp->fullSData(oldp+4,(vlSelf->alu16bit_tb__DOT__ALU_Out),16);
    bufp->fullBit(oldp+5,(vlSelf->alu16bit_tb__DOT__CarryOut));
    bufp->fullIData(oldp+6,(vlSelf->alu16bit_tb__DOT__uut__DOT__tmp),17);
}
