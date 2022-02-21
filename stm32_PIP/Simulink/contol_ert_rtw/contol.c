/*
 * File: contol.c
 *
 * Code generated for Simulink model 'contol'.
 *
 * Model version                  : 1.6
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Tue Feb 15 20:15:22 2022
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
  real_T rtb_FilterCoefficient;
  real_T rtb_Gain;

  /* Gain: '<Root>/Gain' incorporates:
   *  Inport: '<Root>/Entrada_Control'
   */
  rtb_Gain = 6.28 * rtU.Entrada_Control;

  /* Gain: '<S36>/Filter Coefficient' incorporates:
   *  DiscreteIntegrator: '<S28>/Filter'
   *  Gain: '<S27>/Derivative Gain'
   *  Sum: '<S28>/SumD'
   */
  rtb_FilterCoefficient = (2 * rtb_Gain - rtDW.Filter_DSTATE) * 100.0; // kd

  /* Outport: '<Root>/Salida_Control' incorporates:
   *  DiscreteIntegrator: '<S33>/Integrator'
   *  Gain: '<S38>/Proportional Gain'
   *  Sum: '<S42>/Sum'
   */
  rtY.Salida_Control = (550 * rtb_Gain + rtDW.Integrator_DSTATE) +
    rtb_FilterCoefficient; //ki

  /* Update for DiscreteIntegrator: '<S33>/Integrator' incorporates:
   *  Gain: '<S30>/Integral Gain'
   */
  rtDW.Integrator_DSTATE += 300 * rtb_Gain * 0.01;//k

  /* Update for DiscreteIntegrator: '<S28>/Filter' */
  rtDW.Filter_DSTATE += 0.01 * rtb_FilterCoefficient;
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
