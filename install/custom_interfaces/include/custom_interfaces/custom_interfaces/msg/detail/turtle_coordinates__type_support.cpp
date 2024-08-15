// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from custom_interfaces:msg/TurtleCoordinates.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "custom_interfaces/msg/detail/turtle_coordinates__functions.h"
#include "custom_interfaces/msg/detail/turtle_coordinates__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace custom_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void TurtleCoordinates_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) custom_interfaces::msg::TurtleCoordinates(_init);
}

void TurtleCoordinates_fini_function(void * message_memory)
{
  auto typed_message = static_cast<custom_interfaces::msg::TurtleCoordinates *>(message_memory);
  typed_message->~TurtleCoordinates();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TurtleCoordinates_message_member_array[3] = {
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces::msg::TurtleCoordinates, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces::msg::TurtleCoordinates, x),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces::msg::TurtleCoordinates, y),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TurtleCoordinates_message_members = {
  "custom_interfaces::msg",  // message namespace
  "TurtleCoordinates",  // message name
  3,  // number of fields
  sizeof(custom_interfaces::msg::TurtleCoordinates),
  false,  // has_any_key_member_
  TurtleCoordinates_message_member_array,  // message members
  TurtleCoordinates_init_function,  // function to initialize message memory (memory has to be allocated)
  TurtleCoordinates_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TurtleCoordinates_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TurtleCoordinates_message_members,
  get_message_typesupport_handle_function,
  &custom_interfaces__msg__TurtleCoordinates__get_type_hash,
  &custom_interfaces__msg__TurtleCoordinates__get_type_description,
  &custom_interfaces__msg__TurtleCoordinates__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace custom_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<custom_interfaces::msg::TurtleCoordinates>()
{
  return &::custom_interfaces::msg::rosidl_typesupport_introspection_cpp::TurtleCoordinates_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, custom_interfaces, msg, TurtleCoordinates)() {
  return &::custom_interfaces::msg::rosidl_typesupport_introspection_cpp::TurtleCoordinates_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
