/* eslint-disable */
import * as _m0 from "protobufjs/minimal";
import { DeleteLog } from "./requests/deleteLog";
import { FormatSd } from "./requests/formatSd";
import { GetLog } from "./requests/getLog";
import { ListLogs } from "./requests/listLogs";
import { NewLog } from "./requests/newLog";

export const protobufPackage = "";

export interface Request {
  requestId: number;
  payload: RequestPayload | undefined;
}

export interface RequestPayload {
  listLogs?: ListLogs | undefined;
  getLog?: GetLog | undefined;
  newLog?: NewLog | undefined;
  deleteLog?: DeleteLog | undefined;
  formatSd?: FormatSd | undefined;
}

function createBaseRequest(): Request {
  return { requestId: 0, payload: undefined };
}

export const Request = {
  encode(message: Request, writer: _m0.Writer = _m0.Writer.create()): _m0.Writer {
    if (message.requestId !== 0) {
      writer.uint32(8).uint32(message.requestId);
    }
    if (message.payload !== undefined) {
      RequestPayload.encode(message.payload, writer.uint32(18).fork()).ldelim();
    }
    return writer;
  },

  decode(input: _m0.Reader | Uint8Array, length?: number): Request {
    const reader = input instanceof _m0.Reader ? input : new _m0.Reader(input);
    let end = length === undefined ? reader.len : reader.pos + length;
    const message = createBaseRequest();
    while (reader.pos < end) {
      const tag = reader.uint32();
      switch (tag >>> 3) {
        case 1:
          message.requestId = reader.uint32();
          break;
        case 2:
          message.payload = RequestPayload.decode(reader, reader.uint32());
          break;
        default:
          reader.skipType(tag & 7);
          break;
      }
    }
    return message;
  },

  fromJSON(object: any): Request {
    return {
      requestId: isSet(object.requestId) ? Number(object.requestId) : 0,
      payload: isSet(object.payload) ? RequestPayload.fromJSON(object.payload) : undefined,
    };
  },

  toJSON(message: Request): unknown {
    const obj: any = {};
    message.requestId !== undefined && (obj.requestId = Math.round(message.requestId));
    message.payload !== undefined &&
      (obj.payload = message.payload ? RequestPayload.toJSON(message.payload) : undefined);
    return obj;
  },

  create<I extends Exact<DeepPartial<Request>, I>>(base?: I): Request {
    return Request.fromPartial(base ?? {});
  },

  fromPartial<I extends Exact<DeepPartial<Request>, I>>(object: I): Request {
    const message = createBaseRequest();
    message.requestId = object.requestId ?? 0;
    message.payload = (object.payload !== undefined && object.payload !== null)
      ? RequestPayload.fromPartial(object.payload)
      : undefined;
    return message;
  },
};

function createBaseRequestPayload(): RequestPayload {
  return { listLogs: undefined, getLog: undefined, newLog: undefined, deleteLog: undefined, formatSd: undefined };
}

export const RequestPayload = {
  encode(message: RequestPayload, writer: _m0.Writer = _m0.Writer.create()): _m0.Writer {
    if (message.listLogs !== undefined) {
      ListLogs.encode(message.listLogs, writer.uint32(10).fork()).ldelim();
    }
    if (message.getLog !== undefined) {
      GetLog.encode(message.getLog, writer.uint32(18).fork()).ldelim();
    }
    if (message.newLog !== undefined) {
      NewLog.encode(message.newLog, writer.uint32(26).fork()).ldelim();
    }
    if (message.deleteLog !== undefined) {
      DeleteLog.encode(message.deleteLog, writer.uint32(34).fork()).ldelim();
    }
    if (message.formatSd !== undefined) {
      FormatSd.encode(message.formatSd, writer.uint32(42).fork()).ldelim();
    }
    return writer;
  },

  decode(input: _m0.Reader | Uint8Array, length?: number): RequestPayload {
    const reader = input instanceof _m0.Reader ? input : new _m0.Reader(input);
    let end = length === undefined ? reader.len : reader.pos + length;
    const message = createBaseRequestPayload();
    while (reader.pos < end) {
      const tag = reader.uint32();
      switch (tag >>> 3) {
        case 1:
          message.listLogs = ListLogs.decode(reader, reader.uint32());
          break;
        case 2:
          message.getLog = GetLog.decode(reader, reader.uint32());
          break;
        case 3:
          message.newLog = NewLog.decode(reader, reader.uint32());
          break;
        case 4:
          message.deleteLog = DeleteLog.decode(reader, reader.uint32());
          break;
        case 5:
          message.formatSd = FormatSd.decode(reader, reader.uint32());
          break;
        default:
          reader.skipType(tag & 7);
          break;
      }
    }
    return message;
  },

  fromJSON(object: any): RequestPayload {
    return {
      listLogs: isSet(object.listLogs) ? ListLogs.fromJSON(object.listLogs) : undefined,
      getLog: isSet(object.getLog) ? GetLog.fromJSON(object.getLog) : undefined,
      newLog: isSet(object.newLog) ? NewLog.fromJSON(object.newLog) : undefined,
      deleteLog: isSet(object.deleteLog) ? DeleteLog.fromJSON(object.deleteLog) : undefined,
      formatSd: isSet(object.formatSd) ? FormatSd.fromJSON(object.formatSd) : undefined,
    };
  },

  toJSON(message: RequestPayload): unknown {
    const obj: any = {};
    message.listLogs !== undefined && (obj.listLogs = message.listLogs ? ListLogs.toJSON(message.listLogs) : undefined);
    message.getLog !== undefined && (obj.getLog = message.getLog ? GetLog.toJSON(message.getLog) : undefined);
    message.newLog !== undefined && (obj.newLog = message.newLog ? NewLog.toJSON(message.newLog) : undefined);
    message.deleteLog !== undefined &&
      (obj.deleteLog = message.deleteLog ? DeleteLog.toJSON(message.deleteLog) : undefined);
    message.formatSd !== undefined && (obj.formatSd = message.formatSd ? FormatSd.toJSON(message.formatSd) : undefined);
    return obj;
  },

  create<I extends Exact<DeepPartial<RequestPayload>, I>>(base?: I): RequestPayload {
    return RequestPayload.fromPartial(base ?? {});
  },

  fromPartial<I extends Exact<DeepPartial<RequestPayload>, I>>(object: I): RequestPayload {
    const message = createBaseRequestPayload();
    message.listLogs = (object.listLogs !== undefined && object.listLogs !== null)
      ? ListLogs.fromPartial(object.listLogs)
      : undefined;
    message.getLog = (object.getLog !== undefined && object.getLog !== null)
      ? GetLog.fromPartial(object.getLog)
      : undefined;
    message.newLog = (object.newLog !== undefined && object.newLog !== null)
      ? NewLog.fromPartial(object.newLog)
      : undefined;
    message.deleteLog = (object.deleteLog !== undefined && object.deleteLog !== null)
      ? DeleteLog.fromPartial(object.deleteLog)
      : undefined;
    message.formatSd = (object.formatSd !== undefined && object.formatSd !== null)
      ? FormatSd.fromPartial(object.formatSd)
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
