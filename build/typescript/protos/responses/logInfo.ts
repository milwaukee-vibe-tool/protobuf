/* eslint-disable */
import * as _m0 from "protobufjs/minimal";

export const protobufPackage = "";

export interface LogInfo {
  logId: string;
  sampleRate: number;
  offset: number;
  count: number;
  total: number;
  points: DataPoint[];
}

export interface DataPoint {
  value: number;
}

function createBaseLogInfo(): LogInfo {
  return { logId: "", sampleRate: 0, offset: 0, count: 0, total: 0, points: [] };
}

export const LogInfo = {
  encode(message: LogInfo, writer: _m0.Writer = _m0.Writer.create()): _m0.Writer {
    if (message.logId !== "") {
      writer.uint32(10).string(message.logId);
    }
    if (message.sampleRate !== 0) {
      writer.uint32(16).uint32(message.sampleRate);
    }
    if (message.offset !== 0) {
      writer.uint32(24).uint32(message.offset);
    }
    if (message.count !== 0) {
      writer.uint32(32).uint32(message.count);
    }
    if (message.total !== 0) {
      writer.uint32(40).uint32(message.total);
    }
    for (const v of message.points) {
      DataPoint.encode(v!, writer.uint32(50).fork()).ldelim();
    }
    return writer;
  },

  decode(input: _m0.Reader | Uint8Array, length?: number): LogInfo {
    const reader = input instanceof _m0.Reader ? input : new _m0.Reader(input);
    let end = length === undefined ? reader.len : reader.pos + length;
    const message = createBaseLogInfo();
    while (reader.pos < end) {
      const tag = reader.uint32();
      switch (tag >>> 3) {
        case 1:
          message.logId = reader.string();
          break;
        case 2:
          message.sampleRate = reader.uint32();
          break;
        case 3:
          message.offset = reader.uint32();
          break;
        case 4:
          message.count = reader.uint32();
          break;
        case 5:
          message.total = reader.uint32();
          break;
        case 6:
          message.points.push(DataPoint.decode(reader, reader.uint32()));
          break;
        default:
          reader.skipType(tag & 7);
          break;
      }
    }
    return message;
  },

  fromJSON(object: any): LogInfo {
    return {
      logId: isSet(object.logId) ? String(object.logId) : "",
      sampleRate: isSet(object.sampleRate) ? Number(object.sampleRate) : 0,
      offset: isSet(object.offset) ? Number(object.offset) : 0,
      count: isSet(object.count) ? Number(object.count) : 0,
      total: isSet(object.total) ? Number(object.total) : 0,
      points: Array.isArray(object?.points) ? object.points.map((e: any) => DataPoint.fromJSON(e)) : [],
    };
  },

  toJSON(message: LogInfo): unknown {
    const obj: any = {};
    message.logId !== undefined && (obj.logId = message.logId);
    message.sampleRate !== undefined && (obj.sampleRate = Math.round(message.sampleRate));
    message.offset !== undefined && (obj.offset = Math.round(message.offset));
    message.count !== undefined && (obj.count = Math.round(message.count));
    message.total !== undefined && (obj.total = Math.round(message.total));
    if (message.points) {
      obj.points = message.points.map((e) => e ? DataPoint.toJSON(e) : undefined);
    } else {
      obj.points = [];
    }
    return obj;
  },

  create<I extends Exact<DeepPartial<LogInfo>, I>>(base?: I): LogInfo {
    return LogInfo.fromPartial(base ?? {});
  },

  fromPartial<I extends Exact<DeepPartial<LogInfo>, I>>(object: I): LogInfo {
    const message = createBaseLogInfo();
    message.logId = object.logId ?? "";
    message.sampleRate = object.sampleRate ?? 0;
    message.offset = object.offset ?? 0;
    message.count = object.count ?? 0;
    message.total = object.total ?? 0;
    message.points = object.points?.map((e) => DataPoint.fromPartial(e)) || [];
    return message;
  },
};

function createBaseDataPoint(): DataPoint {
  return { value: 0 };
}

export const DataPoint = {
  encode(message: DataPoint, writer: _m0.Writer = _m0.Writer.create()): _m0.Writer {
    if (message.value !== 0) {
      writer.uint32(8).uint32(message.value);
    }
    return writer;
  },

  decode(input: _m0.Reader | Uint8Array, length?: number): DataPoint {
    const reader = input instanceof _m0.Reader ? input : new _m0.Reader(input);
    let end = length === undefined ? reader.len : reader.pos + length;
    const message = createBaseDataPoint();
    while (reader.pos < end) {
      const tag = reader.uint32();
      switch (tag >>> 3) {
        case 1:
          message.value = reader.uint32();
          break;
        default:
          reader.skipType(tag & 7);
          break;
      }
    }
    return message;
  },

  fromJSON(object: any): DataPoint {
    return { value: isSet(object.value) ? Number(object.value) : 0 };
  },

  toJSON(message: DataPoint): unknown {
    const obj: any = {};
    message.value !== undefined && (obj.value = Math.round(message.value));
    return obj;
  },

  create<I extends Exact<DeepPartial<DataPoint>, I>>(base?: I): DataPoint {
    return DataPoint.fromPartial(base ?? {});
  },

  fromPartial<I extends Exact<DeepPartial<DataPoint>, I>>(object: I): DataPoint {
    const message = createBaseDataPoint();
    message.value = object.value ?? 0;
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
