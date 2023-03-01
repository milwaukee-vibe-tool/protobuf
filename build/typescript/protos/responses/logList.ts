/* eslint-disable */
import * as _m0 from "protobufjs/minimal";

export const protobufPackage = "";

export interface LogList {
  prefix: number;
  /** if a negative offset was provided in the request, return the absolute offset */
  offset: number;
  count: number;
  total: number;
  logs: LogListLogInfo[];
}

export interface LogListLogInfo {
  logId: string;
}

function createBaseLogList(): LogList {
  return { prefix: 0, offset: 0, count: 0, total: 0, logs: [] };
}

export const LogList = {
  encode(message: LogList, writer: _m0.Writer = _m0.Writer.create()): _m0.Writer {
    if (message.prefix !== 0) {
      writer.uint32(8).uint32(message.prefix);
    }
    if (message.offset !== 0) {
      writer.uint32(16).uint32(message.offset);
    }
    if (message.count !== 0) {
      writer.uint32(24).uint32(message.count);
    }
    if (message.total !== 0) {
      writer.uint32(32).uint32(message.total);
    }
    for (const v of message.logs) {
      LogListLogInfo.encode(v!, writer.uint32(42).fork()).ldelim();
    }
    return writer;
  },

  decode(input: _m0.Reader | Uint8Array, length?: number): LogList {
    const reader = input instanceof _m0.Reader ? input : new _m0.Reader(input);
    let end = length === undefined ? reader.len : reader.pos + length;
    const message = createBaseLogList();
    while (reader.pos < end) {
      const tag = reader.uint32();
      switch (tag >>> 3) {
        case 1:
          message.prefix = reader.uint32();
          break;
        case 2:
          message.offset = reader.uint32();
          break;
        case 3:
          message.count = reader.uint32();
          break;
        case 4:
          message.total = reader.uint32();
          break;
        case 5:
          message.logs.push(LogListLogInfo.decode(reader, reader.uint32()));
          break;
        default:
          reader.skipType(tag & 7);
          break;
      }
    }
    return message;
  },

  fromJSON(object: any): LogList {
    return {
      prefix: isSet(object.prefix) ? Number(object.prefix) : 0,
      offset: isSet(object.offset) ? Number(object.offset) : 0,
      count: isSet(object.count) ? Number(object.count) : 0,
      total: isSet(object.total) ? Number(object.total) : 0,
      logs: Array.isArray(object?.logs) ? object.logs.map((e: any) => LogListLogInfo.fromJSON(e)) : [],
    };
  },

  toJSON(message: LogList): unknown {
    const obj: any = {};
    message.prefix !== undefined && (obj.prefix = Math.round(message.prefix));
    message.offset !== undefined && (obj.offset = Math.round(message.offset));
    message.count !== undefined && (obj.count = Math.round(message.count));
    message.total !== undefined && (obj.total = Math.round(message.total));
    if (message.logs) {
      obj.logs = message.logs.map((e) => e ? LogListLogInfo.toJSON(e) : undefined);
    } else {
      obj.logs = [];
    }
    return obj;
  },

  create<I extends Exact<DeepPartial<LogList>, I>>(base?: I): LogList {
    return LogList.fromPartial(base ?? {});
  },

  fromPartial<I extends Exact<DeepPartial<LogList>, I>>(object: I): LogList {
    const message = createBaseLogList();
    message.prefix = object.prefix ?? 0;
    message.offset = object.offset ?? 0;
    message.count = object.count ?? 0;
    message.total = object.total ?? 0;
    message.logs = object.logs?.map((e) => LogListLogInfo.fromPartial(e)) || [];
    return message;
  },
};

function createBaseLogListLogInfo(): LogListLogInfo {
  return { logId: "" };
}

export const LogListLogInfo = {
  encode(message: LogListLogInfo, writer: _m0.Writer = _m0.Writer.create()): _m0.Writer {
    if (message.logId !== "") {
      writer.uint32(10).string(message.logId);
    }
    return writer;
  },

  decode(input: _m0.Reader | Uint8Array, length?: number): LogListLogInfo {
    const reader = input instanceof _m0.Reader ? input : new _m0.Reader(input);
    let end = length === undefined ? reader.len : reader.pos + length;
    const message = createBaseLogListLogInfo();
    while (reader.pos < end) {
      const tag = reader.uint32();
      switch (tag >>> 3) {
        case 1:
          message.logId = reader.string();
          break;
        default:
          reader.skipType(tag & 7);
          break;
      }
    }
    return message;
  },

  fromJSON(object: any): LogListLogInfo {
    return { logId: isSet(object.logId) ? String(object.logId) : "" };
  },

  toJSON(message: LogListLogInfo): unknown {
    const obj: any = {};
    message.logId !== undefined && (obj.logId = message.logId);
    return obj;
  },

  create<I extends Exact<DeepPartial<LogListLogInfo>, I>>(base?: I): LogListLogInfo {
    return LogListLogInfo.fromPartial(base ?? {});
  },

  fromPartial<I extends Exact<DeepPartial<LogListLogInfo>, I>>(object: I): LogListLogInfo {
    const message = createBaseLogListLogInfo();
    message.logId = object.logId ?? "";
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
