// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from custom_interfaces:msg/TurtleCoordinates.idl
// generated code does not contain a copyright notice

#include "custom_interfaces/msg/detail/turtle_coordinates__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
const rosidl_type_hash_t *
custom_interfaces__msg__TurtleCoordinates__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x50, 0xdc, 0x4d, 0x49, 0x2b, 0xa9, 0xe7, 0xb6,
      0x00, 0xa5, 0x99, 0xdd, 0x7d, 0xa7, 0x35, 0x80,
      0x15, 0x3a, 0x19, 0xbe, 0x68, 0x8d, 0x96, 0x42,
      0xa8, 0xe6, 0xd8, 0xb5, 0x87, 0xcf, 0x0e, 0x27,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char custom_interfaces__msg__TurtleCoordinates__TYPE_NAME[] = "custom_interfaces/msg/TurtleCoordinates";

// Define type names, field names, and default values
static char custom_interfaces__msg__TurtleCoordinates__FIELD_NAME__name[] = "name";
static char custom_interfaces__msg__TurtleCoordinates__FIELD_NAME__x[] = "x";
static char custom_interfaces__msg__TurtleCoordinates__FIELD_NAME__y[] = "y";

static rosidl_runtime_c__type_description__Field custom_interfaces__msg__TurtleCoordinates__FIELDS[] = {
  {
    {custom_interfaces__msg__TurtleCoordinates__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_interfaces__msg__TurtleCoordinates__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_interfaces__msg__TurtleCoordinates__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
custom_interfaces__msg__TurtleCoordinates__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {custom_interfaces__msg__TurtleCoordinates__TYPE_NAME, 39, 39},
      {custom_interfaces__msg__TurtleCoordinates__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string name\n"
  "float64 x\n"
  "float64 y";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
custom_interfaces__msg__TurtleCoordinates__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {custom_interfaces__msg__TurtleCoordinates__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 31, 31},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_interfaces__msg__TurtleCoordinates__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *custom_interfaces__msg__TurtleCoordinates__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
