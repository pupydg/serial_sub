// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from speed_control:msg/SpeedControl.idl
// generated code does not contain a copyright notice

#ifndef SPEED_CONTROL__MSG__DETAIL__SPEED_CONTROL__STRUCT_HPP_
#define SPEED_CONTROL__MSG__DETAIL__SPEED_CONTROL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__speed_control__msg__SpeedControl __attribute__((deprecated))
#else
# define DEPRECATED__speed_control__msg__SpeedControl __declspec(deprecated)
#endif

namespace speed_control
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SpeedControl_
{
  using Type = SpeedControl_<ContainerAllocator>;

  explicit SpeedControl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left = 0.0f;
      this->right = 0.0f;
    }
  }

  explicit SpeedControl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left = 0.0f;
      this->right = 0.0f;
    }
  }

  // field types and members
  using _left_type =
    float;
  _left_type left;
  using _right_type =
    float;
  _right_type right;

  // setters for named parameter idiom
  Type & set__left(
    const float & _arg)
  {
    this->left = _arg;
    return *this;
  }
  Type & set__right(
    const float & _arg)
  {
    this->right = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    speed_control::msg::SpeedControl_<ContainerAllocator> *;
  using ConstRawPtr =
    const speed_control::msg::SpeedControl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<speed_control::msg::SpeedControl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<speed_control::msg::SpeedControl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      speed_control::msg::SpeedControl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<speed_control::msg::SpeedControl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      speed_control::msg::SpeedControl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<speed_control::msg::SpeedControl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<speed_control::msg::SpeedControl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<speed_control::msg::SpeedControl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__speed_control__msg__SpeedControl
    std::shared_ptr<speed_control::msg::SpeedControl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__speed_control__msg__SpeedControl
    std::shared_ptr<speed_control::msg::SpeedControl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpeedControl_ & other) const
  {
    if (this->left != other.left) {
      return false;
    }
    if (this->right != other.right) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpeedControl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpeedControl_

// alias to use template instance with default allocator
using SpeedControl =
  speed_control::msg::SpeedControl_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace speed_control

#endif  // SPEED_CONTROL__MSG__DETAIL__SPEED_CONTROL__STRUCT_HPP_
