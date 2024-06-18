// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from speed_control:msg/SpeedControl.idl
// generated code does not contain a copyright notice

#ifndef SPEED_CONTROL__MSG__DETAIL__SPEED_CONTROL__BUILDER_HPP_
#define SPEED_CONTROL__MSG__DETAIL__SPEED_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "speed_control/msg/detail/speed_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace speed_control
{

namespace msg
{

namespace builder
{

class Init_SpeedControl_right
{
public:
  explicit Init_SpeedControl_right(::speed_control::msg::SpeedControl & msg)
  : msg_(msg)
  {}
  ::speed_control::msg::SpeedControl right(::speed_control::msg::SpeedControl::_right_type arg)
  {
    msg_.right = std::move(arg);
    return std::move(msg_);
  }

private:
  ::speed_control::msg::SpeedControl msg_;
};

class Init_SpeedControl_left
{
public:
  Init_SpeedControl_left()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpeedControl_right left(::speed_control::msg::SpeedControl::_left_type arg)
  {
    msg_.left = std::move(arg);
    return Init_SpeedControl_right(msg_);
  }

private:
  ::speed_control::msg::SpeedControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::speed_control::msg::SpeedControl>()
{
  return speed_control::msg::builder::Init_SpeedControl_left();
}

}  // namespace speed_control

#endif  // SPEED_CONTROL__MSG__DETAIL__SPEED_CONTROL__BUILDER_HPP_
