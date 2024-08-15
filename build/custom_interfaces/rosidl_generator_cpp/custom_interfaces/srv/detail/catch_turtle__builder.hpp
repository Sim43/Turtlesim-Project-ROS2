// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:srv/CatchTurtle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_interfaces/srv/catch_turtle.hpp"


#ifndef CUSTOM_INTERFACES__SRV__DETAIL__CATCH_TURTLE__BUILDER_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__CATCH_TURTLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/srv/detail/catch_turtle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_CatchTurtle_Request_name
{
public:
  Init_CatchTurtle_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces::srv::CatchTurtle_Request name(::custom_interfaces::srv::CatchTurtle_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::CatchTurtle_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::CatchTurtle_Request>()
{
  return custom_interfaces::srv::builder::Init_CatchTurtle_Request_name();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_CatchTurtle_Response_success
{
public:
  Init_CatchTurtle_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces::srv::CatchTurtle_Response success(::custom_interfaces::srv::CatchTurtle_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::CatchTurtle_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::CatchTurtle_Response>()
{
  return custom_interfaces::srv::builder::Init_CatchTurtle_Response_success();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_CatchTurtle_Event_response
{
public:
  explicit Init_CatchTurtle_Event_response(::custom_interfaces::srv::CatchTurtle_Event & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::srv::CatchTurtle_Event response(::custom_interfaces::srv::CatchTurtle_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::CatchTurtle_Event msg_;
};

class Init_CatchTurtle_Event_request
{
public:
  explicit Init_CatchTurtle_Event_request(::custom_interfaces::srv::CatchTurtle_Event & msg)
  : msg_(msg)
  {}
  Init_CatchTurtle_Event_response request(::custom_interfaces::srv::CatchTurtle_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_CatchTurtle_Event_response(msg_);
  }

private:
  ::custom_interfaces::srv::CatchTurtle_Event msg_;
};

class Init_CatchTurtle_Event_info
{
public:
  Init_CatchTurtle_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CatchTurtle_Event_request info(::custom_interfaces::srv::CatchTurtle_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_CatchTurtle_Event_request(msg_);
  }

private:
  ::custom_interfaces::srv::CatchTurtle_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::CatchTurtle_Event>()
{
  return custom_interfaces::srv::builder::Init_CatchTurtle_Event_info();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__CATCH_TURTLE__BUILDER_HPP_
