/*
 * File: contol.c
 *
 * Code generated for Simulink model 'contol'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sat Feb 12 11:58:00 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "contol.h"

/* Block signals and states (default storage) */
DW rtDW;

/* External inputs (root inport signals with default storage) */
ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Model step function */
void contol_step(void)
{
  /* Outport: '<Root>/Salida_Control' incorporates:
   *  DiscreteIntegrator: '<S33>/Integrator'
   *  Gain: '<S38>/Proportional Gain'
   *  Inport: '<Root>/Entrada_Control'
   *  Sum: '<S42>/Sum'
   */
  rtY.Salida_Control = 0.124114887495952 * rtU.Entrada_Control +
    rtDW.Integrator_DSTATE;

  /* Update for DiscreteIntegrator: '<S33>/Integrator' incorporates:
   *  Gain: '<S30>/Integral Gain'
   *  Inport: '<Root>/Entrada_Control'
   */
  rtDW.Integrator_DSTATE += 24.8229774991904 * rtU.Entrada_Control * 0.01;
}

/* Model initialize function */
void contol_initialize(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
