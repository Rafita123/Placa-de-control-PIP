/*
 * File: Linealizacion.h
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

#ifndef RTW_HEADER_Linealizacion_h_
#define RTW_HEADER_Linealizacion_h_
#ifndef Linealizacion_COMMON_INCLUDES_
#define Linealizacion_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Linealizacion_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM RT_MODEL;

/* Real-time Model Data Structure */
struct tag_RTM {
  const char_T * volatile errorStatus;
};

/* Model entry point functions */
extern void Linealizacion_initialize(void);
extern void Linealizacion_step(void);

/* Exported data declaration */

/* Data with Exported storage */
extern real_T rtEntrada_Linealizacion; /* '<Root>/Entrada_Linealizacion' */
extern uint32_T rtSalida_Linealizacion;/* '<Root>/Salida_Linealizacion' */
extern real_T rtp_SignalC1[2];         /* '<Root>/Data Store Memory3' */
extern real_T rtp_SignalC2[2];         /* '<Root>/Data Store Memory1' */
extern real_T rtp_SignalC3[2];         /* '<Root>/Data Store Memory' */
extern real_T rtp_SignalC4[2];         /* '<Root>/Data Store Memory2' */

/* Real-time Model object */
extern RT_MODEL *const rtM;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Linealizacion'
 * '<S1>'   : 'Linealizacion/Condición 1'
 * '<S2>'   : 'Linealizacion/Condición 2'
 * '<S3>'   : 'Linealizacion/Condición 3'
 * '<S4>'   : 'Linealizacion/Condición 4'
 * '<S5>'   : 'Linealizacion/Conición 1'
 * '<S6>'   : 'Linealizacion/Conición 5'
 * '<S7>'   : 'Linealizacion/Condición 1/MATLAB Function'
 * '<S8>'   : 'Linealizacion/Condición 2/MATLAB Function'
 * '<S9>'   : 'Linealizacion/Condición 3/MATLAB Function'
 * '<S10>'  : 'Linealizacion/Condición 4/MATLAB Function'
 * '<S11>'  : 'Linealizacion/Conición 1/MATLAB Function'
 * '<S12>'  : 'Linealizacion/Conición 5/MATLAB Function'
 */
#endif                                 /* RTW_HEADER_Linealizacion_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
