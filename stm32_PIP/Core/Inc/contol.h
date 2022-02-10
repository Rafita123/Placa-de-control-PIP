/*
 * File: contol.h
 *
 * Code generated for Simulink model 'contol'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Thu Feb 10 18:07:05 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_contol_h_
#define RTW_HEADER_contol_h_
#ifndef contol_COMMON_INCLUDES_
#define contol_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* contol_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Macros for accessing real-time model data structure */

/* Block signals and states (default storage) for system '<Root>' */
typedef struct {
  real_T Integrator_DSTATE;            /* '<S33>/Integrator' */
} DW;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Entrada_Control;              /* '<Root>/Entrada_Control' */
} ExtU;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Salida_Control;               /* '<Root>/Salida_Control' */
} ExtY;

/* Block signals and states (default storage) */
extern DW rtDW;

/* External inputs (root inport signals with default storage) */
extern ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY rtY;

/* Model entry point functions */
extern void contol_initialize(void);
extern void contol_step(void);

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
 * '<Root>' : 'contol'
 * '<S1>'   : 'contol/PID Controller'
 * '<S2>'   : 'contol/PID Controller/Anti-windup'
 * '<S3>'   : 'contol/PID Controller/D Gain'
 * '<S4>'   : 'contol/PID Controller/Filter'
 * '<S5>'   : 'contol/PID Controller/Filter ICs'
 * '<S6>'   : 'contol/PID Controller/I Gain'
 * '<S7>'   : 'contol/PID Controller/Ideal P Gain'
 * '<S8>'   : 'contol/PID Controller/Ideal P Gain Fdbk'
 * '<S9>'   : 'contol/PID Controller/Integrator'
 * '<S10>'  : 'contol/PID Controller/Integrator ICs'
 * '<S11>'  : 'contol/PID Controller/N Copy'
 * '<S12>'  : 'contol/PID Controller/N Gain'
 * '<S13>'  : 'contol/PID Controller/P Copy'
 * '<S14>'  : 'contol/PID Controller/Parallel P Gain'
 * '<S15>'  : 'contol/PID Controller/Reset Signal'
 * '<S16>'  : 'contol/PID Controller/Saturation'
 * '<S17>'  : 'contol/PID Controller/Saturation Fdbk'
 * '<S18>'  : 'contol/PID Controller/Sum'
 * '<S19>'  : 'contol/PID Controller/Sum Fdbk'
 * '<S20>'  : 'contol/PID Controller/Tracking Mode'
 * '<S21>'  : 'contol/PID Controller/Tracking Mode Sum'
 * '<S22>'  : 'contol/PID Controller/Tsamp - Integral'
 * '<S23>'  : 'contol/PID Controller/Tsamp - Ngain'
 * '<S24>'  : 'contol/PID Controller/postSat Signal'
 * '<S25>'  : 'contol/PID Controller/preSat Signal'
 * '<S26>'  : 'contol/PID Controller/Anti-windup/Passthrough'
 * '<S27>'  : 'contol/PID Controller/D Gain/Disabled'
 * '<S28>'  : 'contol/PID Controller/Filter/Disabled'
 * '<S29>'  : 'contol/PID Controller/Filter ICs/Disabled'
 * '<S30>'  : 'contol/PID Controller/I Gain/Internal Parameters'
 * '<S31>'  : 'contol/PID Controller/Ideal P Gain/Passthrough'
 * '<S32>'  : 'contol/PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S33>'  : 'contol/PID Controller/Integrator/Discrete'
 * '<S34>'  : 'contol/PID Controller/Integrator ICs/Internal IC'
 * '<S35>'  : 'contol/PID Controller/N Copy/Disabled wSignal Specification'
 * '<S36>'  : 'contol/PID Controller/N Gain/Disabled'
 * '<S37>'  : 'contol/PID Controller/P Copy/Disabled'
 * '<S38>'  : 'contol/PID Controller/Parallel P Gain/Internal Parameters'
 * '<S39>'  : 'contol/PID Controller/Reset Signal/Disabled'
 * '<S40>'  : 'contol/PID Controller/Saturation/Passthrough'
 * '<S41>'  : 'contol/PID Controller/Saturation Fdbk/Disabled'
 * '<S42>'  : 'contol/PID Controller/Sum/Sum_PI'
 * '<S43>'  : 'contol/PID Controller/Sum Fdbk/Disabled'
 * '<S44>'  : 'contol/PID Controller/Tracking Mode/Disabled'
 * '<S45>'  : 'contol/PID Controller/Tracking Mode Sum/Passthrough'
 * '<S46>'  : 'contol/PID Controller/Tsamp - Integral/Passthrough'
 * '<S47>'  : 'contol/PID Controller/Tsamp - Ngain/Passthrough'
 * '<S48>'  : 'contol/PID Controller/postSat Signal/Forward_Path'
 * '<S49>'  : 'contol/PID Controller/preSat Signal/Forward_Path'
 */
#endif                                 /* RTW_HEADER_contol_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
