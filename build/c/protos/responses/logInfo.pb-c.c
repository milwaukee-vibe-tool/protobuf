/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: protos/responses/logInfo.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "protos/responses/logInfo.pb-c.h"
void   log_info__init
                     (LogInfo         *message)
{
  static const LogInfo init_value = LOG_INFO__INIT;
  *message = init_value;
}
size_t log_info__get_packed_size
                     (const LogInfo *message)
{
  assert(message->base.descriptor == &log_info__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t log_info__pack
                     (const LogInfo *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &log_info__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t log_info__pack_to_buffer
                     (const LogInfo *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &log_info__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
LogInfo *
       log_info__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (LogInfo *)
     protobuf_c_message_unpack (&log_info__descriptor,
                                allocator, len, data);
}
void   log_info__free_unpacked
                     (LogInfo *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &log_info__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   data_point__init
                     (DataPoint         *message)
{
  static const DataPoint init_value = DATA_POINT__INIT;
  *message = init_value;
}
size_t data_point__get_packed_size
                     (const DataPoint *message)
{
  assert(message->base.descriptor == &data_point__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t data_point__pack
                     (const DataPoint *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &data_point__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t data_point__pack_to_buffer
                     (const DataPoint *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &data_point__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
DataPoint *
       data_point__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (DataPoint *)
     protobuf_c_message_unpack (&data_point__descriptor,
                                allocator, len, data);
}
void   data_point__free_unpacked
                     (DataPoint *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &data_point__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor log_info__field_descriptors[6] =
{
  {
    "log_id",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(LogInfo, log_id),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sample_rate",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(LogInfo, sample_rate),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "offset",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(LogInfo, offset),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "count",
    4,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(LogInfo, count),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "total",
    5,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(LogInfo, total),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "points",
    6,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(LogInfo, n_points),
    offsetof(LogInfo, points),
    &data_point__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned log_info__field_indices_by_name[] = {
  3,   /* field[3] = count */
  0,   /* field[0] = log_id */
  2,   /* field[2] = offset */
  5,   /* field[5] = points */
  1,   /* field[1] = sample_rate */
  4,   /* field[4] = total */
};
static const ProtobufCIntRange log_info__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 6 }
};
const ProtobufCMessageDescriptor log_info__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "LogInfo",
  "LogInfo",
  "LogInfo",
  "",
  sizeof(LogInfo),
  6,
  log_info__field_descriptors,
  log_info__field_indices_by_name,
  1,  log_info__number_ranges,
  (ProtobufCMessageInit) log_info__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor data_point__field_descriptors[1] =
{
  {
    "value",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(DataPoint, value),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned data_point__field_indices_by_name[] = {
  0,   /* field[0] = value */
};
static const ProtobufCIntRange data_point__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor data_point__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "DataPoint",
  "DataPoint",
  "DataPoint",
  "",
  sizeof(DataPoint),
  1,
  data_point__field_descriptors,
  data_point__field_indices_by_name,
  1,  data_point__number_ranges,
  (ProtobufCMessageInit) data_point__init,
  NULL,NULL,NULL    /* reserved[123] */
};