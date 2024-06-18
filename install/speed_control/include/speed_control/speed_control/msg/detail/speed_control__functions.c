// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from speed_control:msg/SpeedControl.idl
// generated code does not contain a copyright notice
#include "speed_control/msg/detail/speed_control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
speed_control__msg__SpeedControl__init(speed_control__msg__SpeedControl * msg)
{
  if (!msg) {
    return false;
  }
  // left
  // right
  return true;
}

void
speed_control__msg__SpeedControl__fini(speed_control__msg__SpeedControl * msg)
{
  if (!msg) {
    return;
  }
  // left
  // right
}

bool
speed_control__msg__SpeedControl__are_equal(const speed_control__msg__SpeedControl * lhs, const speed_control__msg__SpeedControl * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // left
  if (lhs->left != rhs->left) {
    return false;
  }
  // right
  if (lhs->right != rhs->right) {
    return false;
  }
  return true;
}

bool
speed_control__msg__SpeedControl__copy(
  const speed_control__msg__SpeedControl * input,
  speed_control__msg__SpeedControl * output)
{
  if (!input || !output) {
    return false;
  }
  // left
  output->left = input->left;
  // right
  output->right = input->right;
  return true;
}

speed_control__msg__SpeedControl *
speed_control__msg__SpeedControl__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  speed_control__msg__SpeedControl * msg = (speed_control__msg__SpeedControl *)allocator.allocate(sizeof(speed_control__msg__SpeedControl), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(speed_control__msg__SpeedControl));
  bool success = speed_control__msg__SpeedControl__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
speed_control__msg__SpeedControl__destroy(speed_control__msg__SpeedControl * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    speed_control__msg__SpeedControl__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
speed_control__msg__SpeedControl__Sequence__init(speed_control__msg__SpeedControl__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  speed_control__msg__SpeedControl * data = NULL;

  if (size) {
    data = (speed_control__msg__SpeedControl *)allocator.zero_allocate(size, sizeof(speed_control__msg__SpeedControl), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = speed_control__msg__SpeedControl__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        speed_control__msg__SpeedControl__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
speed_control__msg__SpeedControl__Sequence__fini(speed_control__msg__SpeedControl__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      speed_control__msg__SpeedControl__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

speed_control__msg__SpeedControl__Sequence *
speed_control__msg__SpeedControl__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  speed_control__msg__SpeedControl__Sequence * array = (speed_control__msg__SpeedControl__Sequence *)allocator.allocate(sizeof(speed_control__msg__SpeedControl__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = speed_control__msg__SpeedControl__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
speed_control__msg__SpeedControl__Sequence__destroy(speed_control__msg__SpeedControl__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    speed_control__msg__SpeedControl__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
speed_control__msg__SpeedControl__Sequence__are_equal(const speed_control__msg__SpeedControl__Sequence * lhs, const speed_control__msg__SpeedControl__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!speed_control__msg__SpeedControl__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
speed_control__msg__SpeedControl__Sequence__copy(
  const speed_control__msg__SpeedControl__Sequence * input,
  speed_control__msg__SpeedControl__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(speed_control__msg__SpeedControl);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    speed_control__msg__SpeedControl * data =
      (speed_control__msg__SpeedControl *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!speed_control__msg__SpeedControl__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          speed_control__msg__SpeedControl__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!speed_control__msg__SpeedControl__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
