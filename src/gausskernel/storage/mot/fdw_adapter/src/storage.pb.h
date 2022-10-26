// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/storage.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_proto_2fstorage_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_proto_2fstorage_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011003 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "proto/transaction.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_proto_2fstorage_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_proto_2fstorage_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_2fstorage_2eproto;
namespace proto {
class StoragePullRequest;
class StoragePullRequestDefaultTypeInternal;
extern StoragePullRequestDefaultTypeInternal _StoragePullRequest_default_instance_;
class StoragePullResponse;
class StoragePullResponseDefaultTypeInternal;
extern StoragePullResponseDefaultTypeInternal _StoragePullResponse_default_instance_;
}  // namespace proto
PROTOBUF_NAMESPACE_OPEN
template<> ::proto::StoragePullRequest* Arena::CreateMaybeMessage<::proto::StoragePullRequest>(Arena*);
template<> ::proto::StoragePullResponse* Arena::CreateMaybeMessage<::proto::StoragePullResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace proto {

// ===================================================================

class StoragePullRequest :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:proto.StoragePullRequest) */ {
 public:
  StoragePullRequest();
  virtual ~StoragePullRequest();

  StoragePullRequest(const StoragePullRequest& from);
  StoragePullRequest(StoragePullRequest&& from) noexcept
    : StoragePullRequest() {
    *this = ::std::move(from);
  }

