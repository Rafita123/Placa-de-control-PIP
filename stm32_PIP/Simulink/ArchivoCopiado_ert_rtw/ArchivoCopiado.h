/*
 * File: ArchivoCopiado.h
 *
 * Code generated for Simulink model 'ArchivoCopiado'.
 *
 * Model version                  : 1.81
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Fri Mar 11 13:54:39 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_ArchivoCopiado_h_
#define RTW_HEADER_ArchivoCopiado_h_
#ifndef ArchivoCopiado_COMMON_INCLUDES_
#define ArchivoCopiado_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* ArchivoCopiado_COMMON_INCLUDES_ */

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
extern void ArchivoCopiado_initialize(void);
extern void ArchivoCopiado_step(void);

/* Real-time Model object */
extern RT_MODEL *const rtM;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/Data Type Conversion' : Unused code path elimination
 */

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
#endif                                 /* RTW_HEADER_ArchivoCopiado_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
