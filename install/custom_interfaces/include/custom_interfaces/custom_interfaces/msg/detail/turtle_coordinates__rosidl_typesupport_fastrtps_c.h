// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from custom_interfaces:msg/TurtleCoordinates.idl
// generated code does not contain a copyright notice
#ifndef CUSTOM_INTERFACES__MSG__DETAIL__TURTLE_COORDINATES__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__TURTLE_COORDINATES__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "custom_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_interfaces/msg/detail/turtle_coordinates__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_interfaces
bool cdr_serialize_custom_interfaces__msg__TurtleCoordinates(
  const custom_interfaces__msg__TurtleCoordinates * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_interfaces
bool cdr_deserialize_custom_interfaces__msg__TurtleCoordinates(
  eprosima::fastcdr::Cdr &,
  custom_interfaces__msg__TurtleCoordinates * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_interfaces
size_t get_serialized_size_custom_interfaces__msg__TurtleCoordinates(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_interfaces
size_t max_serialized_size_custom_interfaces__msg__TurtleCoordinates(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_interfaces
bool cdr_serialize_key_custom_interfaces__msg__TurtleCoordinates(
  const custom_interfaces__msg__TurtleCoordinates * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_interfaces
size_t get_serialized_size_key_custom_interfaces__msg__TurtleCoordinates(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_interfaces
size_t max_serialized_size_key_custom_interfaces__msg__TurtleCoordinates(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_interfaces, msg, TurtleCoordinates)();

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__TURTLE_COORDINATES__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
