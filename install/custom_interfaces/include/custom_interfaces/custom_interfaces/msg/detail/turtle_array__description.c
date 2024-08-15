// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from custom_interfaces:msg/TurtleArray.idl
// generated code does not contain a copyright notice

#include "custom_interfaces/msg/detail/turtle_array__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
const rosidl_type_hash_t *
custom_interfaces__msg__TurtleArray__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x81, 0x40, 0xc1, 0xe6, 0x6b, 0x7c, 0x24, 0x1a,
      0xe7, 0x72, 0x32, 0x37, 0xfc, 0xbe, 0xbb, 0xfb,
      0xae, 0xe4, 0x4b, 0x7d, 0xe6, 0x16, 0x27, 0x6a,
      0x34, 0xb6, 0x1b, 0x53, 0x39, 0xa8, 0x42, 0x16,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "custom_interfaces/msg/detail/turtle__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t custom_interfaces__msg__Turtle__EXPECTED_HASH = {1, {
    0x82, 0xbc, 0xff, 0x6f, 0x40, 0x03, 0x54, 0xfc,
    0x95, 0xa6, 0xb6, 0xea, 0x1f, 0x8c, 0x37, 0x08,
    0x09, 0x7a, 0xf2, 0x12, 0xa3, 0x70, 0x46, 0x01,
    0xac, 0x30, 0x06, 0x86, 0x5d, 0xcb, 0x8a, 0x5f,
  }};
#endif

static char custom_interfaces__msg__TurtleArray__TYPE_NAME[] = "custom_interfaces/msg/TurtleArray";
static char custom_interfaces__msg__Turtle__TYPE_NAME[] = "custom_interfaces/msg/Turtle";

// Define type names, field names, and default values
static char custom_interfaces__msg__TurtleArray__FIELD_NAME__turtles[] = "turtles";

static rosidl_runtime_c__type_description__Field custom_interfaces__msg__TurtleArray__FIELDS[] = {
  {
    {custom_interfaces__msg__TurtleArray__FIELD_NAME__turtles, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {custom_interfaces__msg__Turtle__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription custom_interfaces__msg__TurtleArray__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {custom_interfaces__msg__Turtle__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
custom_interfaces__msg__TurtleArray__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {custom_interfaces__msg__TurtleArray__TYPE_NAME, 33, 33},
      {custom_interfaces__msg__TurtleArray__FIELDS, 1, 1},
    },
    {custom_interfaces__msg__TurtleArray__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&custom_interfaces__msg__Turtle__EXPECTED_HASH, custom_interfaces__msg__Turtle__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = custom_interfaces__msg__Turtle__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "Turtle[] turtles";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
custom_interfaces__msg__TurtleArray__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {custom_interfaces__msg__TurtleArray__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 16, 16},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_interfaces__msg__TurtleArray__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *custom_interfaces__msg__TurtleArray__get_individual_type_description_source(NULL),
    sources[1] = *custom_interfaces__msg__Turtle__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
