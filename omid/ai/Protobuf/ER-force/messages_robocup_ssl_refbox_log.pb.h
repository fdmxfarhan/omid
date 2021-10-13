// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: messages_robocup_ssl_refbox_log.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_messages_5frobocup_5fssl_5frefbox_5flog_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_messages_5frobocup_5fssl_5frefbox_5flog_2eproto

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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_messages_5frobocup_5fssl_5frefbox_5flog_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_messages_5frobocup_5fssl_5frefbox_5flog_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_messages_5frobocup_5fssl_5frefbox_5flog_2eproto;
class Log_Frame;
struct Log_FrameDefaultTypeInternal;
extern Log_FrameDefaultTypeInternal _Log_Frame_default_instance_;
class Refbox_Log;
struct Refbox_LogDefaultTypeInternal;
extern Refbox_LogDefaultTypeInternal _Refbox_Log_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::Log_Frame* Arena::CreateMaybeMessage<::Log_Frame>(Arena*);
template<> ::Refbox_Log* Arena::CreateMaybeMessage<::Refbox_Log>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class Log_Frame final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Log_Frame) */ {
 public:
  inline Log_Frame() : Log_Frame(nullptr) {}
  ~Log_Frame() override;
  explicit constexpr Log_Frame(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Log_Frame(const Log_Frame& from);
  Log_Frame(Log_Frame&& from) noexcept
    : Log_Frame() {
    *this = ::std::move(from);
  }

  inline Log_Frame& operator=(const Log_Frame& from) {
    CopyFrom(from);
    return *this;
  }
  inline Log_Frame& operator=(Log_Frame&& from) noexcept {
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
  static const Log_Frame& default_instance() {
    return *internal_default_instance();
  }
  static inline const Log_Frame* internal_default_instance() {
    return reinterpret_cast<const Log_Frame*>(
               &_Log_Frame_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Log_Frame& a, Log_Frame& b) {
    a.Swap(&b);
  }
  inline void Swap(Log_Frame* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Log_Frame* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Log_Frame* New() const final {
    return new Log_Frame();
  }

  Log_Frame* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Log_Frame>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Log_Frame& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const Log_Frame& from);
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
  void InternalSwap(Log_Frame* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Log_Frame";
  }
  protected:
  explicit Log_Frame(::PROTOBUF_NAMESPACE_ID::Arena* arena,
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
    kRefboxCmdFieldNumber = 2,
    kFrameFieldNumber = 1,
  };
  // required string refbox_cmd = 2;
  bool has_refbox_cmd() const;
  private:
  bool _internal_has_refbox_cmd() const;
  public:
  void clear_refbox_cmd();
  const std::string& refbox_cmd() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_refbox_cmd(ArgT0&& arg0, ArgT... args);
  std::string* mutable_refbox_cmd();
  PROTOBUF_MUST_USE_RESULT std::string* release_refbox_cmd();
  void set_allocated_refbox_cmd(std::string* refbox_cmd);
  private:
  const std::string& _internal_refbox_cmd() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_refbox_cmd(const std::string& value);
  std::string* _internal_mutable_refbox_cmd();
  public:

  // required .SSL_DetectionFrame frame = 1;
  bool has_frame() const;
  private:
  bool _internal_has_frame() const;
  public:
  void clear_frame();
  const ::SSL_DetectionFrame& frame() const;
  PROTOBUF_MUST_USE_RESULT ::SSL_DetectionFrame* release_frame();
  ::SSL_DetectionFrame* mutable_frame();
  void set_allocated_frame(::SSL_DetectionFrame* frame);
  private:
  const ::SSL_DetectionFrame& _internal_frame() const;
  ::SSL_DetectionFrame* _internal_mutable_frame();
  public:
  void unsafe_arena_set_allocated_frame(
      ::SSL_DetectionFrame* frame);
  ::SSL_DetectionFrame* unsafe_arena_release_frame();

  // @@protoc_insertion_point(class_scope:Log_Frame)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr refbox_cmd_;
  ::SSL_DetectionFrame* frame_;
  friend struct ::TableStruct_messages_5frobocup_5fssl_5frefbox_5flog_2eproto;
};
// -------------------------------------------------------------------

class Refbox_Log final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Refbox_Log) */ {
 public:
  inline Refbox_Log() : Refbox_Log(nullptr) {}
  ~Refbox_Log() override;
  explicit constexpr Refbox_Log(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Refbox_Log(const Refbox_Log& from);
  Refbox_Log(Refbox_Log&& from) noexcept
    : Refbox_Log() {
    *this = ::std::move(from);
  }

  inline Refbox_Log& operator=(const Refbox_Log& from) {
    CopyFrom(from);
    return *this;
  }
  inline Refbox_Log& operator=(Refbox_Log&& from) noexcept {
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
  static const Refbox_Log& default_instance() {
    return *internal_default_instance();
  }
  static inline const Refbox_Log* internal_default_instance() {
    return reinterpret_cast<const Refbox_Log*>(
               &_Refbox_Log_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Refbox_Log& a, Refbox_Log& b) {
    a.Swap(&b);
  }
  inline void Swap(Refbox_Log* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Refbox_Log* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Refbox_Log* New() const final {
    return new Refbox_Log();
  }

  Refbox_Log* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Refbox_Log>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Refbox_Log& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const Refbox_Log& from);
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
  void InternalSwap(Refbox_Log* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Refbox_Log";
  }
  protected:
  explicit Refbox_Log(::PROTOBUF_NAMESPACE_ID::Arena* arena,
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
    kLogFieldNumber = 1,
  };
  // repeated .Log_Frame log = 1;
  int log_size() const;
  private:
  int _internal_log_size() const;
  public:
  void clear_log();
  ::Log_Frame* mutable_log(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Log_Frame >*
      mutable_log();
  private:
  const ::Log_Frame& _internal_log(int index) const;
  ::Log_Frame* _internal_add_log();
  public:
  const ::Log_Frame& log(int index) const;
  ::Log_Frame* add_log();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Log_Frame >&
      log() const;

  // @@protoc_insertion_point(class_scope:Refbox_Log)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Log_Frame > log_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_messages_5frobocup_5fssl_5frefbox_5flog_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Log_Frame

// required .SSL_DetectionFrame frame = 1;
inline bool Log_Frame::_internal_has_frame() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || frame_ != nullptr);
  return value;
}
inline bool Log_Frame::has_frame() const {
  return _internal_has_frame();
}
inline const ::SSL_DetectionFrame& Log_Frame::_internal_frame() const {
  const ::SSL_DetectionFrame* p = frame_;
  return p != nullptr ? *p : reinterpret_cast<const ::SSL_DetectionFrame&>(
      ::_SSL_DetectionFrame_default_instance_);
}
inline const ::SSL_DetectionFrame& Log_Frame::frame() const {
  // @@protoc_insertion_point(field_get:Log_Frame.frame)
  return _internal_frame();
}
inline void Log_Frame::unsafe_arena_set_allocated_frame(
    ::SSL_DetectionFrame* frame) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(frame_);
  }
  frame_ = frame;
  if (frame) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:Log_Frame.frame)
}
inline ::SSL_DetectionFrame* Log_Frame::release_frame() {
  _has_bits_[0] &= ~0x00000002u;
  ::SSL_DetectionFrame* temp = frame_;
  frame_ = nullptr;
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
inline ::SSL_DetectionFrame* Log_Frame::unsafe_arena_release_frame() {
  // @@protoc_insertion_point(field_release:Log_Frame.frame)
  _has_bits_[0] &= ~0x00000002u;
  ::SSL_DetectionFrame* temp = frame_;
  frame_ = nullptr;
  return temp;
}
inline ::SSL_DetectionFrame* Log_Frame::_internal_mutable_frame() {
  _has_bits_[0] |= 0x00000002u;
  if (frame_ == nullptr) {
    auto* p = CreateMaybeMessage<::SSL_DetectionFrame>(GetArenaForAllocation());
    frame_ = p;
  }
  return frame_;
}
inline ::SSL_DetectionFrame* Log_Frame::mutable_frame() {
  ::SSL_DetectionFrame* _msg = _internal_mutable_frame();
  // @@protoc_insertion_point(field_mutable:Log_Frame.frame)
  return _msg;
}
inline void Log_Frame::set_allocated_frame(::SSL_DetectionFrame* frame) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(frame_);
  }
  if (frame) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper<
            ::PROTOBUF_NAMESPACE_ID::MessageLite>::GetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(frame));
    if (message_arena != submessage_arena) {
      frame = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, frame, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  frame_ = frame;
  // @@protoc_insertion_point(field_set_allocated:Log_Frame.frame)
}

// required string refbox_cmd = 2;
inline bool Log_Frame::_internal_has_refbox_cmd() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Log_Frame::has_refbox_cmd() const {
  return _internal_has_refbox_cmd();
}
inline void Log_Frame::clear_refbox_cmd() {
  refbox_cmd_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Log_Frame::refbox_cmd() const {
  // @@protoc_insertion_point(field_get:Log_Frame.refbox_cmd)
  return _internal_refbox_cmd();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Log_Frame::set_refbox_cmd(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000001u;
 refbox_cmd_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Log_Frame.refbox_cmd)
}
inline std::string* Log_Frame::mutable_refbox_cmd() {
  std::string* _s = _internal_mutable_refbox_cmd();
  // @@protoc_insertion_point(field_mutable:Log_Frame.refbox_cmd)
  return _s;
}
inline const std::string& Log_Frame::_internal_refbox_cmd() const {
  return refbox_cmd_.Get();
}
inline void Log_Frame::_internal_set_refbox_cmd(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  refbox_cmd_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* Log_Frame::_internal_mutable_refbox_cmd() {
  _has_bits_[0] |= 0x00000001u;
  return refbox_cmd_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* Log_Frame::release_refbox_cmd() {
  // @@protoc_insertion_point(field_release:Log_Frame.refbox_cmd)
  if (!_internal_has_refbox_cmd()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return refbox_cmd_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void Log_Frame::set_allocated_refbox_cmd(std::string* refbox_cmd) {
  if (refbox_cmd != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  refbox_cmd_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), refbox_cmd,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:Log_Frame.refbox_cmd)
}

// -------------------------------------------------------------------

// Refbox_Log

// repeated .Log_Frame log = 1;
inline int Refbox_Log::_internal_log_size() const {
  return log_.size();
}
inline int Refbox_Log::log_size() const {
  return _internal_log_size();
}
inline void Refbox_Log::clear_log() {
  log_.Clear();
}
inline ::Log_Frame* Refbox_Log::mutable_log(int index) {
  // @@protoc_insertion_point(field_mutable:Refbox_Log.log)
  return log_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Log_Frame >*
Refbox_Log::mutable_log() {
  // @@protoc_insertion_point(field_mutable_list:Refbox_Log.log)
  return &log_;
}
inline const ::Log_Frame& Refbox_Log::_internal_log(int index) const {
  return log_.Get(index);
}
inline const ::Log_Frame& Refbox_Log::log(int index) const {
  // @@protoc_insertion_point(field_get:Refbox_Log.log)
  return _internal_log(index);
}
inline ::Log_Frame* Refbox_Log::_internal_add_log() {
  return log_.Add();
}
inline ::Log_Frame* Refbox_Log::add_log() {
  ::Log_Frame* _add = _internal_add_log();
  // @@protoc_insertion_point(field_add:Refbox_Log.log)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Log_Frame >&
Refbox_Log::log() const {
  // @@protoc_insertion_point(field_list:Refbox_Log.log)
  return log_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_messages_5frobocup_5fssl_5frefbox_5flog_2eproto
