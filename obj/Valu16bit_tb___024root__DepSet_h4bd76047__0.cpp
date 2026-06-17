// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu16bit_tb.h for the primary calling header

#include "verilated.h"

#include "Valu16bit_tb__Syms.h"
#include "Valu16bit_tb__Syms.h"
#include "Valu16bit_tb___024root.h"

VL_INLINE_OPT VlCoroutine Valu16bit_tb___024root___eval_initial__TOP__0(Valu16bit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu16bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu16bit_tb___024root___eval_initial__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x64756d70U;
    __Vtemp_1[2U] = 0x616c755fU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelf->alu16bit_tb__DOT__A = 0U;
    vlSelf->alu16bit_tb__DOT__B = 0U;
    vlSelf->alu16bit_tb__DOT__ALU_Sel = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "alu16_tb.v", 
                                       30);
    vlSelf->alu16bit_tb__DOT__A = 0x15U;
    vlSelf->alu16bit_tb__DOT__B = 0xaU;
    vlSelf->alu16bit_tb__DOT__ALU_Sel = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "alu16_tb.v", 
                                       34);
    vlSelf->alu16bit_tb__DOT__A = 0x15U;
    vlSelf->alu16bit_tb__DOT__B = 0xaU;
    vlSelf->alu16bit_tb__DOT__ALU_Sel = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "alu16_tb.v", 
                                       37);
    vlSelf->alu16bit_tb__DOT__A = 0xffU;
    vlSelf->alu16bit_tb__DOT__B = 0xf0fU;
    vlSelf->alu16bit_tb__DOT__ALU_Sel = 2U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "alu16_tb.v", 
                                       40);
    vlSelf->alu16bit_tb__DOT__A = 0xffU;
    vlSelf->alu16bit_tb__DOT__B = 0xf0fU;
    vlSelf->alu16bit_tb__DOT__ALU_Sel = 3U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "alu16_tb.v", 
                                       43);
    vlSelf->alu16bit_tb__DOT__A = 1U;
    vlSelf->alu16bit_tb__DOT__B = 0U;
    vlSelf->alu16bit_tb__DOT__ALU_Sel = 8U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "alu16_tb.v", 
                                       46);
    vlSelf->alu16bit_tb__DOT__A = 0x8001U;
    vlSelf->alu16bit_tb__DOT__B = 0U;
    vlSelf->alu16bit_tb__DOT__ALU_Sel = 0xaU;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "alu16_tb.v", 
                                       49);
    co_await vlSelf->__VdlySched.delay(0x4e20ULL, nullptr, 
                                       "alu16_tb.v", 
                                       52);
    VL_WRITEF("Simulation complete. Check alu_dump.vcd in your directory.\n");
    Verilated::runFlushCallbacks();
    VL_FINISH_MT("alu16_tb.v", 57, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu16bit_tb___024root___dump_triggers__act(Valu16bit_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Valu16bit_tb___024root___eval_triggers__act(Valu16bit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu16bit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu16bit_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Valu16bit_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
