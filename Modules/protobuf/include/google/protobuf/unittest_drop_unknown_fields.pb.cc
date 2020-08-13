// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/unittest_drop_unknown_fields.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include <google/protobuf/unittest_drop_unknown_fields.pb.h>

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace unittest_drop_unknown_fields {
class FooDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<Foo> {
} _Foo_default_instance_;
class FooWithExtraFieldsDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<FooWithExtraFields> {
} _FooWithExtraFields_default_instance_;

namespace protobuf_google_2fprotobuf_2funittest_5fdrop_5funknown_5ffields_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[2];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[2];

}  // namespace

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Foo, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Foo, int32_value_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Foo, enum_value_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FooWithExtraFields, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FooWithExtraFields, int32_value_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FooWithExtraFields, enum_value_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FooWithExtraFields, extra_int32_value_),
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(Foo)},
  { 6, -1, sizeof(FooWithExtraFields)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_Foo_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_FooWithExtraFields_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "google/protobuf/unittest_drop_unknown_fields.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

}  // namespace

void TableStruct::Shutdown() {
  _Foo_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
  _FooWithExtraFields_default_instance_.Shutdown();
  delete file_level_metadata[1].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _Foo_default_instance_.DefaultConstruct();
  _FooWithExtraFields_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n2google/protobuf/unittest_drop_unknown_"
      "fields.proto\022\034unittest_drop_unknown_fiel"
      "ds\"\205\001\n\003Foo\022\023\n\013int32_value\030\001 \001(\005\022@\n\nenum_"
      "value\030\002 \001(\0162,.unittest_drop_unknown_fiel"
      "ds.Foo.NestedEnum\"\'\n\nNestedEnum\022\007\n\003FOO\020\000"
      "\022\007\n\003BAR\020\001\022\007\n\003BAZ\020\002\"\307\001\n\022FooWithExtraField"
      "s\022\023\n\013int32_value\030\001 \001(\005\022O\n\nenum_value\030\002 \001"
      "(\0162;.unittest_drop_unknown_fields.FooWit"
      "hExtraFields.NestedEnum\022\031\n\021extra_int32_v"
      "alue\030\003 \001(\005\"0\n\nNestedEnum\022\007\n\003FOO\020\000\022\007\n\003BAR"
      "\020\001\022\007\n\003BAZ\020\002\022\007\n\003QUX\020\003B,\242\002\014DropUnknowns\252\002\032"
      "Google.Protobuf.TestProtosb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 474);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/protobuf/unittest_drop_unknown_fields.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_google_2fprotobuf_2funittest_5fdrop_5funknown_5ffields_2eproto

const ::google::protobuf::EnumDescriptor* Foo_NestedEnum_descriptor() {
  protobuf_google_2fprotobuf_2funittest_5fdrop_5funknown_5ffields_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fprotobuf_2funittest_5fdrop_5funknown_5ffields_2eproto::file_level_enum_descriptors[0];
}
bool Foo_NestedEnum_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const Foo_NestedEnum Foo::FOO;
const Foo_NestedEnum Foo::BAR;
const Foo_NestedEnum Foo::BAZ;
const Foo_NestedEnum Foo::NestedEnum_MIN;
const Foo_NestedEnum Foo::NestedEnum_MAX;
const int Foo::NestedEnum_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
const ::google::protobuf::EnumDescriptor* FooWithExtraFields_NestedEnum_descriptor() {
  protobuf_google_2fprotobuf_2funittest_5fdrop_5funknown_5ffields_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fprotobuf_2funittest_5fdrop_5funknown_5ffields_2eproto::file_level_enum_descriptors[1];
}
bool FooWithExtraFields_NestedEnum_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const FooWithExtraFields_NestedEnum FooWithExtraFields::FOO;
const FooWithExtraFields_NestedEnum FooWithExtraFields::BAR;
const FooWithExtraFields_NestedEnum FooWithExtraFields::BAZ;
const FooWithExtraFields_NestedEnum FooWithExtraFields::QUX;
const FooWithExtraFields_NestedEnum FooWithExtraFields::NestedEnum_MIN;
const FooWithExtraFields_NestedEnum FooWithExtraFields::NestedEnum_MAX;
const int FooWithExtraFields::NestedEnum_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Foo::kInt32ValueFieldNumber;
const int Foo::kEnumValueFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Foo::Foo()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_google_2fprotobuf_2funittest_5fdrop_5funknown_5ffields_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:unittest_drop_unknown_fields.Foo)
}
Foo::Foo(const Foo& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&int32_value_, &from.int32_value_,
    reinterpret_cast<char*>(&enum_value_) -
    reinterpret_cast<char*>(&int32_value_) + sizeof(enum_value_));
  // @@protoc_insertion_point(copy_constructor:unittest_drop_unknown_fields.Foo)
}

