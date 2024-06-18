// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from speed_control:msg/SpeedControl.idl
// generated code does not contain a copyright notice

#ifndef SPEED_CONTROL__MSG__DETAIL__SPEED_CONTROL__TRAITS_HPP_
#define SPEED_CONTROL__MSG__DETAIL__SPEED_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "speed_control/msg/detail/speed_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace speed_control
{

namespace msg
{

inline void to_flow_style_yaml(
  const SpeedControl & msg,
  std::ostream & out)
{
  out << "{";
  // member: left
  {
    out << "left: ";
    rosidl_generator_traits::value_to_yaml(msg.left, out);
    out << ", ";
  }

  // member: right
  {
    out << "right: ";
    rosidl_generator_traits::value_to_yaml(msg.right, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SpeedControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left: ";
    rosidl_generator_traits::value_to_yaml(msg.left, out);
    out << "\n";
  }

  // member: right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right: ";
    rosidl_generator_traits::value_to_yaml(msg.right, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SpeedControl & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace speed_control

namespace rosidl_generator_traits
{

[[deprecated("use speed_control::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const speed_control::msg::SpeedControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  speed_control::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use speed_control::msg::to_yaml() instead")]]
inline std::string to_yaml(const speed_control::msg::SpeedControl & msg)
{
  return speed_control::msg::to_yaml(msg);
}

template<>
inline const char * data_type<speed_control::msg::SpeedControl>()
{
  return "speed_control::msg::SpeedControl";
}

template<>
inline const char * name<speed_control::msg::SpeedControl>()
{
  return "speed_control/msg/SpeedControl";
}

template<>
struct has_fixed_size<speed_control::msg::SpeedControl>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<speed_control::msg::SpeedControl>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<speed_control::msg::SpeedControl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SPEED_CONTROL__MSG__DETAIL__SPEED_CONTROL__TRAITS_HPP_
