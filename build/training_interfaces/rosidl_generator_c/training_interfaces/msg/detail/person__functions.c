// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from training_interfaces:msg/Person.idl
// generated code does not contain a copyright notice
#include "training_interfaces/msg/detail/person__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
training_interfaces__msg__Person__init(training_interfaces__msg__Person * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    training_interfaces__msg__Person__fini(msg);
    return false;
  }
  // age
  return true;
}

void
training_interfaces__msg__Person__fini(training_interfaces__msg__Person * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // age
}

bool
training_interfaces__msg__Person__are_equal(const training_interfaces__msg__Person * lhs, const training_interfaces__msg__Person * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // age
  if (lhs->age != rhs->age) {
    return false;
  }
  return true;
}

bool
training_interfaces__msg__Person__copy(
  const training_interfaces__msg__Person * input,
  training_interfaces__msg__Person * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // age
  output->age = input->age;
  return true;
}

training_interfaces__msg__Person *
training_interfaces__msg__Person__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  training_interfaces__msg__Person * msg = (training_interfaces__msg__Person *)allocator.allocate(sizeof(training_interfaces__msg__Person), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(training_interfaces__msg__Person));
  bool success = training_interfaces__msg__Person__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
training_interfaces__msg__Person__destroy(training_interfaces__msg__Person * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    training_interfaces__msg__Person__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
training_interfaces__msg__Person__Sequence__init(training_interfaces__msg__Person__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  training_interfaces__msg__Person * data = NULL;

  if (size) {
    data = (training_interfaces__msg__Person *)allocator.zero_allocate(size, sizeof(training_interfaces__msg__Person), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = training_interfaces__msg__Person__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        training_interfaces__msg__Person__fini(&data[i - 1]);
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
training_interfaces__msg__Person__Sequence__fini(training_interfaces__msg__Person__Sequence * array)
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
      training_interfaces__msg__Person__fini(&array->data[i]);
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

training_interfaces__msg__Person__Sequence *
training_interfaces__msg__Person__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  training_interfaces__msg__Person__Sequence * array = (training_interfaces__msg__Person__Sequence *)allocator.allocate(sizeof(training_interfaces__msg__Person__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = training_interfaces__msg__Person__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
training_interfaces__msg__Person__Sequence__destroy(training_interfaces__msg__Person__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    training_interfaces__msg__Person__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
training_interfaces__msg__Person__Sequence__are_equal(const training_interfaces__msg__Person__Sequence * lhs, const training_interfaces__msg__Person__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!training_interfaces__msg__Person__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
training_interfaces__msg__Person__Sequence__copy(
  const training_interfaces__msg__Person__Sequence * input,
  training_interfaces__msg__Person__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(training_interfaces__msg__Person);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    training_interfaces__msg__Person * data =
      (training_interfaces__msg__Person *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!training_interfaces__msg__Person__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          training_interfaces__msg__Person__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!training_interfaces__msg__Person__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
