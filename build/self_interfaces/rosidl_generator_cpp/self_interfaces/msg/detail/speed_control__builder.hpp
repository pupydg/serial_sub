// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from self_interfaces:msg/SpeedControl.idl
// generated code does not contain a copyright notice

#ifndef SELF_INTERFACES__MSG__DETAIL__SPEED_CONTROL__BUILDER_HPP_
#define SELF_INTERFACES__MSG__DETAIL__SPEED_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "self_interfaces/msg/detail/speed_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace self_interfaces
{

namespace msg
{

namespace builder
{

class Init_SpeedControl_right
{
public:
  explicit Init_SpeedControl_right(::self_interfaces::msg::SpeedControl & msg)
  : msg_(msg)
  {}
  ::self_interfaces::msg::SpeedControl right(::self_interfaces::msg::SpeedControl::_right_type arg)
  {
    msg_.right = std::move(arg);
    return std::move(msg_);
  }

private:
  ::self_interfaces::msg::SpeedControl msg_;
};

class Init_SpeedControl_left
{
public:
  Init_SpeedControl_left()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpeedControl_right left(::self_interfaces::msg::SpeedControl::_left_type arg)
  {
    msg_.left = std::move(arg);
    return Init_SpeedControl_right(msg_);
  }

private:
  ::self_interfaces::msg::SpeedControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::self_interfaces::msg::SpeedControl>()
{
  return self_interfaces::msg::builder::Init_SpeedControl_left();
}

}  // namespace self_interfaces

#endif  // SELF_INTERFACES__MSG__DETAIL__SPEED_CONTROL__BUILDER_HPP_
