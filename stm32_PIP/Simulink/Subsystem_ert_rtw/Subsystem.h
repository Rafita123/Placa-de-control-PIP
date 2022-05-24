/*
 * File: Subsystem.h
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

#ifndef RTW_HEADER_Subsystem_h_
#define RTW_HEADER_Subsystem_h_
#ifndef Subsystem_COMMON_INCLUDES_
#define Subsystem_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Subsystem_COMMON_INCLUDES_ */

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
extern void Subsystem_initialize(void);
extern void Subsystem_step(void);

/* Exported data declaration */

/* Data with Exported storage */
extern real_T p_SignalC1;              /* '<S1>/Data Store Memory3' */
extern real_T p_SignalC2[2];           /* '<S1>/Data Store Memory1' */
extern real_T p_SignalC3[2];           /* '<S1>/Data Store Memory' */
extern real_T p_SignalC4[2];           /* '<S1>/Data Store Memory2' */
extern uint32_T rtVelocidad_linealizada;/* '<Root>/Velocidad_linealizada' */
extern real_T rtdelta_w;               /* '<Root>/delta_w' */
extern real_T u;                       /* '<S1>/Data Store Memory4' */

/* Real-time Model object */
extern RT_MODEL *const rtM;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Note that this particular code originates from a subsystem build,
 * and has its own system numbers different from the parent model.
 * Refer to the system hierarchy for this subsystem below, and use the
 * MATLAB hilite_system command to trace the generated code back
 * to the parent model.  For example,
 *
 * hilite_system('ArchivoCopiado/Subsystem')    - opens subsystem ArchivoCopiado/Subsystem
 * hilite_system('ArchivoCopiado/Subsystem/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'ArchivoCopiado'
 * '<S1>'   : 'ArchivoCopiado/Subsystem'
 * '<S2>'   : 'ArchivoCopiado/Subsystem/Condición 1'
 * '<S3>'   : 'ArchivoCopiado/Subsystem/Condición 2'
 * '<S4>'   : 'ArchivoCopiado/Subsystem/Condición 3'
 * '<S5>'   : 'ArchivoCopiado/Subsystem/Condición 4'
 * '<S6>'   : 'ArchivoCopiado/Subsystem/Conición 5'
 * '<S7>'   : 'ArchivoCopiado/Subsystem/Condición 1/MATLAB Function'
 * '<S8>'   : 'ArchivoCopiado/Subsystem/Condición 2/MATLAB Function'
 * '<S9>'   : 'ArchivoCopiado/Subsystem/Condición 3/MATLAB Function'
 * '<S10>'  : 'ArchivoCopiado/Subsystem/Condición 4/MATLAB Function'
 * '<S11>'  : 'ArchivoCopiado/Subsystem/Conición 5/MATLAB Function'
 */
#endif                                 /* RTW_HEADER_Subsystem_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