  inline StoragePullRequest& operator=(const StoragePullRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline StoragePullRequest& operator=(StoragePullRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const StoragePullRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const StoragePullRequest* internal_default_instance() {
    return reinterpret_cast<const StoragePullRequest*>(
               &_StoragePullRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(StoragePullRequest& a, StoragePullRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(StoragePullRequest* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline StoragePullRequest* New() const final {
    return CreateMaybeMessage<StoragePullRequest>(nullptr);
  }

  StoragePullRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<StoragePullRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const StoragePullRequest& from);
  void MergeFrom(const StoragePullRequest& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(StoragePullRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "proto.StoragePullRequest";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_proto_2fstorage_2eproto);
    return ::descriptor_table_proto_2fstorage_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kStorageIpFieldNumber = 1,
    kEpochIdFieldNumber = 2,
  };
  // string storage_ip = 1;
  void clear_storage_ip();
  const std::string& storage_ip() const;
  void set_storage_ip(const std::string& value);
  void set_storage_ip(std::string&& value);
  void set_storage_ip(const char* value);
  void set_storage_ip(const char* value, size_t size);
  std::string* mutable_storage_ip();
  std::string* release_storage_ip();
  void set_allocated_storage_ip(std::string* storage_ip);
  private:
  const std::string& _internal_storage_ip() const;
  void _internal_set_storage_ip(const std::string& value);
  std::string* _internal_mutable_storage_ip();
  public:

  // uint64 epoch_id = 2;
  void clear_epoch_id();
  ::PROTOBUF_NAMESPACE_ID::uint64 epoch_id() const;
  void set_epoch_id(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_epoch_id() const;
  void _internal_set_epoch_id(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // @@protoc_insertion_point(class_scope:proto.StoragePullRequest)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr storage_ip_;
  ::PROTOBUF_NAMESPACE_ID::uint64 epoch_id_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_proto_2fstorage_2eproto;
};
// -------------------------------------------------------------------

class StoragePullResponse :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:proto.StoragePullResponse) */ {
 public:
  StoragePullResponse();
  virtual ~StoragePullResponse();

  StoragePullResponse(const StoragePullResponse& from);
  StoragePullResponse(StoragePullResponse&& from) noexcept
    : StoragePullResponse() {
    *this = ::std::move(from);
  }

  inline StoragePullResponse& operator=(const StoragePullResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline StoragePullResponse& operator=(StoragePullResponse&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const StoragePullResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const StoragePullResponse* internal_default_instance() {
    return reinterpret_cast<const StoragePullResponse*>(
               &_StoragePullResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(StoragePullResponse& a, StoragePullResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(StoragePullResponse* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline StoragePullResponse* New() const final {
    return CreateMaybeMessage<StoragePullResponse>(nullptr);
  }

  StoragePullResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<StoragePullResponse>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const StoragePullResponse& from);
  void MergeFrom(const StoragePullResponse& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(StoragePullResponse* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "proto.StoragePullResponse";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_proto_2fstorage_2eproto);
    return ::descriptor_table_proto_2fstorage_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTxnsFieldNumber = 4,
    kEpochIdFieldNumber = 2,
    kTxnNumFieldNumber = 3,
    kResultFieldNumber = 1,
  };
  // repeated .proto.Transaction txns = 4;
  int txns_size() const;
  private:
  int _internal_txns_size() const;
  public:
  void clear_txns();
  ::proto::Transaction* mutable_txns(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::proto::Transaction >*
      mutable_txns();
  private:
  const ::proto::Transaction& _internal_txns(int index) const;
  ::proto::Transaction* _internal_add_txns();
  public:
  const ::proto::Transaction& txns(int index) const;
  ::proto::Transaction* add_txns();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::proto::Transaction >&
      txns() const;

  // uint64 epoch_id = 2;
  void clear_epoch_id();
  ::PROTOBUF_NAMESPACE_ID::uint64 epoch_id() const;
  void set_epoch_id(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_epoch_id() const;
  void _internal_set_epoch_id(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // uint64 txn_num = 3;
  void clear_txn_num();
  ::PROTOBUF_NAMESPACE_ID::uint64 txn_num() const;
  void set_txn_num(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_txn_num() const;
  void _internal_set_txn_num(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // .proto.Result result = 1;
  void clear_result();
  ::proto::Result result() const;
  void set_result(::proto::Result value);
  private:
  ::proto::Result _internal_result() const;
  void _internal_set_result(::proto::Result value);
  public:

  // @@protoc_insertion_point(class_scope:proto.StoragePullResponse)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::proto::Transaction > txns_;
  ::PROTOBUF_NAMESPACE_ID::uint64 epoch_id_;
  ::PROTOBUF_NAMESPACE_ID::uint64 txn_num_;
  int result_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_proto_2fstorage_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// StoragePullRequest

// string storage_ip = 1;
inline void StoragePullRequest::clear_storage_ip() {
  storage_ip_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& StoragePullRequest::storage_ip() const {
  // @@protoc_insertion_point(field_get:proto.StoragePullRequest.storage_ip)
  return _internal_storage_ip();
}
inline void StoragePullRequest::set_storage_ip(const std::string& value) {
  _internal_set_storage_ip(value);
  // @@protoc_insertion_point(field_set:proto.StoragePullRequest.storage_ip)
}
inline std::string* StoragePullRequest::mutable_storage_ip() {
  // @@protoc_insertion_point(field_mutable:proto.StoragePullRequest.storage_ip)
  return _internal_mutable_storage_ip();
}
inline const std::string& StoragePullRequest::_internal_storage_ip() const {
  return storage_ip_.GetNoArena();
}
inline void StoragePullRequest::_internal_set_storage_ip(const std::string& value) {
  
  storage_ip_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void StoragePullRequest::set_storage_ip(std::string&& value) {
  
  storage_ip_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:proto.StoragePullRequest.storage_ip)
}
inline void StoragePullRequest::set_storage_ip(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  storage_ip_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:proto.StoragePullRequest.storage_ip)
}
inline void StoragePullRequest::set_storage_ip(const char* value, size_t size) {
  
  storage_ip_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:proto.StoragePullRequest.storage_ip)
}
inline std::string* StoragePullRequest::_internal_mutable_storage_ip() {
  
  return storage_ip_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* StoragePullRequest::release_storage_ip() {
  // @@protoc_insertion_point(field_release:proto.StoragePullRequest.storage_ip)
  
  return storage_ip_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void StoragePullRequest::set_allocated_storage_ip(std::string* storage_ip) {
  if (storage_ip != nullptr) {
    
  } else {
    
  }
  storage_ip_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), storage_ip);
  // @@protoc_insertion_point(field_set_allocated:proto.StoragePullRequest.storage_ip)
}

// uint64 epoch_id = 2;
inline void StoragePullRequest::clear_epoch_id() {
  epoch_id_ = PROTOBUF_ULONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 StoragePullRequest::_internal_epoch_id() const {
  return epoch_id_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 StoragePullRequest::epoch_id() const {
  // @@protoc_insertion_point(field_get:proto.StoragePullRequest.epoch_id)
  return _internal_epoch_id();
}
inline void StoragePullRequest::_internal_set_epoch_id(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  
  epoch_id_ = value;
}
inline void StoragePullRequest::set_epoch_id(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_epoch_id(value);
  // @@protoc_insertion_point(field_set:proto.StoragePullRequest.epoch_id)
}

// -------------------------------------------------------------------

// StoragePullResponse

// .proto.Result result = 1;
inline void StoragePullResponse::clear_result() {
  result_ = 0;
}
inline ::proto::Result StoragePullResponse::_internal_result() const {
  return static_cast< ::proto::Result >(result_);
}
inline ::proto::Result StoragePullResponse::result() const {
  // @@protoc_insertion_point(field_get:proto.StoragePullResponse.result)
  return _internal_result();
}
inline void StoragePullResponse::_internal_set_result(::proto::Result value) {
  
  result_ = value;
}
inline void StoragePullResponse::set_result(::proto::Result value) {
  _internal_set_result(value);
  // @@protoc_insertion_point(field_set:proto.StoragePullResponse.result)
}

// uint64 epoch_id = 2;
inline void StoragePullResponse::clear_epoch_id() {
  epoch_id_ = PROTOBUF_ULONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 StoragePullResponse::_internal_epoch_id() const {
  return epoch_id_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 StoragePullResponse::epoch_id() const {
  // @@protoc_insertion_point(field_get:proto.StoragePullResponse.epoch_id)
  return _internal_epoch_id();
}
inline void StoragePullResponse::_internal_set_epoch_id(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  
  epoch_id_ = value;
}
inline void StoragePullResponse::set_epoch_id(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_epoch_id(value);
  // @@protoc_insertion_point(field_set:proto.StoragePullResponse.epoch_id)
}

// uint64 txn_num = 3;
inline void StoragePullResponse::clear_txn_num() {
  txn_num_ = PROTOBUF_ULONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 StoragePullResponse::_internal_txn_num() const {
  return txn_num_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 StoragePullResponse::txn_num() const {
  // @@protoc_insertion_point(field_get:proto.StoragePullResponse.txn_num)
  return _internal_txn_num();
}
inline void StoragePullResponse::_internal_set_txn_num(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  
  txn_num_ = value;
}
inline void StoragePullResponse::set_txn_num(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_txn_num(value);
  // @@protoc_insertion_point(field_set:proto.StoragePullResponse.txn_num)
}

// repeated .proto.Transaction txns = 4;
inline int StoragePullResponse::_internal_txns_size() const {
  return txns_.size();
}
inline int StoragePullResponse::txns_size() const {
  return _internal_txns_size();
}
inline ::proto::Transaction* StoragePullResponse::mutable_txns(int index) {
  // @@protoc_insertion_point(field_mutable:proto.StoragePullResponse.txns)
  return txns_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::proto::Transaction >*
StoragePullResponse::mutable_txns() {
  // @@protoc_insertion_point(field_mutable_list:proto.StoragePullResponse.txns)
  return &txns_;
}
inline const ::proto::Transaction& StoragePullResponse::_internal_txns(int index) const {
  return txns_.Get(index);
}
inline const ::proto::Transaction& StoragePullResponse::txns(int index) const {
  // @@protoc_insertion_point(field_get:proto.StoragePullResponse.txns)
  return _internal_txns(index);
}
inline ::proto::Transaction* StoragePullResponse::_internal_add_txns() {
  return txns_.Add();
}
inline ::proto::Transaction* StoragePullResponse::add_txns() {
  // @@protoc_insertion_point(field_add:proto.StoragePullResponse.txns)
  return _internal_add_txns();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::proto::Transaction >&
StoragePullResponse::txns() const {
  // @@protoc_insertion_point(field_list:proto.StoragePullResponse.txns)
  return txns_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_proto_2fstorage_2eproto
