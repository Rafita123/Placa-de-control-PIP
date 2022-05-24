/*
 * File: ex_bus_struct_in_code.c
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

#include "ex_bus_struct_in_code.h"

/* Block signals and states (default storage) */
DW rtDW;

/* External inputs (root inport signals with default storage) */
ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Model step function for TID0 */
void ex_bus_struct_in_code_step0(void) /* Sample time: [0.2s, 0.0s] */
{
  /* (no output/update code required) */
}

/* Model step function for TID1 */
void ex_bus_struct_in_code_step1(void) /* Sample time: [1.0s, 0.0s] */
{
  real_T rtb_Add;
  real_T rtb_FilterCoefficient;

  /* Sum: '<Root>/Add' incorporates:
   *  Constant: '<Root>/mmBTU//hr Setpoint'
   *  Constant: '<S1>/Nominal Air Flow - Bio'
   *  Constant: '<S3>/Nominal Air Flow - Coal'
   *  Constant: '<S4>/Nominal Air Flow - Gas'
   *  Gain: '<S1>/Air Coeff - Bio'
   *  Gain: '<S1>/mmBTU//cf - Bio'
   *  Gain: '<S3>/Air Coeff - Coal'
   *  Gain: '<S3>/mmBTU//cf - Coal'
   *  Gain: '<S4>/Air Coeff - Gas'
   *  Gain: '<S4>/mmBTU//cf - Gas'
   *  Inport: '<Root>/Air Flow cf//h'
   *  Inport: '<Root>/Biomass Flow cf//h '
   *  Inport: '<Root>/Coal Flow cf//h'
   *  Inport: '<Root>/Gas Flow cf//h'
   *  Product: '<S1>/Product'
   *  Product: '<S3>/Product'
   *  Product: '<S4>/Product'
   *  Sum: '<Root>/Fuel Energy'
   */
  rtb_Add = 1250.0 - ((27.3 * rtU.BiomassFlowcfh * (1.214 * rtU.AirFlowcfh) /
                       123.65 + 52.6 * rtU.GasFlowcfh * (1.116 * rtU.AirFlowcfh)
                       / 151.8) + 193.4 * rtU.CoalFlowcfh * (1.279 *
    rtU.AirFlowcfh) / 207.1);

  /* Gain: '<S39>/Filter Coefficient' incorporates:
   *  DiscreteIntegrator: '<S31>/Filter'
   *  Gain: '<S30>/Derivative Gain'
   *  Sum: '<S31>/SumD'
   */
  rtb_FilterCoefficient = (0.0 * rtb_Add - rtDW.Filter_DSTATE) * 100.0;

  /* Sum: '<S45>/Sum' incorporates:
   *  DiscreteIntegrator: '<S36>/Integrator'
   * */
  rtb_Add += rtDW.Integrator_DSTATE;

  /* Outport: '<Root>/To Actuator Positions' incorporates:
   *  Sum: '<S45>/Sum'
   */
  rtY.ToActuatorPositions = rtb_Add + rtb_FilterCoefficient;

  /* Update for DiscreteIntegrator: '<S36>/Integrator' */
  rtDW.Integrator_DSTATE = rtb_Add;

  /* Update for DiscreteIntegrator: '<S31>/Filter' */
  rtDW.Filter_DSTATE += rtb_FilterCoefficient;
}

/* Model initialize function */
void ex_bus_struct_in_code_initialize(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
