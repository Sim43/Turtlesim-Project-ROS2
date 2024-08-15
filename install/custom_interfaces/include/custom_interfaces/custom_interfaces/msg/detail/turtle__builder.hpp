// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/Turtle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_interfaces/msg/turtle.hpp"


#ifndef CUSTOM_INTERFACES__MSG__DETAIL__TURTLE__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__TURTLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/msg/detail/turtle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_Turtle_theta
{
public:
  explicit Init_Turtle_theta(::custom_interfaces::msg::Turtle & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::msg::Turtle theta(::custom_interfaces::msg::Turtle::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::Turtle msg_;
};

class Init_Turtle_y
{
public:
  explicit Init_Turtle_y(::custom_interfaces::msg::Turtle & msg)
  : msg_(msg)
  {}
  Init_Turtle_theta y(::custom_interfaces::msg::Turtle::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Turtle_theta(msg_);
  }

private:
  ::custom_interfaces::msg::Turtle msg_;
};

class Init_Turtle_x
{
public:
  explicit Init_Turtle_x(::custom_interfaces::msg::Turtle & msg)
  : msg_(msg)
  {}
  Init_Turtle_y x(::custom_interfaces::msg::Turtle::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Turtle_y(msg_);
  }

private:
  ::custom_interfaces::msg::Turtle msg_;
};

class Init_Turtle_name
{
public:
  Init_Turtle_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Turtle_x name(::custom_interfaces::msg::Turtle::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Turtle_x(msg_);
  }

private:
  ::custom_interfaces::msg::Turtle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::Turtle>()
{
  return custom_interfaces::msg::builder::Init_Turtle_name();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__TURTLE__BUILDER_HPP_
