/* eslint-disable */
import * as _m0 from "protobufjs/minimal";

export const protobufPackage = "";

export interface NewLog {
  logId: string;
  sampleRate: string;
}

function createBaseNewLog(): NewLog {
  return { logId: "", sampleRate: "" };
}

export const NewLog = {
  encode(message: NewLog, writer: _m0.Writer = _m0.Writer.create()): _m0.Writer {
    if (message.logId !== "") {
      writer.uint32(10).string(message.logId);
    }
    if (message.sampleRate !== "") {
      writer.uint32(18).string(message.sampleRate);
    }
    return writer;
  },

  decode(input: _m0.Reader | Uint8Array, length?: number): NewLog {
    const reader = input instanceof _m0.Reader ? input : new _m0.Reader(input);
    let end = length === undefined ? reader.len : reader.pos + length;
    const message = createBaseNewLog();
    while (reader.pos < end) {
      const tag = reader.uint32();
      switch (tag >>> 3) {
        case 1:
          message.logId = reader.string();
          break;
        case 2:
          message.sampleRate = reader.string();
          break;
        default:
          reader.skipType(tag & 7);
          break;
      }
    }
    return message;
  },

  fromJSON(object: any): NewLog {
    return {
      logId: isSet(object.logId) ? String(object.logId) : "",
      sampleRate: isSet(object.sampleRate) ? String(object.sampleRate) : "",
    };
  },

  toJSON(message: NewLog): unknown {
    const obj: any = {};
    message.logId !== undefined && (obj.logId = message.logId);
    message.sampleRate !== undefined && (obj.sampleRate = message.sampleRate);
    return obj;
  },

  create<I extends Exact<DeepPartial<NewLog>, I>>(base?: I): NewLog {
    return NewLog.fromPartial(base ?? {});
  },

  fromPartial<I extends Exact<DeepPartial<NewLog>, I>>(object: I): NewLog {
    const message = createBaseNewLog();
    message.logId = object.logId ?? "";
    message.sampleRate = object.sampleRate ?? "";
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
