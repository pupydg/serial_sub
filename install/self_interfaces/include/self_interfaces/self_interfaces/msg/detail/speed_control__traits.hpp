// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from self_interfaces:msg/SpeedControl.idl
// generated code does not contain a copyright notice

#ifndef SELF_INTERFACES__MSG__DETAIL__SPEED_CONTROL__TRAITS_HPP_
#define SELF_INTERFACES__MSG__DETAIL__SPEED_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "self_interfaces/msg/detail/speed_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace self_interfaces
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

}  // namespace self_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use self_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const self_interfaces::msg::SpeedControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  self_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use self_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const self_interfaces::msg::SpeedControl & msg)
{
  return self_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<self_interfaces::msg::SpeedControl>()
{
  return "self_interfaces::msg::SpeedControl";
}

template<>
inline const char * name<self_interfaces::msg::SpeedControl>()
{
  return "self_interfaces/msg/SpeedControl";
}

template<>
struct has_fixed_size<self_interfaces::msg::SpeedControl>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<self_interfaces::msg::SpeedControl>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<self_interfaces::msg::SpeedControl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SELF_INTERFACES__MSG__DETAIL__SPEED_CONTROL__TRAITS_HPP_
