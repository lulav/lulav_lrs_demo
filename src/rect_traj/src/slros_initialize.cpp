#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "rect_traj";

// For Block rect_traj/Subscribe
SimulinkSubscriber<geometry_msgs::PoseStamped, SL_Bus_rect_traj_geometry_msgs_PoseStamped> Sub_rect_traj_5;

// For Block rect_traj/Publish
SimulinkPublisher<geometry_msgs::PoseStamped, SL_Bus_rect_traj_geometry_msgs_PoseStamped> Pub_rect_traj_10;

// For Block rect_traj/Get Parameter
SimulinkParameterGetter<real64_T, double> ParamGet_rect_traj_19;

// For Block rect_traj/Get Parameter1
SimulinkParameterGetter<real64_T, double> ParamGet_rect_traj_20;

// For Block rect_traj/Get Parameter2
SimulinkParameterGetter<int32_T, int> ParamGet_rect_traj_21;

// For Block rect_traj/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_rect_traj_22;

// For Block rect_traj/Set Parameter
SimulinkParameterSetter<boolean_T, bool> ParamSet_rect_traj_16;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

