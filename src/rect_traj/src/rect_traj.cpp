/*
 * rect_traj.cpp
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

#include "rect_traj.h"
#include "rtwtypes.h"
#include <math.h>

/* Block signals (default storage) */
B_rect_traj_T rect_traj_B;

/* Block states (default storage) */
DW_rect_traj_T rect_traj_DW;

/* Real-time model */
RT_MODEL_rect_traj_T rect_traj_M_ = RT_MODEL_rect_traj_T();
RT_MODEL_rect_traj_T *const rect_traj_M = &rect_traj_M_;

/* Forward declaration for local functions */
static real_T rect_traj_norm(const real_T x[3]);

/* Function for MATLAB Function: '<Root>/MATLAB Function' */
static real_T rect_traj_norm(const real_T x[3])
{
  real_T absxk;
  real_T scale;
  real_T t;
  real_T y;
  scale = 3.3121686421112381E-170;
  absxk = fabs(x[0]);
  if (absxk > 3.3121686421112381E-170) {
    y = 1.0;
    scale = absxk;
  } else {
    t = absxk / 3.3121686421112381E-170;
    y = t * t;
  }

  absxk = fabs(x[1]);
  if (absxk > scale) {
    t = scale / absxk;
    y = y * t * t + 1.0;
    scale = absxk;
  } else {
    t = absxk / scale;
    y += t * t;
  }

  absxk = fabs(x[2]);
  if (absxk > scale) {
    t = scale / absxk;
    y = y * t * t + 1.0;
    scale = absxk;
  } else {
    t = absxk / scale;
    y += t * t;
  }

  return scale * sqrt(y);
}

