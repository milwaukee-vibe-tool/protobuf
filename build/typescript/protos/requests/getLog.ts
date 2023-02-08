/* eslint-disable */
import * as _m0 from "protobufjs/minimal";

export const protobufPackage = "";

export interface GetLog {
  logId: string;
  offset: number;
  count: number;
}

function createBaseGetLog(): GetLog {
  return { logId: "", offset: 0, count: 0 };
}

export const GetLog = {
  encode(message: GetLog, writer: _m0.Writer = _m0.Writer.create()): _m0.Writer {
    if (message.logId !== "") {
      writer.uint32(10).string(message.logId);
    }
    if (message.offset !== 0) {
      writer.uint32(16).uint32(message.offset);
    }
    if (message.count !== 0) {
      writer.uint32(24).uint32(message.count);
    }
    return writer;
  },

  decode(input: _m0.Reader | Uint8Array, length?: number): GetLog {
    const reader = input instanceof _m0.Reader ? input : new _m0.Reader(input);
    let end = length === undefined ? reader.len : reader.pos + length;
    const message = createBaseGetLog();
    while (reader.pos < end) {
      const tag = reader.uint32();
      switch (tag >>> 3) {
        case 1:
          message.logId = reader.string();
          break;
        case 2:
          message.offset = reader.uint32();
          break;
        case 3:
          message.count = reader.uint32();
          break;
        default:
          reader.skipType(tag & 7);
          break;
      }
    }
    return message;
  },

  fromJSON(object: any): GetLog {
    return {
      logId: isSet(object.logId) ? String(object.logId) : "",
      offset: isSet(object.offset) ? Number(object.offset) : 0,
      count: isSet(object.count) ? Number(object.count) : 0,
    };
  },

  toJSON(message: GetLog): unknown {
    const obj: any = {};
    message.logId !== undefined && (obj.logId = message.logId);
    message.offset !== undefined && (obj.offset = Math.round(message.offset));
    message.count !== undefined && (obj.count = Math.round(message.count));
    return obj;
  },

  create<I extends Exact<DeepPartial<GetLog>, I>>(base?: I): GetLog {
    return GetLog.fromPartial(base ?? {});
  },

  fromPartial<I extends Exact<DeepPartial<GetLog>, I>>(object: I): GetLog {
    const message = createBaseGetLog();
    message.logId = object.logId ?? "";
    message.offset = object.offset ?? 0;
    message.count = object.count ?? 0;
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
