// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from custom_interfaces:msg/Turtle.idl
// generated code does not contain a copyright notice

#include "custom_interfaces/msg/detail/turtle__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
const rosidl_type_hash_t *
custom_interfaces__msg__Turtle__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x82, 0xbc, 0xff, 0x6f, 0x40, 0x03, 0x54, 0xfc,
      0x95, 0xa6, 0xb6, 0xea, 0x1f, 0x8c, 0x37, 0x08,
      0x09, 0x7a, 0xf2, 0x12, 0xa3, 0x70, 0x46, 0x01,
      0xac, 0x30, 0x06, 0x86, 0x5d, 0xcb, 0x8a, 0x5f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char custom_interfaces__msg__Turtle__TYPE_NAME[] = "custom_interfaces/msg/Turtle";

// Define type names, field names, and default values
static char custom_interfaces__msg__Turtle__FIELD_NAME__name[] = "name";
static char custom_interfaces__msg__Turtle__FIELD_NAME__x[] = "x";
static char custom_interfaces__msg__Turtle__FIELD_NAME__y[] = "y";
static char custom_interfaces__msg__Turtle__FIELD_NAME__theta[] = "theta";

static rosidl_runtime_c__type_description__Field custom_interfaces__msg__Turtle__FIELDS[] = {
  {
    {custom_interfaces__msg__Turtle__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_interfaces__msg__Turtle__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_interfaces__msg__Turtle__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_interfaces__msg__Turtle__FIELD_NAME__theta, 5, 5},
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
custom_interfaces__msg__Turtle__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {custom_interfaces__msg__Turtle__TYPE_NAME, 28, 28},
      {custom_interfaces__msg__Turtle__FIELDS, 4, 4},
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
  "float64 y\n"
  "float64 theta";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
custom_interfaces__msg__Turtle__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {custom_interfaces__msg__Turtle__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 45, 45},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_interfaces__msg__Turtle__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *custom_interfaces__msg__Turtle__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
