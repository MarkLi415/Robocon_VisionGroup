// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from zyzf_zuishuai:msg/StudentInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "zyzf_zuishuai/msg/detail/student_info__rosidl_typesupport_introspection_c.h"
#include "zyzf_zuishuai/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "zyzf_zuishuai/msg/detail/student_info__functions.h"
#include "zyzf_zuishuai/msg/detail/student_info__struct.h"


// Include directives for member types
// Member `student_name`
// Member `student_id`
// Member `student_sex`
// Member `student_major`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void zyzf_zuishuai__msg__StudentInfo__rosidl_typesupport_introspection_c__StudentInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  zyzf_zuishuai__msg__StudentInfo__init(message_memory);
}

void zyzf_zuishuai__msg__StudentInfo__rosidl_typesupport_introspection_c__StudentInfo_fini_function(void * message_memory)
{
  zyzf_zuishuai__msg__StudentInfo__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember zyzf_zuishuai__msg__StudentInfo__rosidl_typesupport_introspection_c__StudentInfo_message_member_array[4] = {
  {
    "student_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zyzf_zuishuai__msg__StudentInfo, student_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "student_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zyzf_zuishuai__msg__StudentInfo, student_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "student_sex",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zyzf_zuishuai__msg__StudentInfo, student_sex),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "student_major",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zyzf_zuishuai__msg__StudentInfo, student_major),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers zyzf_zuishuai__msg__StudentInfo__rosidl_typesupport_introspection_c__StudentInfo_message_members = {
  "zyzf_zuishuai__msg",  // message namespace
  "StudentInfo",  // message name
  4,  // number of fields
  sizeof(zyzf_zuishuai__msg__StudentInfo),
  zyzf_zuishuai__msg__StudentInfo__rosidl_typesupport_introspection_c__StudentInfo_message_member_array,  // message members
  zyzf_zuishuai__msg__StudentInfo__rosidl_typesupport_introspection_c__StudentInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  zyzf_zuishuai__msg__StudentInfo__rosidl_typesupport_introspection_c__StudentInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t zyzf_zuishuai__msg__StudentInfo__rosidl_typesupport_introspection_c__StudentInfo_message_type_support_handle = {
  0,
  &zyzf_zuishuai__msg__StudentInfo__rosidl_typesupport_introspection_c__StudentInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_zyzf_zuishuai
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zyzf_zuishuai, msg, StudentInfo)() {
  if (!zyzf_zuishuai__msg__StudentInfo__rosidl_typesupport_introspection_c__StudentInfo_message_type_support_handle.typesupport_identifier) {
    zyzf_zuishuai__msg__StudentInfo__rosidl_typesupport_introspection_c__StudentInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &zyzf_zuishuai__msg__StudentInfo__rosidl_typesupport_introspection_c__StudentInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
