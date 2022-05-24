/* This file contains stub implementations of the AUTOSAR RTE functions.
   The stub implementations can be used for testing the generated code in
   Simulink, for example, in SIL/PIL simulations of the component under
   test. Note that this file should be replaced with an appropriate RTE
   file when deploying the generated code outside of Simulink.

   This file is generated for:
   Atomic software component:  "contol"
   ARXML schema: "4.3"
   File generated on: "05-Mar-2022 11:08:11"  */

#ifndef Rte_contol_h
#define Rte_contol_h
#include "Rte_Type.h"
#include "Compiler.h"

/* Data access functions */
#define Rte_IRead_contol_Step_Entrada_Control_Entrada_Control Rte_IRead_contol_contol_Step_Entrada_Control_Entrada_Control

Double Rte_IRead_contol_Step_Entrada_Control_Entrada_Control(void);

#define Rte_IWrite_contol_Step_Salida_Control_Salida_Control Rte_IWrite_contol_contol_Step_Salida_Control_Salida_Control

void Rte_IWrite_contol_Step_Salida_Control_Salida_Control(Double u);

#define Rte_IWriteRef_contol_Step_Salida_Control_Salida_Control Rte_IWriteRef_contol_contol_Step_Salida_Control_Salida_Control

Double* Rte_IWriteRef_contol_Step_Salida_Control_Salida_Control(void);

/* Entry point functions */
extern FUNC(void, contol_CODE) contol_Init(void);
extern FUNC(void, contol_CODE) contol_Step(void);

#endif
