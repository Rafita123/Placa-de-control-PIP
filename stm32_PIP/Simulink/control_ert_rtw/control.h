/*
 * File: control.h
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

#ifndef RTW_HEADER_control_h_
#define RTW_HEADER_control_h_
#ifndef control_COMMON_INCLUDES_
#define control_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* control_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Macros for accessing real-time model data structure */

/* Model entry point functions */
extern void control_initialize(void);
extern void control_step(void);

/* Exported data declaration */

/* Data with Exported storage */
extern real_T rtEntrada_Control;       /* '<Root>/Entrada_Control' */
extern real_T rtIntegrator_DSTATE;     /* '<S35>/Integrator' */
extern real_T rtSalida_Control;        /* '<Root>/Salida_Control' */
extern real_T rtUD_DSTATE;             /* '<S28>/UD' */

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S28>/DTDup' : Unused code path elimination
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
 * '<Root>' : 'control'
 * '<S1>'   : 'control/PID Controller'
 * '<S2>'   : 'control/PID Controller/Anti-windup'
 * '<S3>'   : 'control/PID Controller/D Gain'
 * '<S4>'   : 'control/PID Controller/Filter'
 * '<S5>'   : 'control/PID Controller/Filter ICs'
 * '<S6>'   : 'control/PID Controller/I Gain'
 * '<S7>'   : 'control/PID Controller/Ideal P Gain'
 * '<S8>'   : 'control/PID Controller/Ideal P Gain Fdbk'
 * '<S9>'   : 'control/PID Controller/Integrator'
 * '<S10>'  : 'control/PID Controller/Integrator ICs'
 * '<S11>'  : 'control/PID Controller/N Copy'
 * '<S12>'  : 'control/PID Controller/N Gain'
 * '<S13>'  : 'control/PID Controller/P Copy'
 * '<S14>'  : 'control/PID Controller/Parallel P Gain'
 * '<S15>'  : 'control/PID Controller/Reset Signal'
 * '<S16>'  : 'control/PID Controller/Saturation'
 * '<S17>'  : 'control/PID Controller/Saturation Fdbk'
 * '<S18>'  : 'control/PID Controller/Sum'
 * '<S19>'  : 'control/PID Controller/Sum Fdbk'
 * '<S20>'  : 'control/PID Controller/Tracking Mode'
 * '<S21>'  : 'control/PID Controller/Tracking Mode Sum'
 * '<S22>'  : 'control/PID Controller/Tsamp - Integral'
 * '<S23>'  : 'control/PID Controller/Tsamp - Ngain'
 * '<S24>'  : 'control/PID Controller/postSat Signal'
 * '<S25>'  : 'control/PID Controller/preSat Signal'
 * '<S26>'  : 'control/PID Controller/Anti-windup/Passthrough'
 * '<S27>'  : 'control/PID Controller/D Gain/Internal Parameters'
 * '<S28>'  : 'control/PID Controller/Filter/Differentiator'
 * '<S29>'  : 'control/PID Controller/Filter/Differentiator/Tsamp'
 * '<S30>'  : 'control/PID Controller/Filter/Differentiator/Tsamp/Internal Ts'
 * '<S31>'  : 'control/PID Controller/Filter ICs/Internal IC - Differentiator'
 * '<S32>'  : 'control/PID Controller/I Gain/Internal Parameters'
 * '<S33>'  : 'control/PID Controller/Ideal P Gain/Passthrough'
 * '<S34>'  : 'control/PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S35>'  : 'control/PID Controller/Integrator/Discrete'
 * '<S36>'  : 'control/PID Controller/Integrator ICs/Internal IC'
 * '<S37>'  : 'control/PID Controller/N Copy/Disabled wSignal Specification'
 * '<S38>'  : 'control/PID Controller/N Gain/Passthrough'
 * '<S39>'  : 'control/PID Controller/P Copy/Disabled'
 * '<S40>'  : 'control/PID Controller/Parallel P Gain/Internal Parameters'
 * '<S41>'  : 'control/PID Controller/Reset Signal/Disabled'
 * '<S42>'  : 'control/PID Controller/Saturation/Passthrough'
 * '<S43>'  : 'control/PID Controller/Saturation Fdbk/Disabled'
 * '<S44>'  : 'control/PID Controller/Sum/Sum_PID'
 * '<S45>'  : 'control/PID Controller/Sum Fdbk/Disabled'
 * '<S46>'  : 'control/PID Controller/Tracking Mode/Disabled'
 * '<S47>'  : 'control/PID Controller/Tracking Mode Sum/Passthrough'
 * '<S48>'  : 'control/PID Controller/Tsamp - Integral/Passthrough'
 * '<S49>'  : 'control/PID Controller/Tsamp - Ngain/Passthrough'
 * '<S50>'  : 'control/PID Controller/postSat Signal/Forward_Path'
 * '<S51>'  : 'control/PID Controller/preSat Signal/Forward_Path'
 */
#endif                                 /* RTW_HEADER_control_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
