// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Valu16bit_tb.h for the primary calling header

#ifndef VERILATED_VALU16BIT_TB___024ROOT_H_
#define VERILATED_VALU16BIT_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Valu16bit_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Valu16bit_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ alu16bit_tb__DOT__ALU_Sel;
    CData/*0:0*/ alu16bit_tb__DOT__CarryOut;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ alu16bit_tb__DOT__A;
    SData/*15:0*/ alu16bit_tb__DOT__B;
    SData/*15:0*/ alu16bit_tb__DOT__ALU_Out;
    IData/*16:0*/ alu16bit_tb__DOT__uut__DOT__tmp;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Valu16bit_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Valu16bit_tb___024root(Valu16bit_tb__Syms* symsp, const char* v__name);
    ~Valu16bit_tb___024root();
    VL_UNCOPYABLE(Valu16bit_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
