/* eslint-disable */
import * as _m0 from "protobufjs/minimal";

export const protobufPackage = "";

export interface SystemInfo {
  systemId: string;
}

function createBaseSystemInfo(): SystemInfo {
  return { systemId: "" };
}

export const SystemInfo = {
  encode(message: SystemInfo, writer: _m0.Writer = _m0.Writer.create()): _m0.Writer {
    if (message.systemId !== "") {
      writer.uint32(10).string(message.systemId);
    }
    return writer;
  },

  decode(input: _m0.Reader | Uint8Array, length?: number): SystemInfo {
    const reader = input instanceof _m0.Reader ? input : new _m0.Reader(input);
    let end = length === undefined ? reader.len : reader.pos + length;
    const message = createBaseSystemInfo();
    while (reader.pos < end) {
      const tag = reader.uint32();
      switch (tag >>> 3) {
        case 1:
          message.systemId = reader.string();
          break;
        default:
          reader.skipType(tag & 7);
          break;
      }
    }
    return message;
  },

  fromJSON(object: any): SystemInfo {
    return { systemId: isSet(object.systemId) ? String(object.systemId) : "" };
  },

  toJSON(message: SystemInfo): unknown {
    const obj: any = {};
    message.systemId !== undefined && (obj.systemId = message.systemId);
    return obj;
  },

  create<I extends Exact<DeepPartial<SystemInfo>, I>>(base?: I): SystemInfo {
    return SystemInfo.fromPartial(base ?? {});
  },

  fromPartial<I extends Exact<DeepPartial<SystemInfo>, I>>(object: I): SystemInfo {
    const message = createBaseSystemInfo();
    message.systemId = object.systemId ?? "";
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
