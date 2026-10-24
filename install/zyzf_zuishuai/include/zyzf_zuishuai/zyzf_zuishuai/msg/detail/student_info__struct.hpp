// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from zyzf_zuishuai:msg/StudentInfo.idl
// generated code does not contain a copyright notice

#ifndef ZYZF_ZUISHUAI__MSG__DETAIL__STUDENT_INFO__STRUCT_HPP_
#define ZYZF_ZUISHUAI__MSG__DETAIL__STUDENT_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__zyzf_zuishuai__msg__StudentInfo __attribute__((deprecated))
#else
# define DEPRECATED__zyzf_zuishuai__msg__StudentInfo __declspec(deprecated)
#endif

namespace zyzf_zuishuai
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StudentInfo_
{
  using Type = StudentInfo_<ContainerAllocator>;

  explicit StudentInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->student_name = "";
      this->student_id = "";
      this->student_sex = "";
      this->student_major = "";
    }
  }

  explicit StudentInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : student_name(_alloc),
    student_id(_alloc),
    student_sex(_alloc),
    student_major(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->student_name = "";
      this->student_id = "";
      this->student_sex = "";
      this->student_major = "";
    }
  }

  // field types and members
  using _student_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _student_name_type student_name;
  using _student_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _student_id_type student_id;
  using _student_sex_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _student_sex_type student_sex;
  using _student_major_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _student_major_type student_major;

  // setters for named parameter idiom
  Type & set__student_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->student_name = _arg;
    return *this;
  }
  Type & set__student_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->student_id = _arg;
    return *this;
  }
  Type & set__student_sex(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->student_sex = _arg;
    return *this;
  }
  Type & set__student_major(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->student_major = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    zyzf_zuishuai::msg::StudentInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const zyzf_zuishuai::msg::StudentInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<zyzf_zuishuai::msg::StudentInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<zyzf_zuishuai::msg::StudentInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      zyzf_zuishuai::msg::StudentInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<zyzf_zuishuai::msg::StudentInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      zyzf_zuishuai::msg::StudentInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<zyzf_zuishuai::msg::StudentInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<zyzf_zuishuai::msg::StudentInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<zyzf_zuishuai::msg::StudentInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__zyzf_zuishuai__msg__StudentInfo
    std::shared_ptr<zyzf_zuishuai::msg::StudentInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__zyzf_zuishuai__msg__StudentInfo
    std::shared_ptr<zyzf_zuishuai::msg::StudentInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StudentInfo_ & other) const
  {
    if (this->student_name != other.student_name) {
      return false;
    }
    if (this->student_id != other.student_id) {
      return false;
    }
    if (this->student_sex != other.student_sex) {
      return false;
    }
    if (this->student_major != other.student_major) {
      return false;
    }
    return true;
  }
  bool operator!=(const StudentInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StudentInfo_

// alias to use template instance with default allocator
using StudentInfo =
  zyzf_zuishuai::msg::StudentInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace zyzf_zuishuai

#endif  // ZYZF_ZUISHUAI__MSG__DETAIL__STUDENT_INFO__STRUCT_HPP_
