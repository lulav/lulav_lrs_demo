/*
 * rect_traj.h
 *
 * Code generation for model "rect_traj".
 *
 * Model version              : 1.78
 * Simulink Coder version : 9.7 (R2022a) 13-Nov-2021
 * C++ source code generated on : Tue Jun 28 08:23:07 2022
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_rect_traj_h_
#define RTW_HEADER_rect_traj_h_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#include "rect_traj_types.h"
#include <string.h>
#include <stddef.h>

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
struct B_rect_traj_T {
  SL_Bus_rect_traj_geometry_msgs_PoseStamped In1;/* '<S5>/In1' */
  SL_Bus_rect_traj_geometry_msgs_PoseStamped BusAssignment;/* '<Root>/Bus Assignment' */
  real_T p[15];
  char_T b_zeroDelimTopic[32];
  char_T b_zeroDelimTopic_m[28];
  char_T b_zeroDelimName[25];
  real_T dv[3];
  real_T dv1[3];
};

/* Block states (default storage) for system '<Root>' */
struct DW_rect_traj_T {
  ros_slros_internal_block_GetP_T obj; /* '<Root>/Get Parameter3' */
  ros_slros_internal_block_GetP_T obj_l;/* '<Root>/Get Parameter2' */
  ros_slros_internal_block_GetP_T obj_j;/* '<Root>/Get Parameter1' */
  ros_slros_internal_block_GetP_T obj_n;/* '<Root>/Get Parameter' */
  ros_slroscpp_internal_block_P_T obj_f;/* '<S3>/SinkBlock' */
  ros_slros_internal_block_SetP_T obj_k;/* '<Root>/Set Parameter' */
  ros_slroscpp_internal_block_S_T obj_lb;/* '<S4>/SourceBlock' */
  real_T state[3];                     /* '<Root>/MATLAB Function' */
  real_T flag;                         /* '<Root>/MATLAB Function' */
  real_T counter;                      /* '<Root>/MATLAB Function' */
  boolean_T objisempty;                /* '<S4>/SourceBlock' */
  boolean_T objisempty_n;              /* '<Root>/Set Parameter' */
  boolean_T objisempty_p;              /* '<S3>/SinkBlock' */
  boolean_T state_not_empty;           /* '<Root>/MATLAB Function' */
  boolean_T objisempty_d;              /* '<Root>/Get Parameter3' */
  boolean_T objisempty_m;              /* '<Root>/Get Parameter2' */
  boolean_T objisempty_b;              /* '<Root>/Get Parameter1' */
  boolean_T objisempty_bi;             /* '<Root>/Get Parameter' */
};

/* Parameters (default storage) */
struct P_rect_traj_T_ {
  SL_Bus_rect_traj_geometry_msgs_PoseStamped Constant_Value;/* Computed Parameter: Constant_Value
                                                             * Referenced by: '<S1>/Constant'
                                                             */
  SL_Bus_rect_traj_geometry_msgs_PoseStamped Out1_Y0;/* Computed Parameter: Out1_Y0
                                                      * Referenced by: '<S5>/Out1'
                                                      */
  SL_Bus_rect_traj_geometry_msgs_PoseStamped Constant_Value_l;/* Computed Parameter: Constant_Value_l
                                                               * Referenced by: '<S4>/Constant'
                                                               */
};

/* Real-time Model Data Structure */
struct tag_RTM_rect_traj_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
#ifdef __cplusplus

extern "C" {

#endif

  extern P_rect_traj_T rect_traj_P;

#ifdef __cplusplus

}
#endif

/* Block signals (default storage) */
#ifdef __cplusplus

extern "C" {

#endif

  extern struct B_rect_traj_T rect_traj_B;

#ifdef __cplusplus

}
#endif

/* Block states (default storage) */
extern struct DW_rect_traj_T rect_traj_DW;

#ifdef __cplusplus

extern "C" {

#endif

  /* Model entry point functions */
  extern void rect_traj_initialize(void);
  extern void rect_traj_step(void);
  extern void rect_traj_terminate(void);

#ifdef __cplusplus

}
#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_rect_traj_T *const rect_traj_M;

#ifdef __cplusplus

}
#endif

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
 * '<Root>' : 'rect_traj'
 * '<S1>'   : 'rect_traj/Blank Message'
 * '<S2>'   : 'rect_traj/MATLAB Function'
 * '<S3>'   : 'rect_traj/Publish'
 * '<S4>'   : 'rect_traj/Subscribe'
 * '<S5>'   : 'rect_traj/Subscribe/Enabled Subsystem'
 */
#endif                                 /* RTW_HEADER_rect_traj_h_ */