/* Model step function */
void rect_traj_step(void)
{
  real_T value;
  real_T value_0;
  real_T value_1;
  int32_T rtb_stop_sim;
  int32_T value_2;
  boolean_T b_varargout_1;

  /* Outputs for Atomic SubSystem: '<Root>/Subscribe' */
  /* MATLABSystem: '<S4>/SourceBlock' */
  b_varargout_1 = Sub_rect_traj_5.getLatestMessage(&rect_traj_B.BusAssignment);

  /* Outputs for Enabled SubSystem: '<S4>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S5>/Enable'
   */
  if (b_varargout_1) {
    /* SignalConversion generated from: '<S5>/In1' */
    rect_traj_B.In1 = rect_traj_B.BusAssignment;
  }

  /* End of MATLABSystem: '<S4>/SourceBlock' */
  /* End of Outputs for SubSystem: '<S4>/Enabled Subsystem' */
  /* End of Outputs for SubSystem: '<Root>/Subscribe' */

  /* MATLABSystem: '<Root>/Get Parameter' */
  ParamGet_rect_traj_19.get_parameter(&value);

  /* MATLABSystem: '<Root>/Get Parameter3' */
  ParamGet_rect_traj_22.get_parameter(&value_0);

  /* MATLABSystem: '<Root>/Get Parameter1' */
  ParamGet_rect_traj_20.get_parameter(&value_1);

  /* MATLABSystem: '<Root>/Get Parameter2' */
  ParamGet_rect_traj_21.get_parameter(&value_2);

  /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
   *  MATLABSystem: '<Root>/Get Parameter'
   *  MATLABSystem: '<Root>/Get Parameter1'
   *  MATLABSystem: '<Root>/Get Parameter2'
   *  MATLABSystem: '<Root>/Get Parameter3'
   */
  rect_traj_B.p[0] = 0.0;
  rect_traj_B.p[5] = 0.0;
  rect_traj_B.p[10] = value_0;
  rect_traj_B.p[1] = value;
  rect_traj_B.p[6] = 0.0;
  rect_traj_B.p[11] = value_0;
  rect_traj_B.p[2] = value;
  rect_traj_B.p[7] = value;
  rect_traj_B.p[12] = value_0;
  rect_traj_B.p[3] = 0.0;
  rect_traj_B.p[8] = value;
  rect_traj_B.p[13] = value_0;
  rect_traj_B.p[4] = 0.0;
  rect_traj_B.p[9] = 0.0;
  rect_traj_B.p[14] = 0.0;
  if (!rect_traj_DW.state_not_empty) {
    rect_traj_DW.state[0] = 0.0;
    rect_traj_DW.state[1] = 0.0;
    rect_traj_DW.state[2] = value_0;
    rect_traj_DW.state_not_empty = true;
  }

  rect_traj_B.dv[0] = rect_traj_B.In1.Pose.Position.X - rect_traj_B.p[
    static_cast<int32_T>(rect_traj_DW.flag) - 1];
  rect_traj_B.dv[1] = rect_traj_B.In1.Pose.Position.Y - rect_traj_B.p[
    static_cast<int32_T>(rect_traj_DW.flag) + 4];
  rect_traj_B.dv[2] = rect_traj_B.In1.Pose.Position.Z - rect_traj_B.p[
    static_cast<int32_T>(rect_traj_DW.flag) + 9];
  rtb_stop_sim = 0;
  rect_traj_B.dv1[0] = rect_traj_B.In1.Pose.Position.X - rect_traj_DW.state[0];
  rect_traj_B.dv1[1] = rect_traj_B.In1.Pose.Position.Y - rect_traj_DW.state[1];
  rect_traj_B.dv1[2] = rect_traj_B.In1.Pose.Position.Z - rect_traj_DW.state[2];
  if (rect_traj_norm(rect_traj_B.dv1) < value_1) {
    rect_traj_DW.flag++;
    if ((rect_traj_DW.flag > 4.0) && (rect_traj_DW.counter < value_2)) {
      rect_traj_DW.flag = 1.0;
      rect_traj_DW.counter++;
    } else if (rect_traj_DW.counter >= value_2) {
      rect_traj_DW.flag = 5.0;
    }
  }

  if ((rect_traj_DW.flag == 5.0) && (rect_traj_norm(rect_traj_B.dv) < 0.2)) {
    rtb_stop_sim = 1;
  }

  rect_traj_DW.state[0] = rect_traj_B.p[static_cast<int32_T>(rect_traj_DW.flag)
    - 1];
  rect_traj_DW.state[1] = rect_traj_B.p[static_cast<int32_T>(rect_traj_DW.flag)
    + 4];
  rect_traj_DW.state[2] = rect_traj_B.p[static_cast<int32_T>(rect_traj_DW.flag)
    + 9];

  /* MATLABSystem: '<Root>/Set Parameter' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   */
  ParamSet_rect_traj_16.set_parameter(rtb_stop_sim != 0);

  /* BusAssignment: '<Root>/Bus Assignment' incorporates:
   *  Constant: '<S1>/Constant'
   *  MATLAB Function: '<Root>/MATLAB Function'
   */
  rect_traj_B.BusAssignment = rect_traj_P.Constant_Value;
  rect_traj_B.BusAssignment.Pose.Position.X = rect_traj_DW.state[0];
  rect_traj_B.BusAssignment.Pose.Position.Y = rect_traj_DW.state[1];
  rect_traj_B.BusAssignment.Pose.Position.Z = rect_traj_DW.state[2];

  /* Outputs for Atomic SubSystem: '<Root>/Publish' */
  /* MATLABSystem: '<S3>/SinkBlock' */
  Pub_rect_traj_10.publish(&rect_traj_B.BusAssignment);

  /* End of Outputs for SubSystem: '<Root>/Publish' */
}

