// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu16bit_tb.h for the primary calling header

#include "verilated.h"

#include "Valu16bit_tb__Syms.h"
#include "Valu16bit_tb___024root.h"

VL_ATTR_COLD void Valu16bit_tb___024root___eval_static(Valu16bit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu16bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu16bit_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Valu16bit_tb___024root___eval_final(Valu16bit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu16bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu16bit_tb___024root___eval_final\n"); );
}

VL_ATTR_COLD void Valu16bit_tb___024root___eval_triggers__stl(Valu16bit_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Valu16bit_tb___024root___dump_triggers__stl(Valu16bit_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Valu16bit_tb___024root___eval_stl(Valu16bit_tb___024root* vlSelf);

VL_ATTR_COLD void Valu16bit_tb___024root___eval_settle(Valu16bit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu16bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu16bit_tb___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Valu16bit_tb___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Valu16bit_tb___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("alu16_tb.v", 3, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Valu16bit_tb___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu16bit_tb___024root___dump_triggers__stl(Valu16bit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu16bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu16bit_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Valu16bit_tb___024root___act_sequent__TOP__0(Valu16bit_tb___024root* vlSelf);

VL_ATTR_COLD void Valu16bit_tb___024root___eval_stl(Valu16bit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu16bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu16bit_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Valu16bit_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu16bit_tb___024root___dump_triggers__act(Valu16bit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu16bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu16bit_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu16bit_tb___024root___dump_triggers__nba(Valu16bit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu16bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu16bit_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Valu16bit_tb___024root___ctor_var_reset(Valu16bit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu16bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu16bit_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->alu16bit_tb__DOT__A = VL_RAND_RESET_I(16);
    vlSelf->alu16bit_tb__DOT__B = VL_RAND_RESET_I(16);
    vlSelf->alu16bit_tb__DOT__ALU_Sel = VL_RAND_RESET_I(4);
    vlSelf->alu16bit_tb__DOT__ALU_Out = VL_RAND_RESET_I(16);
    vlSelf->alu16bit_tb__DOT__CarryOut = VL_RAND_RESET_I(1);
    vlSelf->alu16bit_tb__DOT__uut__DOT__tmp = VL_RAND_RESET_I(17);
    }
