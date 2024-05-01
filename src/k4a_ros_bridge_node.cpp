// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

// System headers
//
#include <sstream>

// Library headers
//
#include "rclcpp/rclcpp.hpp"
#include <k4a/k4a.h>
#include <rclcpp_components/register_node_macro.hpp>

// Project headers
//
#include "azure_kinect_ros_driver/k4a_ros_device.h"

namespace kinect
{

class K4AROSBridgeNode : public K4AROSDevice
{
public:
  K4AROSBridgeNode(const rclcpp::NodeOptions& options) : K4AROSDevice(options)
  {
  }
};

}  // namespace kinect
RCLCPP_COMPONENTS_REGISTER_NODE(kinect::K4AROSBridgeNode)