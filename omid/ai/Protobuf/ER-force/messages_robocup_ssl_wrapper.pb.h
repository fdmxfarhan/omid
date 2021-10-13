// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: messages_robocup_ssl_wrapper.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_messages_5frobocup_5fssl_5fwrapper_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_messages_5frobocup_5fssl_5fwrapper_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3017000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3017003 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "messages_robocup_ssl_detection.pb.h"
#include "messages_robocup_ssl_geometry.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_messages_5frobocup_5fssl_5fwrapper_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_messages_5frobocup_5fssl_5fwrapper_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_messages_5frobocup_5fssl_5fwrapper_2eproto;
class SSL_WrapperPacket;
struct SSL_WrapperPacketDefaultTypeInternal;
extern SSL_WrapperPacketDefaultTypeInternal _SSL_WrapperPacket_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::SSL_WrapperPacket* Arena::CreateMaybeMessage<::SSL_WrapperPacket>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class SSL_WrapperPacket final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:SSL_WrapperPacket) */ {
 public:
  inline SSL_WrapperPacket() : SSL_WrapperPacket(nullptr) {}
  ~SSL_WrapperPacket() override;
  explicit constexpr SSL_WrapperPacket(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  SSL_WrapperPacket(const SSL_WrapperPacket& from);
  SSL_WrapperPacket(SSL_WrapperPacket&& from) noexcept
    : SSL_WrapperPacket() {
    *this = ::std::move(from);
  }

  inline SSL_WrapperPacket& operator=(const SSL_WrapperPacket& from) {
    CopyFrom(from);
    return *this;
  }
  inline SSL_WrapperPacket& operator=(SSL_WrapperPacket&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const SSL_WrapperPacket& default_instance() {
    return *internal_default_instance();
  }
  static inline const SSL_WrapperPacket* internal_default_instance() {
    return reinterpret_cast<const SSL_WrapperPacket*>(
               &_SSL_WrapperPacket_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SSL_WrapperPacket& a, SSL_WrapperPacket& b) {
    a.Swap(&b);
  }
  inline void Swap(SSL_WrapperPacket* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SSL_WrapperPacket* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SSL_WrapperPacket* New() const final {
    return new SSL_WrapperPacket();
  }

  SSL_WrapperPacket* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SSL_WrapperPacket>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const SSL_WrapperPacket& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const SSL_WrapperPacket& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to, const ::PROTOBUF_NAMESPACE_ID::Message&from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SSL_WrapperPacket* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "SSL_WrapperPacket";
  }
  protected:
  explicit SSL_WrapperPacket(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDetectionFieldNumber = 1,
    kGeometryFieldNumber = 2,
  };
  // optional .SSL_DetectionFrame detection = 1;
  bool has_detection() const;
  private:
  bool _internal_has_detection() const;
  public:
  void clear_detection();
  const ::SSL_DetectionFrame& detection() const;
  PROTOBUF_MUST_USE_RESULT ::SSL_DetectionFrame* release_detection();
  ::SSL_DetectionFrame* mutable_detection();
  void set_allocated_detection(::SSL_DetectionFrame* detection);
  private:
  const ::SSL_DetectionFrame& _internal_detection() const;
  ::SSL_DetectionFrame* _internal_mutable_detection();
  public:
  void unsafe_arena_set_allocated_detection(
      ::SSL_DetectionFrame* detection);
  ::SSL_DetectionFrame* unsafe_arena_release_detection();

  // optional .SSL_GeometryData geometry = 2;
  bool has_geometry() const;
  private:
  bool _internal_has_geometry() const;
  public:
  void clear_geometry();
  const ::SSL_GeometryData& geometry() const;
  PROTOBUF_MUST_USE_RESULT ::SSL_GeometryData* release_geometry();
  ::SSL_GeometryData* mutable_geometry();
  void set_allocated_geometry(::SSL_GeometryData* geometry);
  private:
  const ::SSL_GeometryData& _internal_geometry() const;
  ::SSL_GeometryData* _internal_mutable_geometry();
  public:
  void unsafe_arena_set_allocated_geometry(
      ::SSL_GeometryData* geometry);
  ::SSL_GeometryData* unsafe_arena_release_geometry();

  // @@protoc_insertion_point(class_scope:SSL_WrapperPacket)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::SSL_DetectionFrame* detection_;
  ::SSL_GeometryData* geometry_;
  friend struct ::TableStruct_messages_5frobocup_5fssl_5fwrapper_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SSL_WrapperPacket

// optional .SSL_DetectionFrame detection = 1;
inline bool SSL_WrapperPacket::_internal_has_detection() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || detection_ != nullptr);
  return value;
}
inline bool SSL_WrapperPacket::has_detection() const {
  return _internal_has_detection();
}
inline const ::SSL_DetectionFrame& SSL_WrapperPacket::_internal_detection() const {
  const ::SSL_DetectionFrame* p = detection_;
  return p != nullptr ? *p : reinterpret_cast<const ::SSL_DetectionFrame&>(
      ::_SSL_DetectionFrame_default_instance_);
}
inline const ::SSL_DetectionFrame& SSL_WrapperPacket::detection() const {
  // @@protoc_insertion_point(field_get:SSL_WrapperPacket.detection)
  return _internal_detection();
}
inline void SSL_WrapperPacket::unsafe_arena_set_allocated_detection(
    ::SSL_DetectionFrame* detection) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(detection_);
  }
  detection_ = detection;
  if (detection) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:SSL_WrapperPacket.detection)
}
inline ::SSL_DetectionFrame* SSL_WrapperPacket::release_detection() {
  _has_bits_[0] &= ~0x00000001u;
  ::SSL_DetectionFrame* temp = detection_;
  detection_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::SSL_DetectionFrame* SSL_WrapperPacket::unsafe_arena_release_detection() {
  // @@protoc_insertion_point(field_release:SSL_WrapperPacket.detection)
  _has_bits_[0] &= ~0x00000001u;
  ::SSL_DetectionFrame* temp = detection_;
  detection_ = nullptr;
  return temp;
}
inline ::SSL_DetectionFrame* SSL_WrapperPacket::_internal_mutable_detection() {
  _has_bits_[0] |= 0x00000001u;
  if (detection_ == nullptr) {
    auto* p = CreateMaybeMessage<::SSL_DetectionFrame>(GetArenaForAllocation());
    detection_ = p;
  }
  return detection_;
}
inline ::SSL_DetectionFrame* SSL_WrapperPacket::mutable_detection() {
  ::SSL_DetectionFrame* _msg = _internal_mutable_detection();
  // @@protoc_insertion_point(field_mutable:SSL_WrapperPacket.detection)
  return _msg;
}
inline void SSL_WrapperPacket::set_allocated_detection(::SSL_DetectionFrame* detection) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(detection_);
  }
  if (detection) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper<
            ::PROTOBUF_NAMESPACE_ID::MessageLite>::GetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(detection));
    if (message_arena != submessage_arena) {
      detection = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, detection, submessage_arena);
    }
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  detection_ = detection;
  // @@protoc_insertion_point(field_set_allocated:SSL_WrapperPacket.detection)
}

