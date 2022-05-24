/*
 * File: Subsystem.c
 *
 * Code generated for Simulink model 'Subsystem'.
 *
 * Model version                  : 1.86
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Fri Mar 11 21:02:48 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "Subsystem.h"

/* Exported data definition */

/* Data with Exported storage */
real_T p_SignalC1;                     /* '<S1>/Data Store Memory3' */
real_T p_SignalC2[2];                  /* '<S1>/Data Store Memory1' */
real_T p_SignalC3[2];                  /* '<S1>/Data Store Memory' */
real_T p_SignalC4[2];                  /* '<S1>/Data Store Memory2' */
uint32_T rtVelocidad_linealizada;      /* '<Root>/Velocidad_linealizada' */
real_T rtdelta_w;                      /* '<Root>/delta_w' */
real_T u;                              /* '<S1>/Data Store Memory4' */

/* Real-time model */
static RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;

/* Model step function */
void Subsystem_step(void)
{
  /* Gain: '<S1>/Gain1' incorporates:
   *  DataStoreWrite: '<S1>/Data Store Write'
   *  Inport: '<Root>/delta_w'
   */
  u = 622.33333333333337 * rtdelta_w;

  /* If: '<S1>/If' incorporates:
   *  DataStoreRead: '<S1>/Data Store Read'
   */
  if (u < 0.02789) {
    /* Outputs for IfAction SubSystem: '<S1>/Condición 1' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    /* Outport: '<Root>/Velocidad_linealizada' incorporates:
     *  DataStoreRead: '<S2>/Data Store Read'
     *  DataStoreRead: '<S2>/Data Store Read1'
     *  DataTypeConversion: '<S1>/Data Type Conversion'
     *  MATLAB Function: '<S2>/MATLAB Function'
     */
    rtVelocidad_linealizada = (uint32_T)(u * p_SignalC1);

    /* End of Outputs for SubSystem: '<S1>/Condición 1' */
  } else if ((0.782742 >= u) >= 0.02789) {
    /* Outputs for IfAction SubSystem: '<S1>/Condición 2' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    /* Outport: '<Root>/Velocidad_linealizada' incorporates:
     *  DataStoreRead: '<S3>/Data Store Read'
     *  DataStoreRead: '<S3>/Data Store Read1'
     *  DataTypeConversion: '<S1>/Data Type Conversion'
     *  MATLAB Function: '<S3>/MATLAB Function'
     */
    rtVelocidad_linealizada = (uint32_T)(u * p_SignalC2[0] + p_SignalC2[1]);

    /* End of Outputs for SubSystem: '<S1>/Condición 2' */
  } else if ((1.04884 > u) >= 0.782742) {
    /* Outputs for IfAction SubSystem: '<S1>/Condición 3' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    /* Outport: '<Root>/Velocidad_linealizada' incorporates:
     *  DataStoreRead: '<S4>/Data Store Read'
     *  DataStoreRead: '<S4>/Data Store Read1'
     *  DataTypeConversion: '<S1>/Data Type Conversion'
     *  MATLAB Function: '<S4>/MATLAB Function'
     */
    rtVelocidad_linealizada = (uint32_T)(u * p_SignalC3[0] + p_SignalC3[1]);

    /* End of Outputs for SubSystem: '<S1>/Condición 3' */
  } else {
    /* Outputs for IfAction SubSystem: '<S1>/Conición 5' incorporates:
     *  ActionPort: '<S6>/Action Port'
     */
    /* Outport: '<Root>/Velocidad_linealizada' incorporates:
     *  Constant: '<S6>/Constant'
     *  DataStoreRead: '<S6>/Data Store Read'
     *  DataTypeConversion: '<S1>/Data Type Conversion'
     *  MATLAB Function: '<S6>/MATLAB Function'
     */
    rtVelocidad_linealizada = (uint32_T)(1.2 * p_SignalC4[0] + p_SignalC4[1]);

    /* End of Outputs for SubSystem: '<S1>/Conición 5' */
  }

  /* End of If: '<S1>/If' */
}

/* Model initialize function */
void Subsystem_initialize(void)
{
  /* Start for DataStoreMemory: '<S1>/Data Store Memory' */
  p_SignalC3[0] = 3557.0;

  /* Start for DataStoreMemory: '<S1>/Data Store Memory1' */
  p_SignalC2[0] = 1459.0;

  /* Start for DataStoreMemory: '<S1>/Data Store Memory2' */
  p_SignalC4[0] = 7100.0;

  /* Start for DataStoreMemory: '<S1>/Data Store Memory' */
  p_SignalC3[1] = -1052.0;

  /* Start for DataStoreMemory: '<S1>/Data Store Memory1' */
  p_SignalC2[1] = 601.2;

  /* Start for DataStoreMemory: '<S1>/Data Store Memory2' */
  p_SignalC4[1] = -4752.0;

  /* Start for DataStoreMemory: '<S1>/Data Store Memory3' */
  p_SignalC1 = 23305.844388669771;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
