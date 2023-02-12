/* eslint-disable */
import * as _m0 from "protobufjs/minimal";
import { Error } from "./responses/error";
import { LogInfo } from "./responses/logInfo";
import { LogList } from "./responses/logList";
import { Success } from "./responses/success";
import { SystemInfo } from "./responses/systemInfo";

export const protobufPackage = "";

export interface Response {
  requestId: number;
  payload: ResponsePayload | undefined;
}

export interface ResponsePayload {
  success?: Success | undefined;
  error?: Error | undefined;
  logList?: LogList | undefined;
  logInfo?: LogInfo | undefined;
  systemInfo?: SystemInfo | undefined;
}

function createBaseResponse(): Response {
  return { requestId: 0, payload: undefined };
}

export const Response = {
  encode(message: Response, writer: _m0.Writer = _m0.Writer.create()): _m0.Writer {
    if (message.requestId !== 0) {
      writer.uint32(8).uint32(message.requestId);
    }
    if (message.payload !== undefined) {
      ResponsePayload.encode(message.payload, writer.uint32(18).fork()).ldelim();
    }
    return writer;
  },

  decode(input: _m0.Reader | Uint8Array, length?: number): Response {
    const reader = input instanceof _m0.Reader ? input : new _m0.Reader(input);
    let end = length === undefined ? reader.len : reader.pos + length;
    const message = createBaseResponse();
    while (reader.pos < end) {
      const tag = reader.uint32();
      switch (tag >>> 3) {
        case 1:
          message.requestId = reader.uint32();
          break;
        case 2:
          message.payload = ResponsePayload.decode(reader, reader.uint32());
          break;
        default:
          reader.skipType(tag & 7);
          break;
      }
    }
    return message;
  },

  fromJSON(object: any): Response {
    return {
      requestId: isSet(object.requestId) ? Number(object.requestId) : 0,
      payload: isSet(object.payload) ? ResponsePayload.fromJSON(object.payload) : undefined,
    };
  },

  toJSON(message: Response): unknown {
    const obj: any = {};
    message.requestId !== undefined && (obj.requestId = Math.round(message.requestId));
    message.payload !== undefined &&
      (obj.payload = message.payload ? ResponsePayload.toJSON(message.payload) : undefined);
    return obj;
  },

  create<I extends Exact<DeepPartial<Response>, I>>(base?: I): Response {
    return Response.fromPartial(base ?? {});
  },

  fromPartial<I extends Exact<DeepPartial<Response>, I>>(object: I): Response {
    const message = createBaseResponse();
    message.requestId = object.requestId ?? 0;
    message.payload = (object.payload !== undefined && object.payload !== null)
      ? ResponsePayload.fromPartial(object.payload)
      : undefined;
    return message;
  },
};

function createBaseResponsePayload(): ResponsePayload {
  return { success: undefined, error: undefined, logList: undefined, logInfo: undefined, systemInfo: undefined };
}

export const ResponsePayload = {
  encode(message: ResponsePayload, writer: _m0.Writer = _m0.Writer.create()): _m0.Writer {
    if (message.success !== undefined) {
      Success.encode(message.success, writer.uint32(10).fork()).ldelim();
    }
    if (message.error !== undefined) {
      Error.encode(message.error, writer.uint32(18).fork()).ldelim();
    }
    if (message.logList !== undefined) {
      LogList.encode(message.logList, writer.uint32(26).fork()).ldelim();
    }
    if (message.logInfo !== undefined) {
      LogInfo.encode(message.logInfo, writer.uint32(34).fork()).ldelim();
    }
    if (message.systemInfo !== undefined) {
      SystemInfo.encode(message.systemInfo, writer.uint32(42).fork()).ldelim();
    }
    return writer;
  },

  decode(input: _m0.Reader | Uint8Array, length?: number): ResponsePayload {
    const reader = input instanceof _m0.Reader ? input : new _m0.Reader(input);
    let end = length === undefined ? reader.len : reader.pos + length;
    const message = createBaseResponsePayload();
    while (reader.pos < end) {
      const tag = reader.uint32();
      switch (tag >>> 3) {
        case 1:
          message.success = Success.decode(reader, reader.uint32());
          break;
        case 2:
          message.error = Error.decode(reader, reader.uint32());
          break;
        case 3:
          message.logList = LogList.decode(reader, reader.uint32());
          break;
        case 4:
          message.logInfo = LogInfo.decode(reader, reader.uint32());
          break;
        case 5:
          message.systemInfo = SystemInfo.decode(reader, reader.uint32());
          break;
        default:
          reader.skipType(tag & 7);
          break;
      }
    }
    return message;
  },

  fromJSON(object: any): ResponsePayload {
    return {
      success: isSet(object.success) ? Success.fromJSON(object.success) : undefined,
      error: isSet(object.error) ? Error.fromJSON(object.error) : undefined,
      logList: isSet(object.logList) ? LogList.fromJSON(object.logList) : undefined,
      logInfo: isSet(object.logInfo) ? LogInfo.fromJSON(object.logInfo) : undefined,
      systemInfo: isSet(object.systemInfo) ? SystemInfo.fromJSON(object.systemInfo) : undefined,
    };
  },

  toJSON(message: ResponsePayload): unknown {
    const obj: any = {};
    message.success !== undefined && (obj.success = message.success ? Success.toJSON(message.success) : undefined);
    message.error !== undefined && (obj.error = message.error ? Error.toJSON(message.error) : undefined);
    message.logList !== undefined && (obj.logList = message.logList ? LogList.toJSON(message.logList) : undefined);
    message.logInfo !== undefined && (obj.logInfo = message.logInfo ? LogInfo.toJSON(message.logInfo) : undefined);
    message.systemInfo !== undefined &&
      (obj.systemInfo = message.systemInfo ? SystemInfo.toJSON(message.systemInfo) : undefined);
    return obj;
  },

  create<I extends Exact<DeepPartial<ResponsePayload>, I>>(base?: I): ResponsePayload {
    return ResponsePayload.fromPartial(base ?? {});
  },

  fromPartial<I extends Exact<DeepPartial<ResponsePayload>, I>>(object: I): ResponsePayload {
    const message = createBaseResponsePayload();
    message.success = (object.success !== undefined && object.success !== null)
      ? Success.fromPartial(object.success)
      : undefined;
    message.error = (object.error !== undefined && object.error !== null) ? Error.fromPartial(object.error) : undefined;
    message.logList = (object.logList !== undefined && object.logList !== null)
      ? LogList.fromPartial(object.logList)
      : undefined;
    message.logInfo = (object.logInfo !== undefined && object.logInfo !== null)
      ? LogInfo.fromPartial(object.logInfo)
      : undefined;
    message.systemInfo = (object.systemInfo !== undefined && object.systemInfo !== null)
      ? SystemInfo.fromPartial(object.systemInfo)
      : undefined;
    return message;
  },
};

type Builtin = Date | Function | Uint8Array | string | number | boolean | undefined;

export type DeepPartial<T> = T extends Builtin ? T
  : T extends Array<infer U> ? Array<DeepPartial<U>> : T extends ReadonlyArray<infer U> ? ReadonlyArray<DeepPartial<U>>
  : T extends {} ? { [K in keyof T]?: DeepPartial<T[K]> }
  : Partial<T>;

type KeysOfUnion<T> = T extends T ? keyof T : never;
export type Exact<P, I extends P> = P extends Builtin ? P
  : P & { [K in keyof P]: Exact<P[K], I[K]> } & { [K in Exclude<keyof I, KeysOfUnion<P>>]: never };

function isSet(value: any): boolean {
  return value !== null && value !== undefined;
}
