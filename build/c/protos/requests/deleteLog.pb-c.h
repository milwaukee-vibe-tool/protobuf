/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: protos/requests/deleteLog.proto */

#ifndef PROTOBUF_C_protos_2frequests_2fdeleteLog_2eproto__INCLUDED
#define PROTOBUF_C_protos_2frequests_2fdeleteLog_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1004001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct DeleteLog DeleteLog;


/* --- enums --- */


/* --- messages --- */

struct  DeleteLog
{
  ProtobufCMessage base;
  char *log_id;
};
#define DELETE_LOG__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&delete_log__descriptor) \
    , (char *)protobuf_c_empty_string }


/* DeleteLog methods */
void   delete_log__init
                     (DeleteLog         *message);
size_t delete_log__get_packed_size
                     (const DeleteLog   *message);
size_t delete_log__pack
                     (const DeleteLog   *message,
                      uint8_t             *out);
size_t delete_log__pack_to_buffer
                     (const DeleteLog   *message,
                      ProtobufCBuffer     *buffer);
DeleteLog *
       delete_log__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   delete_log__free_unpacked
                     (DeleteLog *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*DeleteLog_Closure)
                 (const DeleteLog *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor delete_log__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_protos_2frequests_2fdeleteLog_2eproto__INCLUDED */