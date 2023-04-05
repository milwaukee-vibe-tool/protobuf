/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: protos/response.proto */

#ifndef PROTOBUF_C_protos_2fresponse_2eproto__INCLUDED
#define PROTOBUF_C_protos_2fresponse_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1004001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "protos/responses/success.pb-c.h"
#include "protos/responses/error.pb-c.h"
#include "protos/responses/logList.pb-c.h"
#include "protos/responses/logInfo.pb-c.h"
#include "protos/responses/systemInfo.pb-c.h"

typedef struct Response Response;
typedef struct ResponsePayload ResponsePayload;


/* --- enums --- */


/* --- messages --- */

struct  Response
{
  ProtobufCMessage base;
  uint32_t request_id;
  ResponsePayload *payload;
};
#define RESPONSE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&response__descriptor) \
    , 0, NULL }


typedef enum {
  RESPONSE_PAYLOAD__PAYLOAD__NOT_SET = 0,
  RESPONSE_PAYLOAD__PAYLOAD_SUCCESS = 1,
  RESPONSE_PAYLOAD__PAYLOAD_ERROR = 2,
  RESPONSE_PAYLOAD__PAYLOAD_LOG_LIST = 3,
  RESPONSE_PAYLOAD__PAYLOAD_LOG_INFO = 4,
  RESPONSE_PAYLOAD__PAYLOAD_SYSTEM_INFO = 5
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(RESPONSE_PAYLOAD__PAYLOAD__CASE)
} ResponsePayload__PayloadCase;

struct  ResponsePayload
{
  ProtobufCMessage base;
  ResponsePayload__PayloadCase payload_case;
  union {
    Success *success;
    Error *error;
    LogList *log_list;
    LogInfo *log_info;
    SystemInfo *system_info;
  };
};
#define RESPONSE_PAYLOAD__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&response_payload__descriptor) \
    , RESPONSE_PAYLOAD__PAYLOAD__NOT_SET, {0} }


/* Response methods */
void   response__init
                     (Response         *message);
size_t response__get_packed_size
                     (const Response   *message);
size_t response__pack
                     (const Response   *message,
                      uint8_t             *out);
size_t response__pack_to_buffer
                     (const Response   *message,
                      ProtobufCBuffer     *buffer);
Response *
       response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   response__free_unpacked
                     (Response *message,
                      ProtobufCAllocator *allocator);
/* ResponsePayload methods */
void   response_payload__init
                     (ResponsePayload         *message);
size_t response_payload__get_packed_size
                     (const ResponsePayload   *message);
size_t response_payload__pack
                     (const ResponsePayload   *message,
                      uint8_t             *out);
size_t response_payload__pack_to_buffer
                     (const ResponsePayload   *message,
                      ProtobufCBuffer     *buffer);
ResponsePayload *
       response_payload__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   response_payload__free_unpacked
                     (ResponsePayload *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Response_Closure)
                 (const Response *message,
                  void *closure_data);
typedef void (*ResponsePayload_Closure)
                 (const ResponsePayload *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor response__descriptor;
extern const ProtobufCMessageDescriptor response_payload__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_protos_2fresponse_2eproto__INCLUDED */
