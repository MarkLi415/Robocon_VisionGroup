// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from zyzf_zuishuai:msg/StudentInfo.idl
// generated code does not contain a copyright notice
#include "zyzf_zuishuai/msg/detail/student_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `student_name`
// Member `student_id`
// Member `student_sex`
// Member `student_major`
#include "rosidl_runtime_c/string_functions.h"

bool
zyzf_zuishuai__msg__StudentInfo__init(zyzf_zuishuai__msg__StudentInfo * msg)
{
  if (!msg) {
    return false;
  }
  // student_name
  if (!rosidl_runtime_c__String__init(&msg->student_name)) {
    zyzf_zuishuai__msg__StudentInfo__fini(msg);
    return false;
  }
  // student_id
  if (!rosidl_runtime_c__String__init(&msg->student_id)) {
    zyzf_zuishuai__msg__StudentInfo__fini(msg);
    return false;
  }
  // student_sex
  if (!rosidl_runtime_c__String__init(&msg->student_sex)) {
    zyzf_zuishuai__msg__StudentInfo__fini(msg);
    return false;
  }
  // student_major
  if (!rosidl_runtime_c__String__init(&msg->student_major)) {
    zyzf_zuishuai__msg__StudentInfo__fini(msg);
    return false;
  }
  return true;
}

void
zyzf_zuishuai__msg__StudentInfo__fini(zyzf_zuishuai__msg__StudentInfo * msg)
{
  if (!msg) {
    return;
  }
  // student_name
  rosidl_runtime_c__String__fini(&msg->student_name);
  // student_id
  rosidl_runtime_c__String__fini(&msg->student_id);
  // student_sex
  rosidl_runtime_c__String__fini(&msg->student_sex);
  // student_major
  rosidl_runtime_c__String__fini(&msg->student_major);
}

bool
zyzf_zuishuai__msg__StudentInfo__are_equal(const zyzf_zuishuai__msg__StudentInfo * lhs, const zyzf_zuishuai__msg__StudentInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // student_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->student_name), &(rhs->student_name)))
  {
    return false;
  }
  // student_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->student_id), &(rhs->student_id)))
  {
    return false;
  }
  // student_sex
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->student_sex), &(rhs->student_sex)))
  {
    return false;
  }
  // student_major
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->student_major), &(rhs->student_major)))
  {
    return false;
  }
  return true;
}

bool
zyzf_zuishuai__msg__StudentInfo__copy(
  const zyzf_zuishuai__msg__StudentInfo * input,
  zyzf_zuishuai__msg__StudentInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // student_name
  if (!rosidl_runtime_c__String__copy(
      &(input->student_name), &(output->student_name)))
  {
    return false;
  }
  // student_id
  if (!rosidl_runtime_c__String__copy(
      &(input->student_id), &(output->student_id)))
  {
    return false;
  }
  // student_sex
  if (!rosidl_runtime_c__String__copy(
      &(input->student_sex), &(output->student_sex)))
  {
    return false;
  }
  // student_major
  if (!rosidl_runtime_c__String__copy(
      &(input->student_major), &(output->student_major)))
  {
    return false;
  }
  return true;
}

zyzf_zuishuai__msg__StudentInfo *
zyzf_zuishuai__msg__StudentInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zyzf_zuishuai__msg__StudentInfo * msg = (zyzf_zuishuai__msg__StudentInfo *)allocator.allocate(sizeof(zyzf_zuishuai__msg__StudentInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(zyzf_zuishuai__msg__StudentInfo));
  bool success = zyzf_zuishuai__msg__StudentInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
zyzf_zuishuai__msg__StudentInfo__destroy(zyzf_zuishuai__msg__StudentInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    zyzf_zuishuai__msg__StudentInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
zyzf_zuishuai__msg__StudentInfo__Sequence__init(zyzf_zuishuai__msg__StudentInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zyzf_zuishuai__msg__StudentInfo * data = NULL;

  if (size) {
    data = (zyzf_zuishuai__msg__StudentInfo *)allocator.zero_allocate(size, sizeof(zyzf_zuishuai__msg__StudentInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = zyzf_zuishuai__msg__StudentInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        zyzf_zuishuai__msg__StudentInfo__fini(&data[i - 1]);
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
zyzf_zuishuai__msg__StudentInfo__Sequence__fini(zyzf_zuishuai__msg__StudentInfo__Sequence * array)
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
      zyzf_zuishuai__msg__StudentInfo__fini(&array->data[i]);
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

zyzf_zuishuai__msg__StudentInfo__Sequence *
zyzf_zuishuai__msg__StudentInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  zyzf_zuishuai__msg__StudentInfo__Sequence * array = (zyzf_zuishuai__msg__StudentInfo__Sequence *)allocator.allocate(sizeof(zyzf_zuishuai__msg__StudentInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = zyzf_zuishuai__msg__StudentInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
zyzf_zuishuai__msg__StudentInfo__Sequence__destroy(zyzf_zuishuai__msg__StudentInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    zyzf_zuishuai__msg__StudentInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
zyzf_zuishuai__msg__StudentInfo__Sequence__are_equal(const zyzf_zuishuai__msg__StudentInfo__Sequence * lhs, const zyzf_zuishuai__msg__StudentInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!zyzf_zuishuai__msg__StudentInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
zyzf_zuishuai__msg__StudentInfo__Sequence__copy(
  const zyzf_zuishuai__msg__StudentInfo__Sequence * input,
  zyzf_zuishuai__msg__StudentInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(zyzf_zuishuai__msg__StudentInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    zyzf_zuishuai__msg__StudentInfo * data =
      (zyzf_zuishuai__msg__StudentInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!zyzf_zuishuai__msg__StudentInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          zyzf_zuishuai__msg__StudentInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!zyzf_zuishuai__msg__StudentInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
