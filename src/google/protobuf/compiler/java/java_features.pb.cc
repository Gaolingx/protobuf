// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/compiler/java/java_features.proto
// Protobuf C++ Version: 5.27.0-dev

#include "google/protobuf/compiler/java/java_features.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/generated_message_tctable_impl.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
namespace pb {

inline constexpr JavaFeatures::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : _cached_size_{0},
        legacy_closed_enum_{false},
        utf8_validation_{static_cast< ::pb::JavaFeatures_Utf8Validation >(0)} {}

template <typename>
PROTOBUF_CONSTEXPR JavaFeatures::JavaFeatures(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct JavaFeaturesDefaultTypeInternal {
  PROTOBUF_CONSTEXPR JavaFeaturesDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~JavaFeaturesDefaultTypeInternal() {}
  union {
    JavaFeatures _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOC_EXPORT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 JavaFeaturesDefaultTypeInternal _JavaFeatures_default_instance_;
}  // namespace pb
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_google_2fprotobuf_2fcompiler_2fjava_2fjava_5ffeatures_2eproto[1];
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_google_2fprotobuf_2fcompiler_2fjava_2fjava_5ffeatures_2eproto = nullptr;
const ::uint32_t
    TableStruct_google_2fprotobuf_2fcompiler_2fjava_2fjava_5ffeatures_2eproto::offsets[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
        protodesc_cold) = {
        PROTOBUF_FIELD_OFFSET(::pb::JavaFeatures, _impl_._has_bits_),
        PROTOBUF_FIELD_OFFSET(::pb::JavaFeatures, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::pb::JavaFeatures, _impl_.legacy_closed_enum_),
        PROTOBUF_FIELD_OFFSET(::pb::JavaFeatures, _impl_.utf8_validation_),
        0,
        1,
};

static const ::_pbi::MigrationSchema
    schemas[] ABSL_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
        {0, 10, -1, sizeof(::pb::JavaFeatures)},
};
static const ::_pb::Message* const file_default_instances[] = {
    &::pb::_JavaFeatures_default_instance_._instance,
};
const char descriptor_table_protodef_google_2fprotobuf_2fcompiler_2fjava_2fjava_5ffeatures_2eproto[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
    protodesc_cold) = {
    "\n1google/protobuf/compiler/java/java_fea"
    "tures.proto\022\002pb\032 google/protobuf/descrip"
    "tor.proto\"\352\001\n\014JavaFeatures\022>\n\022legacy_clo"
    "sed_enum\030\001 \001(\010B\"\210\001\001\230\001\004\230\001\001\242\001\t\022\004true\030\346\007\242\001\n"
    "\022\005false\030\347\007\022R\n\017utf8_validation\030\002 \001(\0162\037.pb"
    ".JavaFeatures.Utf8ValidationB\030\210\001\001\230\001\004\230\001\001\242"
    "\001\014\022\007DEFAULT\030\346\007\"F\n\016Utf8Validation\022\033\n\027UTF8"
    "_VALIDATION_UNKNOWN\020\000\022\013\n\007DEFAULT\020\001\022\n\n\006VE"
    "RIFY\020\002:<\n\004java\022\033.google.protobuf.Feature"
    "Set\030\351\007 \001(\0132\020.pb.JavaFeaturesB(\n\023com.goog"
    "le.protobufB\021JavaFeaturesProto"
};
static const ::_pbi::DescriptorTable* const descriptor_table_google_2fprotobuf_2fcompiler_2fjava_2fjava_5ffeatures_2eproto_deps[1] =
    {
        &::descriptor_table_google_2fprotobuf_2fdescriptor_2eproto,
};
static ::absl::once_flag descriptor_table_google_2fprotobuf_2fcompiler_2fjava_2fjava_5ffeatures_2eproto_once;
PROTOBUF_CONSTINIT const ::_pbi::DescriptorTable descriptor_table_google_2fprotobuf_2fcompiler_2fjava_2fjava_5ffeatures_2eproto = {
    false,
    false,
    430,
    descriptor_table_protodef_google_2fprotobuf_2fcompiler_2fjava_2fjava_5ffeatures_2eproto,
    "google/protobuf/compiler/java/java_features.proto",
    &descriptor_table_google_2fprotobuf_2fcompiler_2fjava_2fjava_5ffeatures_2eproto_once,
    descriptor_table_google_2fprotobuf_2fcompiler_2fjava_2fjava_5ffeatures_2eproto_deps,
    1,
    1,
    schemas,
    file_default_instances,
    TableStruct_google_2fprotobuf_2fcompiler_2fjava_2fjava_5ffeatures_2eproto::offsets,
    file_level_enum_descriptors_google_2fprotobuf_2fcompiler_2fjava_2fjava_5ffeatures_2eproto,
    file_level_service_descriptors_google_2fprotobuf_2fcompiler_2fjava_2fjava_5ffeatures_2eproto,
};
namespace pb {
const ::google::protobuf::EnumDescriptor* JavaFeatures_Utf8Validation_descriptor() {
  ::google::protobuf::internal::AssignDescriptors(&descriptor_table_google_2fprotobuf_2fcompiler_2fjava_2fjava_5ffeatures_2eproto);
  return file_level_enum_descriptors_google_2fprotobuf_2fcompiler_2fjava_2fjava_5ffeatures_2eproto[0];
}
PROTOBUF_CONSTINIT const uint32_t JavaFeatures_Utf8Validation_internal_data_[] = {
    196608u, 0u, };
bool JavaFeatures_Utf8Validation_IsValid(int value) {
  return 0 <= value && value <= 2;
}
#if (__cplusplus < 201703) && \
  (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))

constexpr JavaFeatures_Utf8Validation JavaFeatures::UTF8_VALIDATION_UNKNOWN;
constexpr JavaFeatures_Utf8Validation JavaFeatures::DEFAULT;
constexpr JavaFeatures_Utf8Validation JavaFeatures::VERIFY;
constexpr JavaFeatures_Utf8Validation JavaFeatures::Utf8Validation_MIN;
constexpr JavaFeatures_Utf8Validation JavaFeatures::Utf8Validation_MAX;
constexpr int JavaFeatures::Utf8Validation_ARRAYSIZE;

#endif  // (__cplusplus < 201703) &&
        // (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
// ===================================================================

class JavaFeatures::_Internal {
 public:
  using HasBits = decltype(std::declval<JavaFeatures>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(JavaFeatures, _impl_._has_bits_);
};

JavaFeatures::JavaFeatures(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:pb.JavaFeatures)
}
JavaFeatures::JavaFeatures(
    ::google::protobuf::Arena* arena, const JavaFeatures& from)
    : JavaFeatures(arena) {
  MergeFrom(from);
}
inline PROTOBUF_NDEBUG_INLINE JavaFeatures::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : _cached_size_{0} {}

inline void JavaFeatures::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  ::memset(reinterpret_cast<char *>(&_impl_) +
               offsetof(Impl_, legacy_closed_enum_),
           0,
           offsetof(Impl_, utf8_validation_) -
               offsetof(Impl_, legacy_closed_enum_) +
               sizeof(Impl_::utf8_validation_));
}
JavaFeatures::~JavaFeatures() {
  // @@protoc_insertion_point(destructor:pb.JavaFeatures)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void JavaFeatures::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.~Impl_();
}

const ::google::protobuf::MessageLite::ClassData*
JavaFeatures::GetClassData() const {
  PROTOBUF_CONSTINIT static const ::google::protobuf::MessageLite::
      ClassDataFull _data_ = {
          {
              nullptr,  // OnDemandRegisterArenaDtor
              PROTOBUF_FIELD_OFFSET(JavaFeatures, _impl_._cached_size_),
              false,
          },
          &JavaFeatures::MergeImpl,
          &JavaFeatures::kDescriptorMethods,
          &descriptor_table_google_2fprotobuf_2fcompiler_2fjava_2fjava_5ffeatures_2eproto,
          nullptr,  // tracker
      };
  return _data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<1, 2, 1, 0, 2> JavaFeatures::_table_ = {
  {
    PROTOBUF_FIELD_OFFSET(JavaFeatures, _impl_._has_bits_),
    0, // no _extensions_
    2, 8,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967292,  // skipmap
    offsetof(decltype(_table_), field_entries),
    2,  // num_field_entries
    1,  // num_aux_entries
    offsetof(decltype(_table_), aux_entries),
    &_JavaFeatures_default_instance_._instance,
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::pb::JavaFeatures>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    // optional .pb.JavaFeatures.Utf8Validation utf8_validation = 2 [retention = RETENTION_RUNTIME, targets = TARGET_TYPE_FIELD, targets = TARGET_TYPE_FILE, edition_defaults = {
    {::_pbi::TcParser::FastEr0S1,
     {16, 1, 2, PROTOBUF_FIELD_OFFSET(JavaFeatures, _impl_.utf8_validation_)}},
    // optional bool legacy_closed_enum = 1 [retention = RETENTION_RUNTIME, targets = TARGET_TYPE_FIELD, targets = TARGET_TYPE_FILE, edition_defaults = {
    {::_pbi::TcParser::SingularVarintNoZag1<bool, offsetof(JavaFeatures, _impl_.legacy_closed_enum_), 0>(),
     {8, 0, 0, PROTOBUF_FIELD_OFFSET(JavaFeatures, _impl_.legacy_closed_enum_)}},
  }}, {{
    65535, 65535
  }}, {{
    // optional bool legacy_closed_enum = 1 [retention = RETENTION_RUNTIME, targets = TARGET_TYPE_FIELD, targets = TARGET_TYPE_FILE, edition_defaults = {
    {PROTOBUF_FIELD_OFFSET(JavaFeatures, _impl_.legacy_closed_enum_), _Internal::kHasBitsOffset + 0, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kBool)},
    // optional .pb.JavaFeatures.Utf8Validation utf8_validation = 2 [retention = RETENTION_RUNTIME, targets = TARGET_TYPE_FIELD, targets = TARGET_TYPE_FILE, edition_defaults = {
    {PROTOBUF_FIELD_OFFSET(JavaFeatures, _impl_.utf8_validation_), _Internal::kHasBitsOffset + 1, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kEnumRange)},
  }}, {{
    {0, 3},
  }}, {{
  }},
};