void Foo::SharedCtor() {
  ::memset(&int32_value_, 0, reinterpret_cast<char*>(&enum_value_) -
    reinterpret_cast<char*>(&int32_value_) + sizeof(enum_value_));
  _cached_size_ = 0;
}

Foo::~Foo() {
  // @@protoc_insertion_point(destructor:unittest_drop_unknown_fields.Foo)
  SharedDtor();
}

void Foo::SharedDtor() {
}

void Foo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Foo::descriptor() {
  protobuf_google_2fprotobuf_2funittest_5fdrop_5funknown_5ffields_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fprotobuf_2funittest_5fdrop_5funknown_5ffields_2eproto::file_level_metadata[0].descriptor;
}

const Foo& Foo::default_instance() {
  protobuf_google_2fprotobuf_2funittest_5fdrop_5funknown_5ffields_2eproto::InitDefaults();
  return *internal_default_instance();
}

Foo* Foo::New(::google::protobuf::Arena* arena) const {
  Foo* n = new Foo;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Foo::Clear() {
// @@protoc_insertion_point(message_clear_start:unittest_drop_unknown_fields.Foo)
  ::memset(&int32_value_, 0, reinterpret_cast<char*>(&enum_value_) -
    reinterpret_cast<char*>(&int32_value_) + sizeof(enum_value_));
}

bool Foo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:unittest_drop_unknown_fields.Foo)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 int32_value = 1;
      case 1: {
        if (tag == 8u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &int32_value_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .unittest_drop_unknown_fields.Foo.NestedEnum enum_value = 2;
      case 2: {
        if (tag == 16u) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_enum_value(static_cast< ::unittest_drop_unknown_fields::Foo_NestedEnum >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:unittest_drop_unknown_fields.Foo)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:unittest_drop_unknown_fields.Foo)
  return false;
#undef DO_
}

void Foo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:unittest_drop_unknown_fields.Foo)
  // int32 int32_value = 1;
  if (this->int32_value() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->int32_value(), output);
  }

  // .unittest_drop_unknown_fields.Foo.NestedEnum enum_value = 2;
  if (this->enum_value() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->enum_value(), output);
  }

  // @@protoc_insertion_point(serialize_end:unittest_drop_unknown_fields.Foo)
}

::google::protobuf::uint8* Foo::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:unittest_drop_unknown_fields.Foo)
  // int32 int32_value = 1;
  if (this->int32_value() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->int32_value(), target);
  }

  // .unittest_drop_unknown_fields.Foo.NestedEnum enum_value = 2;
  if (this->enum_value() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->enum_value(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:unittest_drop_unknown_fields.Foo)
  return target;
}

size_t Foo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:unittest_drop_unknown_fields.Foo)
  size_t total_size = 0;

  // int32 int32_value = 1;
  if (this->int32_value() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->int32_value());
  }

  // .unittest_drop_unknown_fields.Foo.NestedEnum enum_value = 2;
  if (this->enum_value() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->enum_value());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Foo::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:unittest_drop_unknown_fields.Foo)
  GOOGLE_DCHECK_NE(&from, this);
  const Foo* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Foo>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:unittest_drop_unknown_fields.Foo)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:unittest_drop_unknown_fields.Foo)
    MergeFrom(*source);
  }
}

void Foo::MergeFrom(const Foo& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:unittest_drop_unknown_fields.Foo)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.int32_value() != 0) {
    set_int32_value(from.int32_value());
  }
  if (from.enum_value() != 0) {
    set_enum_value(from.enum_value());
  }
}

