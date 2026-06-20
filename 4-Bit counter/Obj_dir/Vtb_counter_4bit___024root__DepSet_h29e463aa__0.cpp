// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_counter_4bit.h for the primary calling header

#include "verilated.h"

#include "Vtb_counter_4bit__Syms.h"
#include "Vtb_counter_4bit___024root.h"

VL_ATTR_COLD void Vtb_counter_4bit___024root___eval_initial__TOP(Vtb_counter_4bit___024root* vlSelf);
VlCoroutine Vtb_counter_4bit___024root___eval_initial__TOP__0(Vtb_counter_4bit___024root* vlSelf);
VlCoroutine Vtb_counter_4bit___024root___eval_initial__TOP__1(Vtb_counter_4bit___024root* vlSelf);

void Vtb_counter_4bit___024root___eval_initial(Vtb_counter_4bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_counter_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_counter_4bit___024root___eval_initial\n"); );
    // Body
    Vtb_counter_4bit___024root___eval_initial__TOP(vlSelf);
    Vtb_counter_4bit___024root___eval_initial__TOP__0(vlSelf);
    Vtb_counter_4bit___024root___eval_initial__TOP__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_counter_4bit__DOT__clk__0 
        = vlSelf->tb_counter_4bit__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_counter_4bit__DOT__reset__0 
        = vlSelf->tb_counter_4bit__DOT__reset;
}

VL_INLINE_OPT VlCoroutine Vtb_counter_4bit___024root___eval_initial__TOP__0(Vtb_counter_4bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_counter_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_counter_4bit___024root___eval_initial__TOP__0\n"); );
    // Body
    vlSelf->tb_counter_4bit__DOT__clk = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "counter_tb.v", 
                                           27);
        vlSelf->tb_counter_4bit__DOT__clk = (1U & (~ (IData)(vlSelf->tb_counter_4bit__DOT__clk)));
    }
}

void Vtb_counter_4bit___024root___act_sequent__TOP__0(Vtb_counter_4bit___024root* vlSelf);

void Vtb_counter_4bit___024root___eval_act(Vtb_counter_4bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_counter_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_counter_4bit___024root___eval_act\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_counter_4bit___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_counter_4bit___024root___nba_sequent__TOP__0(Vtb_counter_4bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_counter_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_counter_4bit___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->tb_counter_4bit__DOT__count = ((IData)(vlSelf->tb_counter_4bit__DOT__reset)
                                            ? 0U : 
                                           (0xfU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->tb_counter_4bit__DOT__count))));
}

void Vtb_counter_4bit___024root___eval_nba(Vtb_counter_4bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_counter_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_counter_4bit___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_counter_4bit___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_counter_4bit___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtb_counter_4bit___024root___eval_triggers__act(Vtb_counter_4bit___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_counter_4bit___024root___dump_triggers__act(Vtb_counter_4bit___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_counter_4bit___024root___timing_resume(Vtb_counter_4bit___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_counter_4bit___024root___dump_triggers__nba(Vtb_counter_4bit___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_counter_4bit___024root___eval(Vtb_counter_4bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_counter_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_counter_4bit___024root___eval\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtb_counter_4bit___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtb_counter_4bit___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("counter_tb.v", 3, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vtb_counter_4bit___024root___timing_resume(vlSelf);
                Vtb_counter_4bit___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtb_counter_4bit___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("counter_tb.v", 3, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtb_counter_4bit___024root___eval_nba(vlSelf);
        }
    }
}

void Vtb_counter_4bit___024root___timing_resume(Vtb_counter_4bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_counter_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_counter_4bit___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vtb_counter_4bit___024root___eval_debug_assertions(Vtb_counter_4bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_counter_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_counter_4bit___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
