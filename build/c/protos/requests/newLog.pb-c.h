/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: protos/requests/newLog.proto */

#ifndef PROTOBUF_C_protos_2frequests_2fnewLog_2eproto__INCLUDED
#define PROTOBUF_C_protos_2frequests_2fnewLog_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1004001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct NewLog NewLog;


/* --- enums --- */


/* --- messages --- */

struct  NewLog
{
  ProtobufCMessage base;
  /*
   * if "", use just prefix
   * else, use and apply prefix as `prefix_${log_id}`
   */
  char *log_id;
  /*
   * if -1, use previous/default
   */
  int32_t sample_rate;
};
#define NEW_LOG__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&new_log__descriptor) \
    , (char *)protobuf_c_empty_string, 0 }


/* NewLog methods */
void   new_log__init
                     (NewLog         *message);
size_t new_log__get_packed_size
                     (const NewLog   *message);
size_t new_log__pack
                     (const NewLog   *message,
                      uint8_t             *out);
size_t new_log__pack_to_buffer
                     (const NewLog   *message,
                      ProtobufCBuffer     *buffer);
NewLog *
       new_log__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   new_log__free_unpacked
                     (NewLog *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*NewLog_Closure)
                 (const NewLog *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor new_log__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_protos_2frequests_2fnewLog_2eproto__INCLUDED */