// optional .SSL_GeometryData geometry = 2;
inline bool SSL_WrapperPacket::_internal_has_geometry() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || geometry_ != nullptr);
  return value;
}
inline bool SSL_WrapperPacket::has_geometry() const {
  return _internal_has_geometry();
}
inline const ::SSL_GeometryData& SSL_WrapperPacket::_internal_geometry() const {
  const ::SSL_GeometryData* p = geometry_;
  return p != nullptr ? *p : reinterpret_cast<const ::SSL_GeometryData&>(
      ::_SSL_GeometryData_default_instance_);
}
inline const ::SSL_GeometryData& SSL_WrapperPacket::geometry() const {
  // @@protoc_insertion_point(field_get:SSL_WrapperPacket.geometry)
  return _internal_geometry();
}
inline void SSL_WrapperPacket::unsafe_arena_set_allocated_geometry(
    ::SSL_GeometryData* geometry) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(geometry_);
  }
  geometry_ = geometry;
  if (geometry) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:SSL_WrapperPacket.geometry)
}
inline ::SSL_GeometryData* SSL_WrapperPacket::release_geometry() {
  _has_bits_[0] &= ~0x00000002u;
  ::SSL_GeometryData* temp = geometry_;
  geometry_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::SSL_GeometryData* SSL_WrapperPacket::unsafe_arena_release_geometry() {
  // @@protoc_insertion_point(field_release:SSL_WrapperPacket.geometry)
  _has_bits_[0] &= ~0x00000002u;
  ::SSL_GeometryData* temp = geometry_;
  geometry_ = nullptr;
  return temp;
}
inline ::SSL_GeometryData* SSL_WrapperPacket::_internal_mutable_geometry() {
  _has_bits_[0] |= 0x00000002u;
  if (geometry_ == nullptr) {
    auto* p = CreateMaybeMessage<::SSL_GeometryData>(GetArenaForAllocation());
    geometry_ = p;
  }
  return geometry_;
}
inline ::SSL_GeometryData* SSL_WrapperPacket::mutable_geometry() {
  ::SSL_GeometryData* _msg = _internal_mutable_geometry();
  // @@protoc_insertion_point(field_mutable:SSL_WrapperPacket.geometry)
  return _msg;
}
inline void SSL_WrapperPacket::set_allocated_geometry(::SSL_GeometryData* geometry) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(geometry_);
  }
  if (geometry) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper<
            ::PROTOBUF_NAMESPACE_ID::MessageLite>::GetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(geometry));
    if (message_arena != submessage_arena) {
      geometry = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, geometry, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  geometry_ = geometry;
  // @@protoc_insertion_point(field_set_allocated:SSL_WrapperPacket.geometry)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_messages_5frobocup_5fssl_5fwrapper_2eproto
