// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from zyzf_zuishuai:msg/StudentInfo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "zyzf_zuishuai/msg/detail/student_info__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace zyzf_zuishuai
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void StudentInfo_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) zyzf_zuishuai::msg::StudentInfo(_init);
}

void StudentInfo_fini_function(void * message_memory)
{
  auto typed_message = static_cast<zyzf_zuishuai::msg::StudentInfo *>(message_memory);
  typed_message->~StudentInfo();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember StudentInfo_message_member_array[4] = {
  {
    "student_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zyzf_zuishuai::msg::StudentInfo, student_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "student_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zyzf_zuishuai::msg::StudentInfo, student_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "student_sex",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zyzf_zuishuai::msg::StudentInfo, student_sex),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "student_major",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zyzf_zuishuai::msg::StudentInfo, student_major),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers StudentInfo_message_members = {
  "zyzf_zuishuai::msg",  // message namespace
  "StudentInfo",  // message name
  4,  // number of fields
  sizeof(zyzf_zuishuai::msg::StudentInfo),
  StudentInfo_message_member_array,  // message members
  StudentInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  StudentInfo_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t StudentInfo_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &StudentInfo_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace zyzf_zuishuai


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<zyzf_zuishuai::msg::StudentInfo>()
{
  return &::zyzf_zuishuai::msg::rosidl_typesupport_introspection_cpp::StudentInfo_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, zyzf_zuishuai, msg, StudentInfo)() {
  return &::zyzf_zuishuai::msg::rosidl_typesupport_introspection_cpp::StudentInfo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
