// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from self_interfaces:msg/SpeedControl.idl
// generated code does not contain a copyright notice

#ifndef SELF_INTERFACES__MSG__DETAIL__SPEED_CONTROL__STRUCT_H_
#define SELF_INTERFACES__MSG__DETAIL__SPEED_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SpeedControl in the package self_interfaces.
typedef struct self_interfaces__msg__SpeedControl
{
  float left;
  float right;
} self_interfaces__msg__SpeedControl;

// Struct for a sequence of self_interfaces__msg__SpeedControl.
typedef struct self_interfaces__msg__SpeedControl__Sequence
{
  self_interfaces__msg__SpeedControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} self_interfaces__msg__SpeedControl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SELF_INTERFACES__MSG__DETAIL__SPEED_CONTROL__STRUCT_H_
