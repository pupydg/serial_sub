// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from self_interfaces:msg/SpeedControl.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "self_interfaces/msg/detail/speed_control__rosidl_typesupport_introspection_c.h"
#include "self_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "self_interfaces/msg/detail/speed_control__functions.h"
#include "self_interfaces/msg/detail/speed_control__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void self_interfaces__msg__SpeedControl__rosidl_typesupport_introspection_c__SpeedControl_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  self_interfaces__msg__SpeedControl__init(message_memory);
}

void self_interfaces__msg__SpeedControl__rosidl_typesupport_introspection_c__SpeedControl_fini_function(void * message_memory)
{
  self_interfaces__msg__SpeedControl__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember self_interfaces__msg__SpeedControl__rosidl_typesupport_introspection_c__SpeedControl_message_member_array[2] = {
  {
    "left",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(self_interfaces__msg__SpeedControl, left),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(self_interfaces__msg__SpeedControl, right),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers self_interfaces__msg__SpeedControl__rosidl_typesupport_introspection_c__SpeedControl_message_members = {
  "self_interfaces__msg",  // message namespace
  "SpeedControl",  // message name
  2,  // number of fields
  sizeof(self_interfaces__msg__SpeedControl),
  self_interfaces__msg__SpeedControl__rosidl_typesupport_introspection_c__SpeedControl_message_member_array,  // message members
  self_interfaces__msg__SpeedControl__rosidl_typesupport_introspection_c__SpeedControl_init_function,  // function to initialize message memory (memory has to be allocated)
  self_interfaces__msg__SpeedControl__rosidl_typesupport_introspection_c__SpeedControl_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t self_interfaces__msg__SpeedControl__rosidl_typesupport_introspection_c__SpeedControl_message_type_support_handle = {
  0,
  &self_interfaces__msg__SpeedControl__rosidl_typesupport_introspection_c__SpeedControl_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_self_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, self_interfaces, msg, SpeedControl)() {
  if (!self_interfaces__msg__SpeedControl__rosidl_typesupport_introspection_c__SpeedControl_message_type_support_handle.typesupport_identifier) {
    self_interfaces__msg__SpeedControl__rosidl_typesupport_introspection_c__SpeedControl_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &self_interfaces__msg__SpeedControl__rosidl_typesupport_introspection_c__SpeedControl_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
