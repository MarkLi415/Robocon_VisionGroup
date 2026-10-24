// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from zyzf_zuishuai:msg/StudentInfo.idl
// generated code does not contain a copyright notice

#ifndef ZYZF_ZUISHUAI__MSG__DETAIL__STUDENT_INFO__FUNCTIONS_H_
#define ZYZF_ZUISHUAI__MSG__DETAIL__STUDENT_INFO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "zyzf_zuishuai/msg/rosidl_generator_c__visibility_control.h"

#include "zyzf_zuishuai/msg/detail/student_info__struct.h"

/// Initialize msg/StudentInfo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * zyzf_zuishuai__msg__StudentInfo
 * )) before or use
 * zyzf_zuishuai__msg__StudentInfo__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_zyzf_zuishuai
bool
zyzf_zuishuai__msg__StudentInfo__init(zyzf_zuishuai__msg__StudentInfo * msg);

/// Finalize msg/StudentInfo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_zyzf_zuishuai
void
zyzf_zuishuai__msg__StudentInfo__fini(zyzf_zuishuai__msg__StudentInfo * msg);

/// Create msg/StudentInfo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * zyzf_zuishuai__msg__StudentInfo__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_zyzf_zuishuai
zyzf_zuishuai__msg__StudentInfo *
zyzf_zuishuai__msg__StudentInfo__create();

/// Destroy msg/StudentInfo message.
/**
 * It calls
 * zyzf_zuishuai__msg__StudentInfo__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_zyzf_zuishuai
void
zyzf_zuishuai__msg__StudentInfo__destroy(zyzf_zuishuai__msg__StudentInfo * msg);

/// Check for msg/StudentInfo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_zyzf_zuishuai
bool
zyzf_zuishuai__msg__StudentInfo__are_equal(const zyzf_zuishuai__msg__StudentInfo * lhs, const zyzf_zuishuai__msg__StudentInfo * rhs);

/// Copy a msg/StudentInfo message.
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
ROSIDL_GENERATOR_C_PUBLIC_zyzf_zuishuai
bool
zyzf_zuishuai__msg__StudentInfo__copy(
  const zyzf_zuishuai__msg__StudentInfo * input,
  zyzf_zuishuai__msg__StudentInfo * output);

/// Initialize array of msg/StudentInfo messages.
/**
 * It allocates the memory for the number of elements and calls
 * zyzf_zuishuai__msg__StudentInfo__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_zyzf_zuishuai
bool
zyzf_zuishuai__msg__StudentInfo__Sequence__init(zyzf_zuishuai__msg__StudentInfo__Sequence * array, size_t size);

/// Finalize array of msg/StudentInfo messages.
/**
 * It calls
 * zyzf_zuishuai__msg__StudentInfo__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_zyzf_zuishuai
void
zyzf_zuishuai__msg__StudentInfo__Sequence__fini(zyzf_zuishuai__msg__StudentInfo__Sequence * array);

/// Create array of msg/StudentInfo messages.
/**
 * It allocates the memory for the array and calls
 * zyzf_zuishuai__msg__StudentInfo__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_zyzf_zuishuai
zyzf_zuishuai__msg__StudentInfo__Sequence *
zyzf_zuishuai__msg__StudentInfo__Sequence__create(size_t size);

/// Destroy array of msg/StudentInfo messages.
/**
 * It calls
 * zyzf_zuishuai__msg__StudentInfo__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_zyzf_zuishuai
void
zyzf_zuishuai__msg__StudentInfo__Sequence__destroy(zyzf_zuishuai__msg__StudentInfo__Sequence * array);

/// Check for msg/StudentInfo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_zyzf_zuishuai
bool
zyzf_zuishuai__msg__StudentInfo__Sequence__are_equal(const zyzf_zuishuai__msg__StudentInfo__Sequence * lhs, const zyzf_zuishuai__msg__StudentInfo__Sequence * rhs);

/// Copy an array of msg/StudentInfo messages.
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
ROSIDL_GENERATOR_C_PUBLIC_zyzf_zuishuai
bool
zyzf_zuishuai__msg__StudentInfo__Sequence__copy(
  const zyzf_zuishuai__msg__StudentInfo__Sequence * input,
  zyzf_zuishuai__msg__StudentInfo__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ZYZF_ZUISHUAI__MSG__DETAIL__STUDENT_INFO__FUNCTIONS_H_
