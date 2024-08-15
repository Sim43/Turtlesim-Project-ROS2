// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/TurtleArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_interfaces/msg/turtle_array.hpp"


#ifndef CUSTOM_INTERFACES__MSG__DETAIL__TURTLE_ARRAY__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__TURTLE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/msg/detail/turtle_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_TurtleArray_turtles
{
public:
  Init_TurtleArray_turtles()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces::msg::TurtleArray turtles(::custom_interfaces::msg::TurtleArray::_turtles_type arg)
  {
    msg_.turtles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::TurtleArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::TurtleArray>()
{
  return custom_interfaces::msg::builder::Init_TurtleArray_turtles();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__TURTLE_ARRAY__BUILDER_HPP_
