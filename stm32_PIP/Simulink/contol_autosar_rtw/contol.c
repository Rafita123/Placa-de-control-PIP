/*
 * File: contol.c
 *
 * Code generated for Simulink model 'contol'.
 *
 * Model version                  : 1.7
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sat Mar  5 11:07:46 2022
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "contol.h"

/* Block signals and states (default storage) */
DW rtDW;

/* Model step function */
void contol_Step(void)
{
  float64 rtb_FilterCoefficient;
  float64 rtb_Gain;

  /* Gain: '<Root>/Gain' incorporates:
   *  Inport: '<Root>/Entrada_Control'
   */
  rtb_Gain = 6.28 * Rte_IRead_contol_Step_Entrada_Control_Entrada_Control();

  /* Gain: '<S36>/Filter Coefficient' incorporates:
   *  DiscreteIntegrator: '<S28>/Filter'
   *  Gain: '<S27>/Derivative Gain'
   *  Sum: '<S28>/SumD'
   */
  rtb_FilterCoefficient = (0.001 * rtb_Gain - rtDW.Filter_DSTATE) * 100.0;

  /* Outport: '<Root>/Salida_Control' incorporates:
   *  DiscreteIntegrator: '<S33>/Integrator'
   *  Gain: '<S38>/Proportional Gain'
   *  Sum: '<S42>/Sum'
   */
  Rte_IWrite_contol_Step_Salida_Control_Salida_Control((0.316941940103141 *
    rtb_Gain + rtDW.Integrator_DSTATE) + rtb_FilterCoefficient);

  /* Update for DiscreteIntegrator: '<S33>/Integrator' incorporates:
   *  Gain: '<S30>/Integral Gain'
   */
  rtDW.Integrator_DSTATE += 63.3883880206283 * rtb_Gain * 0.1;

  /* Update for DiscreteIntegrator: '<S28>/Filter' */
  rtDW.Filter_DSTATE += 0.1 * rtb_FilterCoefficient;
}

/* Model initialize function */
void contol_Init(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
