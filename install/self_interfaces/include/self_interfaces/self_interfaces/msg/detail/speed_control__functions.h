// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from self_interfaces:msg/SpeedControl.idl
// generated code does not contain a copyright notice

#ifndef SELF_INTERFACES__MSG__DETAIL__SPEED_CONTROL__FUNCTIONS_H_
#define SELF_INTERFACES__MSG__DETAIL__SPEED_CONTROL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "self_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "self_interfaces/msg/detail/speed_control__struct.h"

/// Initialize msg/SpeedControl message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * self_interfaces__msg__SpeedControl
 * )) before or use
 * self_interfaces__msg__SpeedControl__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_self_interfaces
bool
self_interfaces__msg__SpeedControl__init(self_interfaces__msg__SpeedControl * msg);

/// Finalize msg/SpeedControl message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_self_interfaces
void
self_interfaces__msg__SpeedControl__fini(self_interfaces__msg__SpeedControl * msg);

/// Create msg/SpeedControl message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * self_interfaces__msg__SpeedControl__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_self_interfaces
self_interfaces__msg__SpeedControl *
self_interfaces__msg__SpeedControl__create();

/// Destroy msg/SpeedControl message.
/**
 * It calls
 * self_interfaces__msg__SpeedControl__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_self_interfaces
void
self_interfaces__msg__SpeedControl__destroy(self_interfaces__msg__SpeedControl * msg);

/// Check for msg/SpeedControl message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_self_interfaces
bool
self_interfaces__msg__SpeedControl__are_equal(const self_interfaces__msg__SpeedControl * lhs, const self_interfaces__msg__SpeedControl * rhs);

/// Copy a msg/SpeedControl message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_self_interfaces
bool
self_interfaces__msg__SpeedControl__copy(
  const self_interfaces__msg__SpeedControl * input,
  self_interfaces__msg__SpeedControl * output);

/// Initialize array of msg/SpeedControl messages.
/**
 * It allocates the memory for the number of elements and calls
 * self_interfaces__msg__SpeedControl__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_self_interfaces
bool
self_interfaces__msg__SpeedControl__Sequence__init(self_interfaces__msg__SpeedControl__Sequence * array, size_t size);

/// Finalize array of msg/SpeedControl messages.
/**
 * It calls
 * self_interfaces__msg__SpeedControl__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_self_interfaces
void
self_interfaces__msg__SpeedControl__Sequence__fini(self_interfaces__msg__SpeedControl__Sequence * array);

/// Create array of msg/SpeedControl messages.
/**
 * It allocates the memory for the array and calls
 * self_interfaces__msg__SpeedControl__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_self_interfaces
self_interfaces__msg__SpeedControl__Sequence *
self_interfaces__msg__SpeedControl__Sequence__create(size_t size);

/// Destroy array of msg/SpeedControl messages.
/**
 * It calls
 * self_interfaces__msg__SpeedControl__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_self_interfaces
void
self_interfaces__msg__SpeedControl__Sequence__destroy(self_interfaces__msg__SpeedControl__Sequence * array);

/// Check for msg/SpeedControl message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_self_interfaces
bool
self_interfaces__msg__SpeedControl__Sequence__are_equal(const self_interfaces__msg__SpeedControl__Sequence * lhs, const self_interfaces__msg__SpeedControl__Sequence * rhs);

/// Copy an array of msg/SpeedControl messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_self_interfaces
bool
self_interfaces__msg__SpeedControl__Sequence__copy(
  const self_interfaces__msg__SpeedControl__Sequence * input,
  self_interfaces__msg__SpeedControl__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SELF_INTERFACES__MSG__DETAIL__SPEED_CONTROL__FUNCTIONS_H_
