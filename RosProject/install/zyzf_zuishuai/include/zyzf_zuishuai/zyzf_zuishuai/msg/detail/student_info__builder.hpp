// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from zyzf_zuishuai:msg/StudentInfo.idl
// generated code does not contain a copyright notice

#ifndef ZYZF_ZUISHUAI__MSG__DETAIL__STUDENT_INFO__BUILDER_HPP_
#define ZYZF_ZUISHUAI__MSG__DETAIL__STUDENT_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "zyzf_zuishuai/msg/detail/student_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace zyzf_zuishuai
{

namespace msg
{

namespace builder
{

class Init_StudentInfo_student_major
{
public:
  explicit Init_StudentInfo_student_major(::zyzf_zuishuai::msg::StudentInfo & msg)
  : msg_(msg)
  {}
  ::zyzf_zuishuai::msg::StudentInfo student_major(::zyzf_zuishuai::msg::StudentInfo::_student_major_type arg)
  {
    msg_.student_major = std::move(arg);
    return std::move(msg_);
  }

private:
  ::zyzf_zuishuai::msg::StudentInfo msg_;
};

class Init_StudentInfo_student_sex
{
public:
  explicit Init_StudentInfo_student_sex(::zyzf_zuishuai::msg::StudentInfo & msg)
  : msg_(msg)
  {}
  Init_StudentInfo_student_major student_sex(::zyzf_zuishuai::msg::StudentInfo::_student_sex_type arg)
  {
    msg_.student_sex = std::move(arg);
    return Init_StudentInfo_student_major(msg_);
  }

private:
  ::zyzf_zuishuai::msg::StudentInfo msg_;
};

class Init_StudentInfo_student_id
{
public:
  explicit Init_StudentInfo_student_id(::zyzf_zuishuai::msg::StudentInfo & msg)
  : msg_(msg)
  {}
  Init_StudentInfo_student_sex student_id(::zyzf_zuishuai::msg::StudentInfo::_student_id_type arg)
  {
    msg_.student_id = std::move(arg);
    return Init_StudentInfo_student_sex(msg_);
  }

private:
  ::zyzf_zuishuai::msg::StudentInfo msg_;
};

class Init_StudentInfo_student_name
{
public:
  Init_StudentInfo_student_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StudentInfo_student_id student_name(::zyzf_zuishuai::msg::StudentInfo::_student_name_type arg)
  {
    msg_.student_name = std::move(arg);
    return Init_StudentInfo_student_id(msg_);
  }

private:
  ::zyzf_zuishuai::msg::StudentInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::zyzf_zuishuai::msg::StudentInfo>()
{
  return zyzf_zuishuai::msg::builder::Init_StudentInfo_student_name();
}

}  // namespace zyzf_zuishuai

#endif  // ZYZF_ZUISHUAI__MSG__DETAIL__STUDENT_INFO__BUILDER_HPP_
