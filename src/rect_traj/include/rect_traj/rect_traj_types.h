/*
 * rect_traj_types.h
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

#ifndef RTW_HEADER_rect_traj_types_h_
#define RTW_HEADER_rect_traj_types_h_
#include "rtwtypes.h"

/* Model Code Variants */
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_rect_traj_ros_time_Time_
#define DEFINED_TYPEDEF_FOR_SL_Bus_rect_traj_ros_time_Time_

struct SL_Bus_rect_traj_ros_time_Time
{
  real_T Sec;
  real_T Nsec;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_

struct SL_Bus_ROSVariableLengthArrayInfo
{
  uint32_T CurrentLength;
  uint32_T ReceivedLength;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_rect_traj_std_msgs_Header_
#define DEFINED_TYPEDEF_FOR_SL_Bus_rect_traj_std_msgs_Header_

struct SL_Bus_rect_traj_std_msgs_Header
{
  uint32_T Seq;
  SL_Bus_rect_traj_ros_time_Time Stamp;
  uint8_T FrameId[128];
  SL_Bus_ROSVariableLengthArrayInfo FrameId_SL_Info;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_rect_traj_geometry_msgs_Point_
#define DEFINED_TYPEDEF_FOR_SL_Bus_rect_traj_geometry_msgs_Point_

struct SL_Bus_rect_traj_geometry_msgs_Point
{
  real_T X;
  real_T Y;
  real_T Z;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_rect_traj_geometry_msgs_Quaternion_
#define DEFINED_TYPEDEF_FOR_SL_Bus_rect_traj_geometry_msgs_Quaternion_

struct SL_Bus_rect_traj_geometry_msgs_Quaternion
{
  real_T X;
  real_T Y;
  real_T Z;
  real_T W;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_rect_traj_geometry_msgs_Pose_
#define DEFINED_TYPEDEF_FOR_SL_Bus_rect_traj_geometry_msgs_Pose_

struct SL_Bus_rect_traj_geometry_msgs_Pose
{
  SL_Bus_rect_traj_geometry_msgs_Point Position;
  SL_Bus_rect_traj_geometry_msgs_Quaternion Orientation;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_rect_traj_geometry_msgs_PoseStamped_
#define DEFINED_TYPEDEF_FOR_SL_Bus_rect_traj_geometry_msgs_PoseStamped_

struct SL_Bus_rect_traj_geometry_msgs_PoseStamped
{
  SL_Bus_rect_traj_std_msgs_Header Header;
  SL_Bus_rect_traj_geometry_msgs_Pose Pose;
};

#endif

#ifndef struct_f_robotics_slcore_internal_bl_T
#define struct_f_robotics_slcore_internal_bl_T

struct f_robotics_slcore_internal_bl_T
{
  int32_T __dummy;
};

#endif                              /* struct_f_robotics_slcore_internal_bl_T */

#ifndef struct_ros_slros_internal_block_GetP_T
#define struct_ros_slros_internal_block_GetP_T

struct ros_slros_internal_block_GetP_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  f_robotics_slcore_internal_bl_T SampleTimeHandler;
};

#endif                              /* struct_ros_slros_internal_block_GetP_T */

#ifndef struct_ros_slroscpp_internal_block_P_T
#define struct_ros_slroscpp_internal_block_P_T

struct ros_slroscpp_internal_block_P_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                              /* struct_ros_slroscpp_internal_block_P_T */

#ifndef struct_ros_slros_internal_block_SetP_T
#define struct_ros_slros_internal_block_SetP_T

struct ros_slros_internal_block_SetP_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                              /* struct_ros_slros_internal_block_SetP_T */

#ifndef struct_ros_slroscpp_internal_block_S_T
#define struct_ros_slroscpp_internal_block_S_T

struct ros_slroscpp_internal_block_S_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                              /* struct_ros_slroscpp_internal_block_S_T */

/* Parameters (default storage) */
typedef struct P_rect_traj_T_ P_rect_traj_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_rect_traj_T RT_MODEL_rect_traj_T;

#endif                                 /* RTW_HEADER_rect_traj_types_h_ */
