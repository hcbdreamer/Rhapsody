//
// File: NewGain7.cpp
//
// Code generated for Simulink model 'NewGain7'.
//
// Model version                  : 1.1
// Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
// C/C++ source code generated on : Mon Apr 16 09:38:06 2018
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Windows64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "NewGain7.h"
#include "NewGain7_private.h"

// External inputs (root inport signals with auto storage)
ExternalInputs_NewGain7_T NewGain7_U;

// External outputs (root outports fed by signals with auto storage)
ExternalOutputs_NewGain7_T NewGain7_Y;

// Real-time model
RT_MODEL_NewGain7_T NewGain7_M_;
RT_MODEL_NewGain7_T *const NewGain7_M = &NewGain7_M_;

// Model step function
void NewGain7_step(void)
{
  // Outport: '<Root>/Out1' incorporates:
  //   Gain: '<Root>/Gain'
  //   Inport: '<Root>/In1'

  NewGain7_Y.Out1 = 14.29 * NewGain7_U.In1;
}

// Model initialize function
void NewGain7_initialize(void)
{
  // Registration code

  // initialize error status
  rtmSetErrorStatus(NewGain7_M, (NULL));

  // external inputs
  NewGain7_U.In1 = 0.0;

  // external outputs
  NewGain7_Y.Out1 = 0.0;
}

// Model terminate function
void NewGain7_terminate(void)
{
  // (no terminate code required)
}

//
// File trailer for generated code.
//
// [EOF]
//