PROTOBUF_NOINLINE void JavaFeatures::Clear() {
// @@protoc_insertion_point(message_clear_start:pb.JavaFeatures)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    ::memset(&_impl_.legacy_closed_enum_, 0, static_cast<::size_t>(
        reinterpret_cast<char*>(&_impl_.utf8_validation_) -
        reinterpret_cast<char*>(&_impl_.legacy_closed_enum_)) + sizeof(_impl_.utf8_validation_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* JavaFeatures::_InternalParse(const char* ptr,
                                        ::_pbi::ParseContext* ctx) {
  return ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
}

::uint8_t* JavaFeatures::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:pb.JavaFeatures)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional bool legacy_closed_enum = 1 [retention = RETENTION_RUNTIME, targets = TARGET_TYPE_FIELD, targets = TARGET_TYPE_FILE, edition_defaults = {
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(
        1, this->_internal_legacy_closed_enum(), target);
  }

  // optional .pb.JavaFeatures.Utf8Validation utf8_validation = 2 [retention = RETENTION_RUNTIME, targets = TARGET_TYPE_FIELD, targets = TARGET_TYPE_FILE, edition_defaults = {
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
        2, this->_internal_utf8_validation(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:pb.JavaFeatures)
  return target;
}

::size_t JavaFeatures::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:pb.JavaFeatures)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::_pbi::Prefetch5LinesFrom7Lines(reinterpret_cast<const void*>(this));
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional bool legacy_closed_enum = 1 [retention = RETENTION_RUNTIME, targets = TARGET_TYPE_FIELD, targets = TARGET_TYPE_FILE, edition_defaults = {
    if (cached_has_bits & 0x00000001u) {
      total_size += 2;
    }

    // optional .pb.JavaFeatures.Utf8Validation utf8_validation = 2 [retention = RETENTION_RUNTIME, targets = TARGET_TYPE_FIELD, targets = TARGET_TYPE_FILE, edition_defaults = {
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
                    ::_pbi::WireFormatLite::EnumSize(this->_internal_utf8_validation());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}


void JavaFeatures::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<JavaFeatures*>(&to_msg);
  auto& from = static_cast<const JavaFeatures&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:pb.JavaFeatures)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_impl_.legacy_closed_enum_ = from._impl_.legacy_closed_enum_;
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.utf8_validation_ = from._impl_.utf8_validation_;
    }
  }
  _this->_impl_._has_bits_[0] |= cached_has_bits;
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void JavaFeatures::CopyFrom(const JavaFeatures& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:pb.JavaFeatures)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool JavaFeatures::IsInitialized() const {
  return true;
}

