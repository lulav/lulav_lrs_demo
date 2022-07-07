#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"
#include "rect_traj_types.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block rect_traj/Subscribe
extern SimulinkSubscriber<geometry_msgs::PoseStamped, SL_Bus_rect_traj_geometry_msgs_PoseStamped> Sub_rect_traj_5;

// For Block rect_traj/Publish
extern SimulinkPublisher<geometry_msgs::PoseStamped, SL_Bus_rect_traj_geometry_msgs_PoseStamped> Pub_rect_traj_10;

// For Block rect_traj/Get Parameter
extern SimulinkParameterGetter<real64_T, double> ParamGet_rect_traj_19;

// For Block rect_traj/Get Parameter1
extern SimulinkParameterGetter<real64_T, double> ParamGet_rect_traj_20;

// For Block rect_traj/Get Parameter2
extern SimulinkParameterGetter<int32_T, int> ParamGet_rect_traj_21;

// For Block rect_traj/Get Parameter3
extern SimulinkParameterGetter<real64_T, double> ParamGet_rect_traj_22;

// For Block rect_traj/Set Parameter
extern SimulinkParameterSetter<boolean_T, bool> ParamSet_rect_traj_16;

void slros_node_init(int argc, char** argv);

#endif
