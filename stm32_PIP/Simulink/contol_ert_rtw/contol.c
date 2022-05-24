/*
 * File: contol.c
 *
 * Code generated for Simulink model 'contol'.
 *
 * Model version                  : 1.8
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Thu Mar 10 16:01:29 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "contol.h"

/* Exported data definition */

/* Data with Exported storage */
real_T rtEntrada_Control;              /* '<Root>/Entrada_Control' */
real_T rtFilter_DSTATE;                /* '<S28>/Filter' */
real_T rtIntegrator_DSTATE;            /* '<S33>/Integrator' */
real_T rtSalida_Control;               /* '<Root>/Salida_Control' */

/* Model step function */
void contol_step(void)
{
  real_T rtb_FilterCoefficient;
  real_T rtb_Gain;

  /* Gain: '<Root>/Gain' incorporates:
   *  Inport: '<Root>/Entrada_Control'
   */
  rtb_Gain = 6.28 * rtEntrada_Control;

  /* Gain: '<S36>/Filter Coefficient' incorporates:
   *  DiscreteIntegrator: '<S28>/Filter'
   *  Gain: '<S27>/Derivative Gain'
   *  Sum: '<S28>/SumD'
   */
  rtb_FilterCoefficient = (0.001 * rtb_Gain - rtFilter_DSTATE) *
    9.89824077131011;

  /* Outport: '<Root>/Salida_Control' incorporates:
   *  DiscreteIntegrator: '<S33>/Integrator'
   *  Gain: '<S38>/Proportional Gain'
   *  Sum: '<S42>/Sum'
   */
  rtSalida_Control = (1.58766614769585 * rtb_Gain + rtIntegrator_DSTATE) +
    rtb_FilterCoefficient;

  /* Update for DiscreteIntegrator: '<S33>/Integrator' incorporates:
   *  Gain: '<S30>/Integral Gain'
   */
  rtIntegrator_DSTATE = -0.0830444250911029 * rtb_Gain * 0.05 +
    rtIntegrator_DSTATE;

  /* Update for DiscreteIntegrator: '<S28>/Filter' */
  rtFilter_DSTATE = 0.05 * rtb_FilterCoefficient + rtFilter_DSTATE;
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
