/*
 * File: ex_bus_struct_in_code.h
 *
 * Code generated for Simulink model 'ex_bus_struct_in_code'.
 *
 * Model version                  : 8.0
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sun Mar  6 19:29:54 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 7
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_ex_bus_struct_in_code_h_
#define RTW_HEADER_ex_bus_struct_in_code_h_
#ifndef ex_bus_struct_in_code_COMMON_INCLUDES_
#define ex_bus_struct_in_code_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                              /* ex_bus_struct_in_code_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Macros for accessing real-time model data structure */

/* Block signals and states (default storage) for system '<Root>' */
typedef struct {
  real_T Integrator_DSTATE;            /* '<S36>/Integrator' */
  real_T Filter_DSTATE;                /* '<S31>/Filter' */
} DW;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T BiomassFlowcfh;               /* '<Root>/Biomass Flow cf//h ' */
  real_T GasFlowcfh;                   /* '<Root>/Gas Flow cf//h' */
  real_T CoalFlowcfh;                  /* '<Root>/Coal Flow cf//h' */
  real_T AirFlowcfh;                   /* '<Root>/Air Flow cf//h' */
} ExtU;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T ToActuatorPositions;          /* '<Root>/To Actuator Positions' */
} ExtY;

/* Block signals and states (default storage) */
extern DW rtDW;

/* External inputs (root inport signals with default storage) */
extern ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY rtY;

/* Model entry point functions */
extern void ex_bus_struct_in_code_initialize(void);
extern void ex_bus_struct_in_code_step0(void);
extern void ex_bus_struct_in_code_step1(void);

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S33>/Integral Gain' : Eliminated nontunable gain of 1
 * Block '<S41>/Proportional Gain' : Eliminated nontunable gain of 1
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
 * '<Root>' : 'ex_bus_struct_in_code'
 * '<S1>'   : 'ex_bus_struct_in_code/Biomass Calc'
 * '<S2>'   : 'ex_bus_struct_in_code/Boiler Control'
 * '<S3>'   : 'ex_bus_struct_in_code/Coal Calc'
 * '<S4>'   : 'ex_bus_struct_in_code/Gas Calc'
 * '<S5>'   : 'ex_bus_struct_in_code/Boiler Control/Anti-windup'
 * '<S6>'   : 'ex_bus_struct_in_code/Boiler Control/D Gain'
 * '<S7>'   : 'ex_bus_struct_in_code/Boiler Control/Filter'
 * '<S8>'   : 'ex_bus_struct_in_code/Boiler Control/Filter ICs'
 * '<S9>'   : 'ex_bus_struct_in_code/Boiler Control/I Gain'
 * '<S10>'  : 'ex_bus_struct_in_code/Boiler Control/Ideal P Gain'
 * '<S11>'  : 'ex_bus_struct_in_code/Boiler Control/Ideal P Gain Fdbk'
 * '<S12>'  : 'ex_bus_struct_in_code/Boiler Control/Integrator'
 * '<S13>'  : 'ex_bus_struct_in_code/Boiler Control/Integrator ICs'
 * '<S14>'  : 'ex_bus_struct_in_code/Boiler Control/N Copy'
 * '<S15>'  : 'ex_bus_struct_in_code/Boiler Control/N Gain'
 * '<S16>'  : 'ex_bus_struct_in_code/Boiler Control/P Copy'
 * '<S17>'  : 'ex_bus_struct_in_code/Boiler Control/Parallel P Gain'
 * '<S18>'  : 'ex_bus_struct_in_code/Boiler Control/Reset Signal'
 * '<S19>'  : 'ex_bus_struct_in_code/Boiler Control/Saturation'
 * '<S20>'  : 'ex_bus_struct_in_code/Boiler Control/Saturation Fdbk'
 * '<S21>'  : 'ex_bus_struct_in_code/Boiler Control/Sum'
 * '<S22>'  : 'ex_bus_struct_in_code/Boiler Control/Sum Fdbk'
 * '<S23>'  : 'ex_bus_struct_in_code/Boiler Control/Tracking Mode'
 * '<S24>'  : 'ex_bus_struct_in_code/Boiler Control/Tracking Mode Sum'
 * '<S25>'  : 'ex_bus_struct_in_code/Boiler Control/Tsamp - Integral'
 * '<S26>'  : 'ex_bus_struct_in_code/Boiler Control/Tsamp - Ngain'
 * '<S27>'  : 'ex_bus_struct_in_code/Boiler Control/postSat Signal'
 * '<S28>'  : 'ex_bus_struct_in_code/Boiler Control/preSat Signal'
 * '<S29>'  : 'ex_bus_struct_in_code/Boiler Control/Anti-windup/Passthrough'
 * '<S30>'  : 'ex_bus_struct_in_code/Boiler Control/D Gain/Internal Parameters'
 * '<S31>'  : 'ex_bus_struct_in_code/Boiler Control/Filter/Disc. Forward Euler Filter'
 * '<S32>'  : 'ex_bus_struct_in_code/Boiler Control/Filter ICs/Internal IC - Filter'
 * '<S33>'  : 'ex_bus_struct_in_code/Boiler Control/I Gain/Internal Parameters'
 * '<S34>'  : 'ex_bus_struct_in_code/Boiler Control/Ideal P Gain/Passthrough'
 * '<S35>'  : 'ex_bus_struct_in_code/Boiler Control/Ideal P Gain Fdbk/Disabled'
 * '<S36>'  : 'ex_bus_struct_in_code/Boiler Control/Integrator/Discrete'
 * '<S37>'  : 'ex_bus_struct_in_code/Boiler Control/Integrator ICs/Internal IC'
 * '<S38>'  : 'ex_bus_struct_in_code/Boiler Control/N Copy/Disabled'
 * '<S39>'  : 'ex_bus_struct_in_code/Boiler Control/N Gain/Internal Parameters'
 * '<S40>'  : 'ex_bus_struct_in_code/Boiler Control/P Copy/Disabled'
 * '<S41>'  : 'ex_bus_struct_in_code/Boiler Control/Parallel P Gain/Internal Parameters'
 * '<S42>'  : 'ex_bus_struct_in_code/Boiler Control/Reset Signal/Disabled'
 * '<S43>'  : 'ex_bus_struct_in_code/Boiler Control/Saturation/Passthrough'
 * '<S44>'  : 'ex_bus_struct_in_code/Boiler Control/Saturation Fdbk/Disabled'
 * '<S45>'  : 'ex_bus_struct_in_code/Boiler Control/Sum/Sum_PID'
 * '<S46>'  : 'ex_bus_struct_in_code/Boiler Control/Sum Fdbk/Disabled'
 * '<S47>'  : 'ex_bus_struct_in_code/Boiler Control/Tracking Mode/Disabled'
 * '<S48>'  : 'ex_bus_struct_in_code/Boiler Control/Tracking Mode Sum/Passthrough'
 * '<S49>'  : 'ex_bus_struct_in_code/Boiler Control/Tsamp - Integral/Passthrough'
 * '<S50>'  : 'ex_bus_struct_in_code/Boiler Control/Tsamp - Ngain/Passthrough'
 * '<S51>'  : 'ex_bus_struct_in_code/Boiler Control/postSat Signal/Forward_Path'
 * '<S52>'  : 'ex_bus_struct_in_code/Boiler Control/preSat Signal/Forward_Path'
 */
#endif                                 /* RTW_HEADER_ex_bus_struct_in_code_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
