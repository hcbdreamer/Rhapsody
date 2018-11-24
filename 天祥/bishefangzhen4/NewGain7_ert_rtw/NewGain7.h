//
// File: NewGain7.h
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
#ifndef RTW_HEADER_NewGain7_h_
#define RTW_HEADER_NewGain7_h_
#include <stddef.h>
#ifndef NewGain7_COMMON_INCLUDES_
# define NewGain7_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 // NewGain7_COMMON_INCLUDES_

#include "NewGain7_types.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

// External inputs (root inport signals with auto storage)
typedef struct {
  real_T In1;                          // '<Root>/In1'
} ExternalInputs_NewGain7_T;

// External outputs (root outports fed by signals with auto storage)
typedef struct {
  real_T Out1;                         // '<Root>/Out1'
} ExternalOutputs_NewGain7_T;

// Real-time Model Data Structure
struct tag_RTM_NewGain7_T {
  const char_T * volatile errorStatus;
};

#ifdef __cplusplus

extern "C" {

#endif

  // External inputs (root inport signals with auto storage)
  extern ExternalInputs_NewGain7_T NewGain7_U;

  // External outputs (root outports fed by signals with auto storage)
  extern ExternalOutputs_NewGain7_T NewGain7_Y;

#ifdef __cplusplus

}
#endif

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void NewGain7_initialize(void);
  extern void NewGain7_step(void);
  extern void NewGain7_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_NewGain7_T *const NewGain7_M;

#ifdef __cplusplus

}
#endif

//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'NewGain7'

#endif                                 // RTW_HEADER_NewGain7_h_

//
// File trailer for generated code.
//
// [EOF]
//
