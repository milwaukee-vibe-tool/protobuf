/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: protos/requests/formatSd.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "protos/requests/formatSd.pb-c.h"
void   format_sd__init
                     (FormatSd         *message)
{
  static const FormatSd init_value = FORMAT_SD__INIT;
  *message = init_value;
}
size_t format_sd__get_packed_size
                     (const FormatSd *message)
{
  assert(message->base.descriptor == &format_sd__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t format_sd__pack
                     (const FormatSd *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &format_sd__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t format_sd__pack_to_buffer
                     (const FormatSd *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &format_sd__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
FormatSd *
       format_sd__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (FormatSd *)
     protobuf_c_message_unpack (&format_sd__descriptor,
                                allocator, len, data);
}
void   format_sd__free_unpacked
                     (FormatSd *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &format_sd__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
#define format_sd__field_descriptors NULL
#define format_sd__field_indices_by_name NULL
#define format_sd__number_ranges NULL
const ProtobufCMessageDescriptor format_sd__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "FormatSd",
  "FormatSd",
  "FormatSd",
  "",
  sizeof(FormatSd),
  0,
  format_sd__field_descriptors,
  format_sd__field_indices_by_name,
  0,  format_sd__number_ranges,
  (ProtobufCMessageInit) format_sd__init,
  NULL,NULL,NULL    /* reserved[123] */
};
