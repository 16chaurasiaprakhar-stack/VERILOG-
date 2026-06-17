// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu16bit_tb.h for the primary calling header

#include "verilated.h"

#include "Valu16bit_tb__Syms.h"
#include "Valu16bit_tb___024root.h"

VlCoroutine Valu16bit_tb___024root___eval_initial__TOP__0(Valu16bit_tb___024root* vlSelf);

void Valu16bit_tb___024root___eval_initial(Valu16bit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu16bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu16bit_tb___024root___eval_initial\n"); );
    // Body
    Valu16bit_tb___024root___eval_initial__TOP__0(vlSelf);
}

VL_INLINE_OPT void Valu16bit_tb___024root___act_sequent__TOP__0(Valu16bit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu16bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu16bit_tb___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->alu16bit_tb__DOT__uut__DOT__tmp = (0x1ffffU 
                                               & ((8U 
                                                   & (IData)(vlSelf->alu16bit_tb__DOT__ALU_Sel))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->alu16bit_tb__DOT__ALU_Sel))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->alu16bit_tb__DOT__ALU_Sel))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->alu16bit_tb__DOT__ALU_Sel))
                                                      ? 
                                                     (((IData)(vlSelf->alu16bit_tb__DOT__A) 
                                                       == (IData)(vlSelf->alu16bit_tb__DOT__B))
                                                       ? 1U
                                                       : 0U)
                                                      : 
                                                     (((IData)(vlSelf->alu16bit_tb__DOT__A) 
                                                       > (IData)(vlSelf->alu16bit_tb__DOT__B))
                                                       ? 1U
                                                       : 0U)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->alu16bit_tb__DOT__ALU_Sel))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->alu16bit_tb__DOT__ALU_Sel))
                                                      ? 
                                                     ((0x8000U 
                                                       & ((IData)(vlSelf->alu16bit_tb__DOT__A) 
                                                          << 0xfU)) 
                                                      | (0x7fffU 
                                                         & ((IData)(vlSelf->alu16bit_tb__DOT__A) 
                                                            >> 1U)))
                                                      : 
                                                     ((0xfffeU 
                                                       & ((IData)(vlSelf->alu16bit_tb__DOT__A) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->alu16bit_tb__DOT__A) 
                                                            >> 0xfU))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->alu16bit_tb__DOT__ALU_Sel))
                                                      ? 
                                                     ((IData)(vlSelf->alu16bit_tb__DOT__A) 
                                                      >> 1U)
                                                      : 
                                                     ((IData)(vlSelf->alu16bit_tb__DOT__A) 
                                                      << 1U))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->alu16bit_tb__DOT__ALU_Sel))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->alu16bit_tb__DOT__ALU_Sel))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->alu16bit_tb__DOT__ALU_Sel))
                                                      ? 
                                                     (~ 
                                                      ((IData)(vlSelf->alu16bit_tb__DOT__A) 
                                                       ^ (IData)(vlSelf->alu16bit_tb__DOT__B)))
                                                      : 
                                                     (~ 
                                                      ((IData)(vlSelf->alu16bit_tb__DOT__A) 
                                                       & (IData)(vlSelf->alu16bit_tb__DOT__B))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->alu16bit_tb__DOT__ALU_Sel))
                                                      ? 
                                                     (~ 
                                                      ((IData)(vlSelf->alu16bit_tb__DOT__A) 
                                                       | (IData)(vlSelf->alu16bit_tb__DOT__B)))
                                                      : 
                                                     ((IData)(vlSelf->alu16bit_tb__DOT__A) 
                                                      ^ (IData)(vlSelf->alu16bit_tb__DOT__B))))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->alu16bit_tb__DOT__ALU_Sel))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->alu16bit_tb__DOT__ALU_Sel))
                                                      ? 
                                                     ((IData)(vlSelf->alu16bit_tb__DOT__A) 
                                                      | (IData)(vlSelf->alu16bit_tb__DOT__B))
                                                      : 
                                                     ((IData)(vlSelf->alu16bit_tb__DOT__A) 
                                                      & (IData)(vlSelf->alu16bit_tb__DOT__B)))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->alu16bit_tb__DOT__ALU_Sel))
                                                      ? 
                                                     ((IData)(vlSelf->alu16bit_tb__DOT__A) 
                                                      - (IData)(vlSelf->alu16bit_tb__DOT__B))
                                                      : 
                                                     ((IData)(vlSelf->alu16bit_tb__DOT__A) 
                                                      + (IData)(vlSelf->alu16bit_tb__DOT__B)))))));
    vlSelf->alu16bit_tb__DOT__ALU_Out = (0xffffU & vlSelf->alu16bit_tb__DOT__uut__DOT__tmp);
    vlSelf->alu16bit_tb__DOT__CarryOut = (1U & (vlSelf->alu16bit_tb__DOT__uut__DOT__tmp 
                                                >> 0x10U));
}

void Valu16bit_tb___024root___eval_act(Valu16bit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu16bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu16bit_tb___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Valu16bit_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Valu16bit_tb___024root___eval_nba(Valu16bit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu16bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu16bit_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Valu16bit_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Valu16bit_tb___024root___eval_triggers__act(Valu16bit_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Valu16bit_tb___024root___dump_triggers__act(Valu16bit_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Valu16bit_tb___024root___timing_resume(Valu16bit_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Valu16bit_tb___024root___dump_triggers__nba(Valu16bit_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Valu16bit_tb___024root___eval(Valu16bit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu16bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu16bit_tb___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
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
            Valu16bit_tb___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Valu16bit_tb___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("alu16_tb.v", 3, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Valu16bit_tb___024root___timing_resume(vlSelf);
                Valu16bit_tb___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Valu16bit_tb___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("alu16_tb.v", 3, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Valu16bit_tb___024root___eval_nba(vlSelf);
        }
    }
}

void Valu16bit_tb___024root___timing_resume(Valu16bit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu16bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu16bit_tb___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Valu16bit_tb___024root___eval_debug_assertions(Valu16bit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu16bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu16bit_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
