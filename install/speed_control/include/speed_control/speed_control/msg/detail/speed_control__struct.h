// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from speed_control:msg/SpeedControl.idl
// generated code does not contain a copyright notice

#ifndef SPEED_CONTROL__MSG__DETAIL__SPEED_CONTROL__STRUCT_H_
#define SPEED_CONTROL__MSG__DETAIL__SPEED_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SpeedControl in the package speed_control.
typedef struct speed_control__msg__SpeedControl
{
  float left;
  float right;
} speed_control__msg__SpeedControl;

// Struct for a sequence of speed_control__msg__SpeedControl.
typedef struct speed_control__msg__SpeedControl__Sequence
{
  speed_control__msg__SpeedControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} speed_control__msg__SpeedControl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SPEED_CONTROL__MSG__DETAIL__SPEED_CONTROL__STRUCT_H_