/* Model initialize function */
void rect_traj_initialize(void)
{
  /* Registration code */

  /* block I/O */
  (void) memset((static_cast<void *>(&rect_traj_B)), 0,
                sizeof(B_rect_traj_T));

  /* states (dwork) */
  (void) memset(static_cast<void *>(&rect_traj_DW), 0,
                sizeof(DW_rect_traj_T));

  {
    char_T b_zeroDelimName[22];
    char_T b_zeroDelimName_0[20];
    static const char_T tmp[27] = { '/', 'm', 'a', 'v', 'r', 'o', 's', '/', 'l',
      'o', 'c', 'a', 'l', '_', 'p', 'o', 's', 'i', 't', 'i', 'o', 'n', '/', 'p',
      'o', 's', 'e' };

    static const char_T tmp_0[24] = { '/', 'm', 'a', 'v', 'r', 'o', 's', '/',
      'r', 'e', 'c', 't', '_', 't', 'r', 'a', 'j', '/', 'l', 'e', 'n', 'g', 't',
      'h' };

    static const char_T tmp_1[24] = { '/', 'm', 'a', 'v', 'r', 'o', 's', '/',
      'r', 'e', 'c', 't', '_', 't', 'r', 'a', 'j', '/', 'h', 'e', 'i', 'g', 'h',
      't' };

    static const char_T tmp_2[21] = { '/', 'm', 'a', 'v', 'r', 'o', 's', '/',
      'r', 'e', 'c', 't', '_', 't', 'r', 'a', 'j', '/', 't', 'o', 'l' };

    static const char_T tmp_3[19] = { '/', 'm', 'a', 'v', 'r', 'o', 's', '/',
      'r', 'e', 'c', 't', '_', 't', 'r', 'a', 'j', '/', 'n' };

    static const char_T tmp_4[24] = { '/', 'm', 'a', 'v', 'r', 'o', 's', '/',
      'r', 'e', 'c', 't', '_', 't', 'r', 'a', 'j', '/', 'a', 'c', 't', 'i', 'v',
      'e' };

    static const char_T tmp_5[31] = { '/', 'm', 'a', 'v', 'r', 'o', 's', '/',
      's', 'e', 't', 'p', 'o', 'i', 'n', 't', '_', 'p', 'o', 's', 'i', 't', 'i',
      'o', 'n', '/', 'l', 'o', 'c', 'a', 'l' };

    /* Start for Atomic SubSystem: '<Root>/Subscribe' */
    /* Start for MATLABSystem: '<S4>/SourceBlock' */
    rect_traj_DW.obj_lb.matlabCodegenIsDeleted = false;
    rect_traj_DW.objisempty = true;
    rect_traj_DW.obj_lb.isInitialized = 1;
    for (int32_T i = 0; i < 27; i++) {
      rect_traj_B.b_zeroDelimTopic_m[i] = tmp[i];
    }

    rect_traj_B.b_zeroDelimTopic_m[27] = '\x00';
    Sub_rect_traj_5.createSubscriber(&rect_traj_B.b_zeroDelimTopic_m[0], 1);
    rect_traj_DW.obj_lb.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S4>/SourceBlock' */
    /* End of Start for SubSystem: '<Root>/Subscribe' */

    /* Start for MATLABSystem: '<Root>/Get Parameter' */
    rect_traj_DW.obj_n.matlabCodegenIsDeleted = false;
    rect_traj_DW.objisempty_bi = true;
    rect_traj_DW.obj_n.isInitialized = 1;
    for (int32_T i = 0; i < 24; i++) {
      rect_traj_B.b_zeroDelimName[i] = tmp_0[i];
    }

    rect_traj_B.b_zeroDelimName[24] = '\x00';
    ParamGet_rect_traj_19.initialize(&rect_traj_B.b_zeroDelimName[0]);
    ParamGet_rect_traj_19.initialize_error_codes(0, 1, 2, 3);
    ParamGet_rect_traj_19.set_initial_value(10.0);
    rect_traj_DW.obj_n.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<Root>/Get Parameter' */

    /* Start for MATLABSystem: '<Root>/Get Parameter3' */
    rect_traj_DW.obj.matlabCodegenIsDeleted = false;
    rect_traj_DW.objisempty_d = true;
    rect_traj_DW.obj.isInitialized = 1;
    for (int32_T i = 0; i < 24; i++) {
      rect_traj_B.b_zeroDelimName[i] = tmp_1[i];
    }

    rect_traj_B.b_zeroDelimName[24] = '\x00';
    ParamGet_rect_traj_22.initialize(&rect_traj_B.b_zeroDelimName[0]);
    ParamGet_rect_traj_22.initialize_error_codes(0, 1, 2, 3);
    ParamGet_rect_traj_22.set_initial_value(2.5);
    rect_traj_DW.obj.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<Root>/Get Parameter3' */

    /* Start for MATLABSystem: '<Root>/Get Parameter1' */
    rect_traj_DW.obj_j.matlabCodegenIsDeleted = false;
    rect_traj_DW.objisempty_b = true;
    rect_traj_DW.obj_j.isInitialized = 1;
    for (int32_T i = 0; i < 21; i++) {
      b_zeroDelimName[i] = tmp_2[i];
    }

    b_zeroDelimName[21] = '\x00';
    ParamGet_rect_traj_20.initialize(&b_zeroDelimName[0]);
    ParamGet_rect_traj_20.initialize_error_codes(0, 1, 2, 3);
    ParamGet_rect_traj_20.set_initial_value(0.2);
    rect_traj_DW.obj_j.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<Root>/Get Parameter1' */

    /* Start for MATLABSystem: '<Root>/Get Parameter2' */
    rect_traj_DW.obj_l.matlabCodegenIsDeleted = false;
    rect_traj_DW.objisempty_m = true;
    rect_traj_DW.obj_l.isInitialized = 1;
    for (int32_T i = 0; i < 19; i++) {
      b_zeroDelimName_0[i] = tmp_3[i];
    }

    b_zeroDelimName_0[19] = '\x00';
    ParamGet_rect_traj_21.initialize(&b_zeroDelimName_0[0]);
    ParamGet_rect_traj_21.initialize_error_codes(0, 1, 2, 3);
    ParamGet_rect_traj_21.set_initial_value(5);
    rect_traj_DW.obj_l.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<Root>/Get Parameter2' */

    /* Start for MATLABSystem: '<Root>/Set Parameter' */
    rect_traj_DW.obj_k.matlabCodegenIsDeleted = false;
    rect_traj_DW.objisempty_n = true;
    rect_traj_DW.obj_k.isInitialized = 1;
    for (int32_T i = 0; i < 24; i++) {
      rect_traj_B.b_zeroDelimName[i] = tmp_4[i];
    }

    rect_traj_B.b_zeroDelimName[24] = '\x00';
    ParamSet_rect_traj_16.initialize(&rect_traj_B.b_zeroDelimName[0]);
    rect_traj_DW.obj_k.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<Root>/Set Parameter' */

    /* Start for Atomic SubSystem: '<Root>/Publish' */
    /* Start for MATLABSystem: '<S3>/SinkBlock' */
    rect_traj_DW.obj_f.matlabCodegenIsDeleted = false;
    rect_traj_DW.objisempty_p = true;
    rect_traj_DW.obj_f.isInitialized = 1;
    for (int32_T i = 0; i < 31; i++) {
      rect_traj_B.b_zeroDelimTopic[i] = tmp_5[i];
    }

    rect_traj_B.b_zeroDelimTopic[31] = '\x00';
    Pub_rect_traj_10.createPublisher(&rect_traj_B.b_zeroDelimTopic[0], 1);
    rect_traj_DW.obj_f.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S3>/SinkBlock' */
    /* End of Start for SubSystem: '<Root>/Publish' */
  }

  /* SystemInitialize for Atomic SubSystem: '<Root>/Subscribe' */
  /* SystemInitialize for Enabled SubSystem: '<S4>/Enabled Subsystem' */
  /* SystemInitialize for SignalConversion generated from: '<S5>/In1' incorporates:
   *  Outport: '<S5>/Out1'
   */
  rect_traj_B.In1 = rect_traj_P.Out1_Y0;

  /* End of SystemInitialize for SubSystem: '<S4>/Enabled Subsystem' */
  /* End of SystemInitialize for SubSystem: '<Root>/Subscribe' */

  /* SystemInitialize for MATLAB Function: '<Root>/MATLAB Function' */
  rect_traj_DW.state_not_empty = false;
  rect_traj_DW.flag = 1.0;
  rect_traj_DW.counter = 0.0;
}

