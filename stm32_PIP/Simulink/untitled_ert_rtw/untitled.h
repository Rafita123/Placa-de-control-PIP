/*
 * File: untitled.h
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

#ifndef RTW_HEADER_untitled_h_
#define RTW_HEADER_untitled_h_
#ifndef untitled_COMMON_INCLUDES_
#define untitled_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* untitled_COMMON_INCLUDES_ */

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
extern void untitled_initialize(void);
extern void untitled_step(void);

/* Exported data declaration */

/* Data with Exported storage */
extern real_T rtMerge;                 /* '<Root>/Merge' */
extern uint32_T rtVelocidad_linealizada;/* '<Root>/Velocidad_linealizada' */
extern real_T rtdelta_w;               /* '<Root>/delta_w' */

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
 * '<Root>' : 'untitled'
 * '<S1>'   : 'untitled/If Action Subsystem'
 * '<S2>'   : 'untitled/If Action Subsystem1'
 * '<S3>'   : 'untitled/If Action Subsystem2'
 * '<S4>'   : 'untitled/If Action Subsystem3'
 * '<S5>'   : 'untitled/If Action Subsystem4'
 * '<S6>'   : 'untitled/If Action Subsystem/MATLAB Function'
 * '<S7>'   : 'untitled/If Action Subsystem1/MATLAB Function'
 * '<S8>'   : 'untitled/If Action Subsystem2/MATLAB Function'
 * '<S9>'   : 'untitled/If Action Subsystem3/MATLAB Function'
 * '<S10>'  : 'untitled/If Action Subsystem4/MATLAB Function'
 */
#endif                                 /* RTW_HEADER_untitled_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
