// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:msg/TurtleArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_interfaces/msg/turtle_array.h"


#ifndef CUSTOM_INTERFACES__MSG__DETAIL__TURTLE_ARRAY__STRUCT_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__TURTLE_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'turtles'
#include "custom_interfaces/msg/detail/turtle__struct.h"

/// Struct defined in msg/TurtleArray in the package custom_interfaces.
typedef struct custom_interfaces__msg__TurtleArray
{
  custom_interfaces__msg__Turtle__Sequence turtles;
} custom_interfaces__msg__TurtleArray;

// Struct for a sequence of custom_interfaces__msg__TurtleArray.
typedef struct custom_interfaces__msg__TurtleArray__Sequence
{
  custom_interfaces__msg__TurtleArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__msg__TurtleArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__TURTLE_ARRAY__STRUCT_H_
