/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: protos/request.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "protos/request.pb-c.h"
void   request__init
                     (Request         *message)
{
  static const Request init_value = REQUEST__INIT;
  *message = init_value;
}
size_t request__get_packed_size
                     (const Request *message)
{
  assert(message->base.descriptor == &request__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t request__pack
                     (const Request *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &request__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t request__pack_to_buffer
                     (const Request *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &request__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Request *
       request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Request *)
     protobuf_c_message_unpack (&request__descriptor,
                                allocator, len, data);
}
void   request__free_unpacked
                     (Request *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &request__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   request_payload__init
                     (RequestPayload         *message)
{
  static const RequestPayload init_value = REQUEST_PAYLOAD__INIT;
  *message = init_value;
}
size_t request_payload__get_packed_size
                     (const RequestPayload *message)
{
  assert(message->base.descriptor == &request_payload__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t request_payload__pack
                     (const RequestPayload *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &request_payload__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t request_payload__pack_to_buffer
                     (const RequestPayload *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &request_payload__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
RequestPayload *
       request_payload__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (RequestPayload *)
     protobuf_c_message_unpack (&request_payload__descriptor,
                                allocator, len, data);
}
void   request_payload__free_unpacked
                     (RequestPayload *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &request_payload__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor request__field_descriptors[2] =
{
  {
    "request_id",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Request, request_id),
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
    offsetof(Request, payload),
    &request_payload__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned request__field_indices_by_name[] = {
  1,   /* field[1] = payload */
  0,   /* field[0] = request_id */
};
static const ProtobufCIntRange request__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor request__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "Request",
  "Request",
  "Request",
  "",
  sizeof(Request),
  2,
  request__field_descriptors,
  request__field_indices_by_name,
  1,  request__number_ranges,
  (ProtobufCMessageInit) request__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor request_payload__field_descriptors[5] =
{
  {
    "list_logs",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(RequestPayload, payload_case),
    offsetof(RequestPayload, list_logs),
    &list_logs__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "get_log",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(RequestPayload, payload_case),
    offsetof(RequestPayload, get_log),
    &get_log__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "new_log",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(RequestPayload, payload_case),
    offsetof(RequestPayload, new_log),
    &new_log__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "delete_log",
    4,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(RequestPayload, payload_case),
    offsetof(RequestPayload, delete_log),
    &delete_log__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "format_sd",
    5,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(RequestPayload, payload_case),
    offsetof(RequestPayload, format_sd),
    &format_sd__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned request_payload__field_indices_by_name[] = {
  3,   /* field[3] = delete_log */
  4,   /* field[4] = format_sd */
  1,   /* field[1] = get_log */
  0,   /* field[0] = list_logs */
  2,   /* field[2] = new_log */
};
static const ProtobufCIntRange request_payload__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 5 }
};
const ProtobufCMessageDescriptor request_payload__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "RequestPayload",
  "RequestPayload",
  "RequestPayload",
  "",
  sizeof(RequestPayload),
  5,
  request_payload__field_descriptors,
  request_payload__field_indices_by_name,
  1,  request_payload__number_ranges,
  (ProtobufCMessageInit) request_payload__init,
  NULL,NULL,NULL    /* reserved[123] */
};
