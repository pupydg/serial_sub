// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from self_interfaces:msg/SpeedControl.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "self_interfaces/msg/detail/speed_control__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace self_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SpeedControl_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) self_interfaces::msg::SpeedControl(_init);
}

void SpeedControl_fini_function(void * message_memory)
{
  auto typed_message = static_cast<self_interfaces::msg::SpeedControl *>(message_memory);
  typed_message->~SpeedControl();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SpeedControl_message_member_array[2] = {
  {
    "left",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(self_interfaces::msg::SpeedControl, left),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "right",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(self_interfaces::msg::SpeedControl, right),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SpeedControl_message_members = {
  "self_interfaces::msg",  // message namespace
  "SpeedControl",  // message name
  2,  // number of fields
  sizeof(self_interfaces::msg::SpeedControl),
  SpeedControl_message_member_array,  // message members
  SpeedControl_init_function,  // function to initialize message memory (memory has to be allocated)
  SpeedControl_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SpeedControl_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SpeedControl_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace self_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<self_interfaces::msg::SpeedControl>()
{
  return &::self_interfaces::msg::rosidl_typesupport_introspection_cpp::SpeedControl_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, self_interfaces, msg, SpeedControl)() {
  return &::self_interfaces::msg::rosidl_typesupport_introspection_cpp::SpeedControl_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