/* Model terminate function */
void rect_traj_terminate(void)
{
  /* Terminate for Atomic SubSystem: '<Root>/Subscribe' */
  /* Terminate for MATLABSystem: '<S4>/SourceBlock' */
  if (!rect_traj_DW.obj_lb.matlabCodegenIsDeleted) {
    rect_traj_DW.obj_lb.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S4>/SourceBlock' */
  /* End of Terminate for SubSystem: '<Root>/Subscribe' */

  /* Terminate for MATLABSystem: '<Root>/Get Parameter' */
  if (!rect_traj_DW.obj_n.matlabCodegenIsDeleted) {
    rect_traj_DW.obj_n.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Get Parameter' */

  /* Terminate for MATLABSystem: '<Root>/Get Parameter3' */
  if (!rect_traj_DW.obj.matlabCodegenIsDeleted) {
    rect_traj_DW.obj.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Get Parameter3' */

  /* Terminate for MATLABSystem: '<Root>/Get Parameter1' */
  if (!rect_traj_DW.obj_j.matlabCodegenIsDeleted) {
    rect_traj_DW.obj_j.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Get Parameter1' */

  /* Terminate for MATLABSystem: '<Root>/Get Parameter2' */
  if (!rect_traj_DW.obj_l.matlabCodegenIsDeleted) {
    rect_traj_DW.obj_l.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Get Parameter2' */

  /* Terminate for MATLABSystem: '<Root>/Set Parameter' */
  if (!rect_traj_DW.obj_k.matlabCodegenIsDeleted) {
    rect_traj_DW.obj_k.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Set Parameter' */

  /* Terminate for Atomic SubSystem: '<Root>/Publish' */
  /* Terminate for MATLABSystem: '<S3>/SinkBlock' */
  if (!rect_traj_DW.obj_f.matlabCodegenIsDeleted) {
    rect_traj_DW.obj_f.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S3>/SinkBlock' */
  /* End of Terminate for SubSystem: '<Root>/Publish' */
}
