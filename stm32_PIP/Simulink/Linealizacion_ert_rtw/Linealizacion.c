/*
 * File: Linealizacion.c
 *
 * Code generated for Simulink model 'Linealizacion'.
 *
 * Model version                  : 1.18
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Mon Mar 21 18:02:02 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "Linealizacion.h"

/* Exported data definition */

/* Data with Exported storage */
real_T rtEntrada_Linealizacion;        /* '<Root>/Entrada_Linealizacion' */
uint32_T rtSalida_Linealizacion;       /* '<Root>/Salida_Linealizacion' */
real_T rtp_SignalC1[2];                /* '<Root>/Data Store Memory3' */
real_T rtp_SignalC2[2];                /* '<Root>/Data Store Memory1' */
real_T rtp_SignalC3[2];                /* '<Root>/Data Store Memory' */
real_T rtp_SignalC4[2];                /* '<Root>/Data Store Memory2' */

/* Real-time model */
static RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;

/* Model step function */
void Linealizacion_step(void)
{
  real_T rtu_p;

  /* Gain: '<Root>/Gain1' incorporates:
   *  DataStoreWrite: '<Root>/Data Store Write'
   *  Inport: '<Root>/Entrada_Linealizacion'
   */
  rtu_p = 0.0016047071409467772 * rtEntrada_Linealizacion;

  /* If: '<Root>/If' incorporates:
   *  DataStoreRead: '<Root>/Data Store Read'
   */
  if (!(rtu_p == 0.0)) {
    if (0.0141833 > rtu_p) {
      /* Outputs for IfAction SubSystem: '<Root>/Condición 1' incorporates:
       *  ActionPort: '<S1>/Action Port'
       */
      /* SignalConversion generated from: '<S1>/y' incorporates:
       *  DataStoreRead: '<S1>/Data Store Read'
       *  DataStoreRead: '<S1>/Data Store Read1'
       *  MATLAB Function: '<S1>/MATLAB Function'
       */
      rtu_p = rtu_p * rtp_SignalC1[0] + rtp_SignalC1[1];

      /* End of Outputs for SubSystem: '<Root>/Condición 1' */
    } else if ((0.8 >= rtu_p) >= 0.0141833) {
      /* Outputs for IfAction SubSystem: '<Root>/Condición 2' incorporates:
       *  ActionPort: '<S2>/Action Port'
       */
      /* SignalConversion generated from: '<S2>/Out1' incorporates:
       *  DataStoreRead: '<S2>/Data Store Read'
       *  DataStoreRead: '<S2>/Data Store Read1'
       *  MATLAB Function: '<S2>/MATLAB Function'
       */
      rtu_p = rtu_p * rtp_SignalC2[0] + rtp_SignalC2[1];

      /* End of Outputs for SubSystem: '<Root>/Condición 2' */
    } else if ((1.05 > rtu_p) >= 0.8) {
      /* Outputs for IfAction SubSystem: '<Root>/Conición 5' incorporates:
       *  ActionPort: '<S6>/Action Port'
       */
      /* SignalConversion generated from: '<S6>/Out1' incorporates:
       *  DataStoreRead: '<S6>/Data Store Read1'
       *  DataStoreRead: '<S6>/Data Store Read2'
       *  MATLAB Function: '<S6>/MATLAB Function'
       */
      rtu_p = rtu_p * rtp_SignalC3[0] + rtp_SignalC3[1];

      /* End of Outputs for SubSystem: '<Root>/Conición 5' */
    } else {
      /* Outputs for IfAction SubSystem: '<Root>/Condición 3' incorporates:
       *  ActionPort: '<S3>/Action Port'
       */
      /* SignalConversion generated from: '<S3>/Out1' incorporates:
       *  Constant: '<S3>/Constant'
       *  DataStoreRead: '<S3>/Data Store Read2'
       *  MATLAB Function: '<S3>/MATLAB Function'
       */
      rtu_p = 1.2 * rtp_SignalC4[0] + rtp_SignalC4[1];

      /* End of Outputs for SubSystem: '<Root>/Condición 3' */
    }
  }

  /* End of If: '<Root>/If' */

  /* Outport: '<Root>/Salida_Linealizacion' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   */
  rtSalida_Linealizacion = (uint32_T)rtu_p;
}

/* Model initialize function */
void Linealizacion_initialize(void)
{
  /* Start for DataStoreMemory: '<Root>/Data Store Memory' */
  rtp_SignalC3[0] = 3113.0;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory1' */
  rtp_SignalC2[0] = 1439.0;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory2' */
  rtp_SignalC4[0] = 6778.0;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory3' */
  rtp_SignalC1[0] = 42990.0;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory' */
  rtp_SignalC3[1] = -691.0;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory1' */
  rtp_SignalC2[1] = 606.7;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory2' */
  rtp_SignalC4[1] = -4663.0;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory3' */
  rtp_SignalC1[1] = 0.0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
