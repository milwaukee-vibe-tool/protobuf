/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: protos/response.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "protos/response.pb-c.h"
void   response__init
                     (Response         *message)
{
  static const Response init_value = RESPONSE__INIT;
  *message = init_value;
}
size_t response__get_packed_size
                     (const Response *message)
{
  assert(message->base.descriptor == &response__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t response__pack
                     (const Response *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &response__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t response__pack_to_buffer
                     (const Response *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &response__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Response *
       response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Response *)
     protobuf_c_message_unpack (&response__descriptor,
                                allocator, len, data);
}
void   response__free_unpacked
                     (Response *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &response__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   response_payload__init
                     (ResponsePayload         *message)
{
  static const ResponsePayload init_value = RESPONSE_PAYLOAD__INIT;
  *message = init_value;
}
size_t response_payload__get_packed_size
                     (const ResponsePayload *message)
{
  assert(message->base.descriptor == &response_payload__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t response_payload__pack
                     (const ResponsePayload *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &response_payload__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t response_payload__pack_to_buffer
                     (const ResponsePayload *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &response_payload__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
ResponsePayload *
       response_payload__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (ResponsePayload *)
     protobuf_c_message_unpack (&response_payload__descriptor,
                                allocator, len, data);
}
void   response_payload__free_unpacked
                     (ResponsePayload *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &response_payload__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor response__field_descriptors[2] =
{
  {
    "request_id",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Response, request_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "payload",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Response, payload),
    &response_payload__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned response__field_indices_by_name[] = {
  1,   /* field[1] = payload */
  0,   /* field[0] = request_id */
};
static const ProtobufCIntRange response__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor response__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "Response",
  "Response",
  "Response",
  "",
  sizeof(Response),
  2,
  response__field_descriptors,
  response__field_indices_by_name,
  1,  response__number_ranges,
  (ProtobufCMessageInit) response__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor response_payload__field_descriptors[5] =
{
  {
    "success",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(ResponsePayload, payload_case),
    offsetof(ResponsePayload, success),
    &success__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "error",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(ResponsePayload, payload_case),
    offsetof(ResponsePayload, error),
    &error__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "log_list",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(ResponsePayload, payload_case),
    offsetof(ResponsePayload, log_list),
    &log_list__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "log_info",
    4,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(ResponsePayload, payload_case),
    offsetof(ResponsePayload, log_info),
    &log_info__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "system_info",
    5,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(ResponsePayload, payload_case),
    offsetof(ResponsePayload, system_info),
    &system_info__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned response_payload__field_indices_by_name[] = {
  1,   /* field[1] = error */
  3,   /* field[3] = log_info */
  2,   /* field[2] = log_list */
  0,   /* field[0] = success */
  4,   /* field[4] = system_info */
};
static const ProtobufCIntRange response_payload__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 5 }
};
const ProtobufCMessageDescriptor response_payload__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "ResponsePayload",
  "ResponsePayload",
  "ResponsePayload",
  "",
  sizeof(ResponsePayload),
  5,
  response_payload__field_descriptors,
  response_payload__field_indices_by_name,
  1,  response_payload__number_ranges,
  (ProtobufCMessageInit) response_payload__init,
  NULL,NULL,NULL    /* reserved[123] */
};
