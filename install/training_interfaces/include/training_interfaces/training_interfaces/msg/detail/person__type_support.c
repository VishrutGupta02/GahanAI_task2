// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from training_interfaces:msg/Person.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "training_interfaces/msg/detail/person__rosidl_typesupport_introspection_c.h"
#include "training_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "training_interfaces/msg/detail/person__functions.h"
#include "training_interfaces/msg/detail/person__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void training_interfaces__msg__Person__rosidl_typesupport_introspection_c__Person_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  training_interfaces__msg__Person__init(message_memory);
}

void training_interfaces__msg__Person__rosidl_typesupport_introspection_c__Person_fini_function(void * message_memory)
{
  training_interfaces__msg__Person__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember training_interfaces__msg__Person__rosidl_typesupport_introspection_c__Person_message_member_array[2] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(training_interfaces__msg__Person, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "age",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(training_interfaces__msg__Person, age),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers training_interfaces__msg__Person__rosidl_typesupport_introspection_c__Person_message_members = {
  "training_interfaces__msg",  // message namespace
  "Person",  // message name
  2,  // number of fields
  sizeof(training_interfaces__msg__Person),
  training_interfaces__msg__Person__rosidl_typesupport_introspection_c__Person_message_member_array,  // message members
  training_interfaces__msg__Person__rosidl_typesupport_introspection_c__Person_init_function,  // function to initialize message memory (memory has to be allocated)
  training_interfaces__msg__Person__rosidl_typesupport_introspection_c__Person_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t training_interfaces__msg__Person__rosidl_typesupport_introspection_c__Person_message_type_support_handle = {
  0,
  &training_interfaces__msg__Person__rosidl_typesupport_introspection_c__Person_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_training_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, training_interfaces, msg, Person)() {
  if (!training_interfaces__msg__Person__rosidl_typesupport_introspection_c__Person_message_type_support_handle.typesupport_identifier) {
    training_interfaces__msg__Person__rosidl_typesupport_introspection_c__Person_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &training_interfaces__msg__Person__rosidl_typesupport_introspection_c__Person_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
