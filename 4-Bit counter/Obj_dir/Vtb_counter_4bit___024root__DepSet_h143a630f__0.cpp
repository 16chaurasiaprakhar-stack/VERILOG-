// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_counter_4bit.h for the primary calling header

#include "verilated.h"

#include "Vtb_counter_4bit__Syms.h"
#include "Vtb_counter_4bit__Syms.h"
#include "Vtb_counter_4bit___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_counter_4bit___024root___eval_initial__TOP__1(Vtb_counter_4bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_counter_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_counter_4bit___024root___eval_initial__TOP__1\n"); );
    // Body
    vlSelf->tb_counter_4bit__DOT__reset = 1U;
    VL_WRITEF("Time(ns) | Reset | Count\n-------------------------\n");
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
    co_await vlSelf->__VdlySched.delay(0x3a98ULL, nullptr, 
                                       "counter_tb.v", 
                                       53);
    vlSelf->tb_counter_4bit__DOT__reset = 0U;
    co_await vlSelf->__VdlySched.delay(0x30d40ULL, 
                                       nullptr, "counter_tb.v", 
                                       59);
    VL_WRITEF("--> Asserting reset mid-count\n");
    vlSelf->tb_counter_4bit__DOT__reset = 1U;
    co_await vlSelf->__VdlySched.delay(0x2ee0ULL, nullptr, 
                                       "counter_tb.v", 
                                       64);
    vlSelf->tb_counter_4bit__DOT__reset = 0U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "counter_tb.v", 
                                       68);
    VL_WRITEF("--> Simulation complete.\n");
    VL_FINISH_MT("counter_tb.v", 71, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_counter_4bit___024root___dump_triggers__act(Vtb_counter_4bit___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_counter_4bit___024root___eval_triggers__act(Vtb_counter_4bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_counter_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_counter_4bit___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->tb_counter_4bit__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_counter_4bit__DOT__clk__0))) 
                                     | ((IData)(vlSelf->tb_counter_4bit__DOT__reset) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_counter_4bit__DOT__reset__0)))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__tb_counter_4bit__DOT__clk__0 
        = vlSelf->tb_counter_4bit__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_counter_4bit__DOT__reset__0 
        = vlSelf->tb_counter_4bit__DOT__reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_counter_4bit___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_counter_4bit___024root___act_sequent__TOP__0(Vtb_counter_4bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_counter_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_counter_4bit___024root___act_sequent__TOP__0\n"); );
    // Body
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                     & (1U == vlSymsp->TOP____024unit.__VmonitorNum)))) {
        VL_WRITEF("%8t |   %b   | %4b (%0#)\n",64,VL_TIME_UNITED_Q(1000),
                  -9,1,(IData)(vlSelf->tb_counter_4bit__DOT__reset),
                  4,vlSelf->tb_counter_4bit__DOT__count,
                  4,(IData)(vlSelf->tb_counter_4bit__DOT__count));
    }
}
