/*
 * File: untitled.c
 *
 * Code generated for Simulink model 'untitled'.
 *
 * Model version                  : 1.0
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sun Mar  6 21:04:42 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "untitled.h"

/* Exported data definition */

/* Data with Exported storage */
real_T rtMerge;                        /* '<Root>/Merge' */
uint32_T rtVelocidad_linealizada;      /* '<Root>/Velocidad_linealizada' */
real_T rtdelta_w;                      /* '<Root>/delta_w' */

/* Real-time model */
static RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;
static void IfActionSubsystem3(void);

/* Output and update for action system: '<Root>/If Action Subsystem3' */
static void IfActionSubsystem3(void)
{
  /* Merge: '<Root>/Merge' incorporates:
   *  MATLAB Function: '<S4>/MATLAB Function'
   *  SignalConversion generated from: '<S4>/Out1'
   */
  rtMerge = rtMerge * 0.0;
}

/* Model step function */
void untitled_step(void)
{
  /* Gain: '<Root>/Gain1' incorporates:
   *  Inport: '<Root>/delta_w'
   */
  rtMerge = 0.062651666666666675 * rtdelta_w;

  /* If: '<Root>/If' */
  if (rtMerge < 0.02789) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem' incorporates:
     *  ActionPort: '<S1>/Action Port'
     */
    /* SignalConversion generated from: '<S1>/y' incorporates:
     *  MATLAB Function: '<S1>/MATLAB Function'
     */
    rtMerge = rtMerge * 0.0;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem' */
  } else if ((0.782742 >= rtMerge) >= 0.02789) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    /* SignalConversion generated from: '<S3>/Out1' incorporates:
     *  MATLAB Function: '<S3>/MATLAB Function'
     */
    rtMerge = rtMerge * 0.0;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem2' */
  } else if ((1.04884 > rtMerge) >= 0.782742) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    IfActionSubsystem3();

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem3' */
  } else {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem4' incorporates:
     *  ActionPort: '<S5>/Action Port'
     */
    /* SignalConversion generated from: '<S5>/Out1' incorporates:
     *  MATLAB Function: '<S5>/MATLAB Function'
     */
    rtMerge = 0.0;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem4' */
  }

  /* End of If: '<Root>/If' */

  /* Outport: '<Root>/Velocidad_linealizada' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   */
  rtVelocidad_linealizada = (uint32_T)rtMerge;
}

/* Model initialize function */
void untitled_initialize(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