void Foo::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:unittest_drop_unknown_fields.Foo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Foo::CopyFrom(const Foo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:unittest_drop_unknown_fields.Foo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Foo::IsInitialized() const {
  return true;
}

void Foo::Swap(Foo* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Foo::InternalSwap(Foo* other) {
  std::swap(int32_value_, other->int32_value_);
  std::swap(enum_value_, other->enum_value_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Foo::GetMetadata() const {
  protobuf_google_2fprotobuf_2funittest_5fdrop_5funknown_5ffields_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fprotobuf_2funittest_5fdrop_5funknown_5ffields_2eproto::file_level_metadata[0];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Foo

// int32 int32_value = 1;
void Foo::clear_int32_value() {
  int32_value_ = 0;
}
::google::protobuf::int32 Foo::int32_value() const {
  // @@protoc_insertion_point(field_get:unittest_drop_unknown_fields.Foo.int32_value)
  return int32_value_;
}
void Foo::set_int32_value(::google::protobuf::int32 value) {
  
  int32_value_ = value;
  // @@protoc_insertion_point(field_set:unittest_drop_unknown_fields.Foo.int32_value)
}

// .unittest_drop_unknown_fields.Foo.NestedEnum enum_value = 2;
void Foo::clear_enum_value() {
  enum_value_ = 0;
}
::unittest_drop_unknown_fields::Foo_NestedEnum Foo::enum_value() const {
  // @@protoc_insertion_point(field_get:unittest_drop_unknown_fields.Foo.enum_value)
  return static_cast< ::unittest_drop_unknown_fields::Foo_NestedEnum >(enum_value_);
}
void Foo::set_enum_value(::unittest_drop_unknown_fields::Foo_NestedEnum value) {
  
  enum_value_ = value;
  // @@protoc_insertion_point(field_set:unittest_drop_unknown_fields.Foo.enum_value)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int FooWithExtraFields::kInt32ValueFieldNumber;
const int FooWithExtraFields::kEnumValueFieldNumber;
const int FooWithExtraFields::kExtraInt32ValueFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

FooWithExtraFields::FooWithExtraFields()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_google_2fprotobuf_2funittest_5fdrop_5funknown_5ffields_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:unittest_drop_unknown_fields.FooWithExtraFields)
}
FooWithExtraFields::FooWithExtraFields(const FooWithExtraFields& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&int32_value_, &from.int32_value_,
    reinterpret_cast<char*>(&extra_int32_value_) -
    reinterpret_cast<char*>(&int32_value_) + sizeof(extra_int32_value_));
  // @@protoc_insertion_point(copy_constructor:unittest_drop_unknown_fields.FooWithExtraFields)
}

void FooWithExtraFields::SharedCtor() {
  ::memset(&int32_value_, 0, reinterpret_cast<char*>(&extra_int32_value_) -
    reinterpret_cast<char*>(&int32_value_) + sizeof(extra_int32_value_));
  _cached_size_ = 0;
}

FooWithExtraFields::~FooWithExtraFields() {
  // @@protoc_insertion_point(destructor:unittest_drop_unknown_fields.FooWithExtraFields)
  SharedDtor();
}

void FooWithExtraFields::SharedDtor() {
}

void FooWithExtraFields::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* FooWithExtraFields::descriptor() {
  protobuf_google_2fprotobuf_2funittest_5fdrop_5funknown_5ffields_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fprotobuf_2funittest_5fdrop_5funknown_5ffields_2eproto::file_level_metadata[1].descriptor;
}

const FooWithExtraFields& FooWithExtraFields::default_instance() {
  protobuf_google_2fprotobuf_2funittest_5fdrop_5funknown_5ffields_2eproto::InitDefaults();
  return *internal_default_instance();
}

FooWithExtraFields* FooWithExtraFields::New(::google::protobuf::Arena* arena) const {
  FooWithExtraFields* n = new FooWithExtraFields;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void FooWithExtraFields::Clear() {
// @@protoc_insertion_point(message_clear_start:unittest_drop_unknown_fields.FooWithExtraFields)
  ::memset(&int32_value_, 0, reinterpret_cast<char*>(&extra_int32_value_) -
    reinterpret_cast<char*>(&int32_value_) + sizeof(extra_int32_value_));
}

bool FooWithExtraFields::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:unittest_drop_unknown_fields.FooWithExtraFields)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 int32_value = 1;
      case 1: {
        if (tag == 8u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &int32_value_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .unittest_drop_unknown_fields.FooWithExtraFields.NestedEnum enum_value = 2;
      case 2: {
        if (tag == 16u) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_enum_value(static_cast< ::unittest_drop_unknown_fields::FooWithExtraFields_NestedEnum >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 extra_int32_value = 3;
      case 3: {
        if (tag == 24u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &extra_int32_value_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:unittest_drop_unknown_fields.FooWithExtraFields)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:unittest_drop_unknown_fields.FooWithExtraFields)
  return false;
#undef DO_
}

void FooWithExtraFields::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:unittest_drop_unknown_fields.FooWithExtraFields)
  // int32 int32_value = 1;
  if (this->int32_value() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->int32_value(), output);
  }

  // .unittest_drop_unknown_fields.FooWithExtraFields.NestedEnum enum_value = 2;
  if (this->enum_value() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->enum_value(), output);
  }

  // int32 extra_int32_value = 3;
  if (this->extra_int32_value() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->extra_int32_value(), output);
  }

  // @@protoc_insertion_point(serialize_end:unittest_drop_unknown_fields.FooWithExtraFields)
}

::google::protobuf::uint8* FooWithExtraFields::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:unittest_drop_unknown_fields.FooWithExtraFields)
  // int32 int32_value = 1;
  if (this->int32_value() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->int32_value(), target);
  }

  // .unittest_drop_unknown_fields.FooWithExtraFields.NestedEnum enum_value = 2;
  if (this->enum_value() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->enum_value(), target);
  }

  // int32 extra_int32_value = 3;
  if (this->extra_int32_value() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->extra_int32_value(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:unittest_drop_unknown_fields.FooWithExtraFields)
  return target;
}