void JavaFeatures::InternalSwap(JavaFeatures* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::google::protobuf::internal::memswap<
      PROTOBUF_FIELD_OFFSET(JavaFeatures, _impl_.utf8_validation_)
      + sizeof(JavaFeatures::_impl_.utf8_validation_)
      - PROTOBUF_FIELD_OFFSET(JavaFeatures, _impl_.legacy_closed_enum_)>(
          reinterpret_cast<char*>(&_impl_.legacy_closed_enum_),
          reinterpret_cast<char*>(&other->_impl_.legacy_closed_enum_));
}

::google::protobuf::Metadata JavaFeatures::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
PROTOBUF_CONSTINIT PROTOC_EXPORT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 ::_pbi::
        ExtensionIdentifier<::google::protobuf::FeatureSet, ::_pbi::MessageTypeTraits< ::pb::JavaFeatures >,
                            11, false>
            java(kJavaFieldNumber, &::pb::_JavaFeatures_default_instance_);
// @@protoc_insertion_point(namespace_scope)
}  // namespace pb
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::std::false_type _static_init_ PROTOBUF_UNUSED =
    (::_pbi::AddDescriptors(&descriptor_table_google_2fprotobuf_2fcompiler_2fjava_2fjava_5ffeatures_2eproto),
    ::_pbi::ExtensionSet::RegisterMessageExtension(
        &::google::protobuf::FeatureSet::default_instance(), 1001, 11,
        false, false, &::pb::JavaFeatures::default_instance(),
        nullptr, ::_pbi::LazyAnnotation::kUndefined),
     ::std::false_type{});
#include "google/protobuf/port_undef.inc"
