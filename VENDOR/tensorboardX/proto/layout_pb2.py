# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: tensorboardX/proto/layout.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n\x1ftensorboardX/proto/layout.proto\x12\x0ctensorboardX\"\x8f\x01\n\x05\x43hart\x12\r\n\x05title\x18\x01 \x01(\t\x12\x38\n\tmultiline\x18\x02 \x01(\x0b\x32#.tensorboardX.MultilineChartContentH\x00\x12\x32\n\x06margin\x18\x03 \x01(\x0b\x32 .tensorboardX.MarginChartContentH\x00\x42\t\n\x07\x63ontent\"$\n\x15MultilineChartContent\x12\x0b\n\x03tag\x18\x01 \x03(\t\"\x84\x01\n\x12MarginChartContent\x12\x37\n\x06series\x18\x01 \x03(\x0b\x32\'.tensorboardX.MarginChartContent.Series\x1a\x35\n\x06Series\x12\r\n\x05value\x18\x01 \x01(\t\x12\r\n\x05lower\x18\x02 \x01(\t\x12\r\n\x05upper\x18\x03 \x01(\t\"M\n\x08\x43\x61tegory\x12\r\n\x05title\x18\x01 \x01(\t\x12\"\n\x05\x63hart\x18\x02 \x03(\x0b\x32\x13.tensorboardX.Chart\x12\x0e\n\x06\x63losed\x18\x03 \x01(\x08\"C\n\x06Layout\x12\x0f\n\x07version\x18\x01 \x01(\x05\x12(\n\x08\x63\x61tegory\x18\x02 \x03(\x0b\x32\x16.tensorboardX.Categoryb\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'tensorboardX.proto.layout_pb2', _globals)
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _globals['_CHART']._serialized_start=50
  _globals['_CHART']._serialized_end=193
  _globals['_MULTILINECHARTCONTENT']._serialized_start=195
  _globals['_MULTILINECHARTCONTENT']._serialized_end=231
  _globals['_MARGINCHARTCONTENT']._serialized_start=234
  _globals['_MARGINCHARTCONTENT']._serialized_end=366
  _globals['_MARGINCHARTCONTENT_SERIES']._serialized_start=313
  _globals['_MARGINCHARTCONTENT_SERIES']._serialized_end=366
  _globals['_CATEGORY']._serialized_start=368
  _globals['_CATEGORY']._serialized_end=445
  _globals['_LAYOUT']._serialized_start=447
  _globals['_LAYOUT']._serialized_end=514
# @@protoc_insertion_point(module_scope)