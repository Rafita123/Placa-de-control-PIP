/*
 * File: control.c
 *
 * Code generated for Simulink model 'control'.
 *
 * Model version                  : 1.14
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sat Mar 19 12:10:54 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "control.h"

/* Exported data definition */

/* Data with Exported storage */
real_T rtEntrada_Control;              /* '<Root>/Entrada_Control' */
real_T rtIntegrator_DSTATE;            /* '<S35>/Integrator' */
real_T rtSalida_Control;               /* '<Root>/Salida_Control' */
real_T rtUD_DSTATE;                    /* '<S28>/UD' */

/* Model step function */
void control_step(void)
{
  real_T rtb_Tsamp;

  /* SampleTimeMath: '<S30>/Tsamp' incorporates:
   *  Gain: '<S27>/Derivative Gain'
   *  Inport: '<Root>/Entrada_Control'
   *
   * About '<S30>/Tsamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_Tsamp = 0.00285610125568279 * rtEntrada_Control * 200.0;

  /* Outport: '<Root>/Salida_Control' incorporates:
   *  Delay: '<S28>/UD'
   *  DiscreteIntegrator: '<S35>/Integrator'
   *  Gain: '<S40>/Proportional Gain'
   *  Inport: '<Root>/Entrada_Control'
   *  Sum: '<S28>/Diff'
   *  Sum: '<S44>/Sum'
   */
  rtSalida_Control = (2.28488100454623 * rtEntrada_Control + rtIntegrator_DSTATE)
    + (rtb_Tsamp - rtUD_DSTATE);

  /* Update for DiscreteIntegrator: '<S35>/Integrator' incorporates:
   *  Gain: '<S32>/Integral Gain'
   *  Inport: '<Root>/Entrada_Control'
   */
  rtIntegrator_DSTATE = 456.976200909247 * rtEntrada_Control * 0.005 +
    rtIntegrator_DSTATE;

  /* Update for Delay: '<S28>/UD' */
  rtUD_DSTATE = rtb_Tsamp;
}

/* Model initialize function */
void control_initialize(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
