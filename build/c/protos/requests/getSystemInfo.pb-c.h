/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: protos/requests/getSystemInfo.proto */

#ifndef PROTOBUF_C_protos_2frequests_2fgetSystemInfo_2eproto__INCLUDED
#define PROTOBUF_C_protos_2frequests_2fgetSystemInfo_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1004001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct GetSystemInfo GetSystemInfo;


/* --- enums --- */


/* --- messages --- */

struct  GetSystemInfo
{
  ProtobufCMessage base;
};
#define GET_SYSTEM_INFO__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&get_system_info__descriptor) \
     }


/* GetSystemInfo methods */
void   get_system_info__init
                     (GetSystemInfo         *message);
size_t get_system_info__get_packed_size
                     (const GetSystemInfo   *message);
size_t get_system_info__pack
                     (const GetSystemInfo   *message,
                      uint8_t             *out);
size_t get_system_info__pack_to_buffer
                     (const GetSystemInfo   *message,
                      ProtobufCBuffer     *buffer);
GetSystemInfo *
       get_system_info__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   get_system_info__free_unpacked
                     (GetSystemInfo *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*GetSystemInfo_Closure)
                 (const GetSystemInfo *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor get_system_info__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_protos_2frequests_2fgetSystemInfo_2eproto__INCLUDED */
