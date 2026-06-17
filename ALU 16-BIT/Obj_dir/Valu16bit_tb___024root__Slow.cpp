// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu16bit_tb.h for the primary calling header

#include "verilated.h"

#include "Valu16bit_tb__Syms.h"
#include "Valu16bit_tb__Syms.h"
#include "Valu16bit_tb___024root.h"

void Valu16bit_tb___024root___ctor_var_reset(Valu16bit_tb___024root* vlSelf);

Valu16bit_tb___024root::Valu16bit_tb___024root(Valu16bit_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Valu16bit_tb___024root___ctor_var_reset(this);
}

void Valu16bit_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Valu16bit_tb___024root::~Valu16bit_tb___024root() {
}
