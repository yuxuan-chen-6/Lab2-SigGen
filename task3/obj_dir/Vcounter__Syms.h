// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCOUNTER__SYMS_H_
#define VERILATED_VCOUNTER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vcounter.h"

// INCLUDE MODULE CLASSES
#include "Vcounter___024root.h"

// SYMS CLASS (contains all model state)
class Vcounter__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vcounter* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vcounter___024root             TOP;

    // CONSTRUCTORS
    Vcounter__Syms(VerilatedContext* contextp, const char* namep, Vcounter* modelp);
    ~Vcounter__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
