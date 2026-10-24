// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from zyzf_zuishuai:msg/StudentInfo.idl
// generated code does not contain a copyright notice

#ifndef ZYZF_ZUISHUAI__MSG__DETAIL__STUDENT_INFO__STRUCT_H_
#define ZYZF_ZUISHUAI__MSG__DETAIL__STUDENT_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'student_name'
// Member 'student_id'
// Member 'student_sex'
// Member 'student_major'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/StudentInfo in the package zyzf_zuishuai.
typedef struct zyzf_zuishuai__msg__StudentInfo
{
  rosidl_runtime_c__String student_name;
  rosidl_runtime_c__String student_id;
  rosidl_runtime_c__String student_sex;
  rosidl_runtime_c__String student_major;
} zyzf_zuishuai__msg__StudentInfo;

// Struct for a sequence of zyzf_zuishuai__msg__StudentInfo.
typedef struct zyzf_zuishuai__msg__StudentInfo__Sequence
{
  zyzf_zuishuai__msg__StudentInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} zyzf_zuishuai__msg__StudentInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ZYZF_ZUISHUAI__MSG__DETAIL__STUDENT_INFO__STRUCT_H_