size_t FooWithExtraFields::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:unittest_drop_unknown_fields.FooWithExtraFields)
  size_t total_size = 0;

  // int32 int32_value = 1;
  if (this->int32_value() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->int32_value());
  }

  // .unittest_drop_unknown_fields.FooWithExtraFields.NestedEnum enum_value = 2;
  if (this->enum_value() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->enum_value());
  }

  // int32 extra_int32_value = 3;
  if (this->extra_int32_value() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->extra_int32_value());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void FooWithExtraFields::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:unittest_drop_unknown_fields.FooWithExtraFields)
  GOOGLE_DCHECK_NE(&from, this);
  const FooWithExtraFields* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const FooWithExtraFields>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:unittest_drop_unknown_fields.FooWithExtraFields)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:unittest_drop_unknown_fields.FooWithExtraFields)
    MergeFrom(*source);
  }
}

void FooWithExtraFields::MergeFrom(const FooWithExtraFields& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:unittest_drop_unknown_fields.FooWithExtraFields)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.int32_value() != 0) {
    set_int32_value(from.int32_value());
  }
  if (from.enum_value() != 0) {
    set_enum_value(from.enum_value());
  }
  if (from.extra_int32_value() != 0) {
    set_extra_int32_value(from.extra_int32_value());
  }
}

void FooWithExtraFields::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:unittest_drop_unknown_fields.FooWithExtraFields)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void FooWithExtraFields::CopyFrom(const FooWithExtraFields& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:unittest_drop_unknown_fields.FooWithExtraFields)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FooWithExtraFields::IsInitialized() const {
  return true;
}

void FooWithExtraFields::Swap(FooWithExtraFields* other) {
  if (other == this) return;
  InternalSwap(other);
}
void FooWithExtraFields::InternalSwap(FooWithExtraFields* other) {
  std::swap(int32_value_, other->int32_value_);
  std::swap(enum_value_, other->enum_value_);
  std::swap(extra_int32_value_, other->extra_int32_value_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata FooWithExtraFields::GetMetadata() const {
  protobuf_google_2fprotobuf_2funittest_5fdrop_5funknown_5ffields_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fprotobuf_2funittest_5fdrop_5funknown_5ffields_2eproto::file_level_metadata[1];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// FooWithExtraFields

// int32 int32_value = 1;
void FooWithExtraFields::clear_int32_value() {
  int32_value_ = 0;
}
::google::protobuf::int32 FooWithExtraFields::int32_value() const {
  // @@protoc_insertion_point(field_get:unittest_drop_unknown_fields.FooWithExtraFields.int32_value)
  return int32_value_;
}
void FooWithExtraFields::set_int32_value(::google::protobuf::int32 value) {
  
  int32_value_ = value;
  // @@protoc_insertion_point(field_set:unittest_drop_unknown_fields.FooWithExtraFields.int32_value)
}

// .unittest_drop_unknown_fields.FooWithExtraFields.NestedEnum enum_value = 2;
void FooWithExtraFields::clear_enum_value() {
  enum_value_ = 0;
}
::unittest_drop_unknown_fields::FooWithExtraFields_NestedEnum FooWithExtraFields::enum_value() const {
  // @@protoc_insertion_point(field_get:unittest_drop_unknown_fields.FooWithExtraFields.enum_value)
  return static_cast< ::unittest_drop_unknown_fields::FooWithExtraFields_NestedEnum >(enum_value_);
}
void FooWithExtraFields::set_enum_value(::unittest_drop_unknown_fields::FooWithExtraFields_NestedEnum value) {
  
  enum_value_ = value;
  // @@protoc_insertion_point(field_set:unittest_drop_unknown_fields.FooWithExtraFields.enum_value)
}

// int32 extra_int32_value = 3;
void FooWithExtraFields::clear_extra_int32_value() {
  extra_int32_value_ = 0;
}
::google::protobuf::int32 FooWithExtraFields::extra_int32_value() const {
  // @@protoc_insertion_point(field_get:unittest_drop_unknown_fields.FooWithExtraFields.extra_int32_value)
  return extra_int32_value_;
}
void FooWithExtraFields::set_extra_int32_value(::google::protobuf::int32 value) {
  
  extra_int32_value_ = value;
  // @@protoc_insertion_point(field_set:unittest_drop_unknown_fields.FooWithExtraFields.extra_int32_value)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace unittest_drop_unknown_fields

// @@protoc_insertion_point(global_scope)
