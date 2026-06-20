// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_counter_4bit.h for the primary calling header

#include "verilated.h"

#include "Vtb_counter_4bit__Syms.h"
#include "Vtb_counter_4bit__Syms.h"
#include "Vtb_counter_4bit___024root.h"

VL_ATTR_COLD void Vtb_counter_4bit___024root___eval_initial__TOP(Vtb_counter_4bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_counter_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_counter_4bit___024root___eval_initial__TOP\n"); );
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"dump.vcd"});
    vlSymsp->_traceDumpOpen();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_counter_4bit___024root___dump_triggers__stl(Vtb_counter_4bit___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_counter_4bit___024root___eval_triggers__stl(Vtb_counter_4bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_counter_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_counter_4bit___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_counter_4bit___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
