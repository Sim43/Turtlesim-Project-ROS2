// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/TurtleCoordinates.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_interfaces/msg/turtle_coordinates.hpp"


#ifndef CUSTOM_INTERFACES__MSG__DETAIL__TURTLE_COORDINATES__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__TURTLE_COORDINATES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/msg/detail/turtle_coordinates__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_TurtleCoordinates_y
{
public:
  explicit Init_TurtleCoordinates_y(::custom_interfaces::msg::TurtleCoordinates & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::msg::TurtleCoordinates y(::custom_interfaces::msg::TurtleCoordinates::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::TurtleCoordinates msg_;
};

class Init_TurtleCoordinates_x
{
public:
  explicit Init_TurtleCoordinates_x(::custom_interfaces::msg::TurtleCoordinates & msg)
  : msg_(msg)
  {}
  Init_TurtleCoordinates_y x(::custom_interfaces::msg::TurtleCoordinates::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_TurtleCoordinates_y(msg_);
  }

private:
  ::custom_interfaces::msg::TurtleCoordinates msg_;
};

class Init_TurtleCoordinates_name
{
public:
  Init_TurtleCoordinates_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TurtleCoordinates_x name(::custom_interfaces::msg::TurtleCoordinates::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_TurtleCoordinates_x(msg_);
  }

private:
  ::custom_interfaces::msg::TurtleCoordinates msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::TurtleCoordinates>()
{
  return custom_interfaces::msg::builder::Init_TurtleCoordinates_name();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__TURTLE_COORDINATES__BUILDER_HPP_
