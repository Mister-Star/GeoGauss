// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/client.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_proto_2fclient_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_proto_2fclient_2eproto

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
#include "proto/node.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_proto_2fclient_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_proto_2fclient_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_2fclient_2eproto;
namespace proto {
class ClientReadRequest;
class ClientReadRequestDefaultTypeInternal;
extern ClientReadRequestDefaultTypeInternal _ClientReadRequest_default_instance_;
class ClientReadResponse;
class ClientReadResponseDefaultTypeInternal;
extern ClientReadResponseDefaultTypeInternal _ClientReadResponse_default_instance_;
}  // namespace proto
PROTOBUF_NAMESPACE_OPEN
template<> ::proto::ClientReadRequest* Arena::CreateMaybeMessage<::proto::ClientReadRequest>(Arena*);
template<> ::proto::ClientReadResponse* Arena::CreateMaybeMessage<::proto::ClientReadResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace proto {

// ===================================================================

class ClientReadRequest :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:proto.ClientReadRequest) */ {
 public:
  ClientReadRequest();
  virtual ~ClientReadRequest();

  ClientReadRequest(const ClientReadRequest& from);
  ClientReadRequest(ClientReadRequest&& from) noexcept
    : ClientReadRequest() {
    *this = ::std::move(from);
  }

  inline ClientReadRequest& operator=(const ClientReadRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline ClientReadRequest& operator=(ClientReadRequest&& from) noexcept {
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
  static const ClientReadRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ClientReadRequest* internal_default_instance() {
    return reinterpret_cast<const ClientReadRequest*>(
               &_ClientReadRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ClientReadRequest& a, ClientReadRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(ClientReadRequest* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ClientReadRequest* New() const final {
    return CreateMaybeMessage<ClientReadRequest>(nullptr);
  }

  ClientReadRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ClientReadRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ClientReadRequest& from);
  void MergeFrom(const ClientReadRequest& from);
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
  void InternalSwap(ClientReadRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "proto.ClientReadRequest";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_proto_2fclient_2eproto);
    return ::descriptor_table_proto_2fclient_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRowsFieldNumber = 3,
    kClientIpFieldNumber = 1,
    kTxnIdFieldNumber = 2,
  };
  // repeated .proto.Row rows = 3;
  int rows_size() const;
  private:
  int _internal_rows_size() const;
  public:
  void clear_rows();
  ::proto::Row* mutable_rows(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::proto::Row >*
      mutable_rows();
  private:
  const ::proto::Row& _internal_rows(int index) const;
  ::proto::Row* _internal_add_rows();
  public:
  const ::proto::Row& rows(int index) const;
  ::proto::Row* add_rows();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::proto::Row >&
      rows() const;

  // string client_ip = 1;
  void clear_client_ip();
  const std::string& client_ip() const;
  void set_client_ip(const std::string& value);
  void set_client_ip(std::string&& value);
  void set_client_ip(const char* value);
  void set_client_ip(const char* value, size_t size);
  std::string* mutable_client_ip();
  std::string* release_client_ip();
  void set_allocated_client_ip(std::string* client_ip);
  private:
  const std::string& _internal_client_ip() const;
  void _internal_set_client_ip(const std::string& value);
  std::string* _internal_mutable_client_ip();
  public:

  // uint64 txn_id = 2;
  void clear_txn_id();
  ::PROTOBUF_NAMESPACE_ID::uint64 txn_id() const;
  void set_txn_id(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_txn_id() const;
  void _internal_set_txn_id(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // @@protoc_insertion_point(class_scope:proto.ClientReadRequest)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::proto::Row > rows_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr client_ip_;
  ::PROTOBUF_NAMESPACE_ID::uint64 txn_id_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_proto_2fclient_2eproto;
};
// -------------------------------------------------------------------

class ClientReadResponse :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:proto.ClientReadResponse) */ {
 public:
  ClientReadResponse();
  virtual ~ClientReadResponse();

  ClientReadResponse(const ClientReadResponse& from);
  ClientReadResponse(ClientReadResponse&& from) noexcept
    : ClientReadResponse() {
    *this = ::std::move(from);
  }

  inline ClientReadResponse& operator=(const ClientReadResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline ClientReadResponse& operator=(ClientReadResponse&& from) noexcept {
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
  static const ClientReadResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ClientReadResponse* internal_default_instance() {
    return reinterpret_cast<const ClientReadResponse*>(
               &_ClientReadResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(ClientReadResponse& a, ClientReadResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(ClientReadResponse* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ClientReadResponse* New() const final {
    return CreateMaybeMessage<ClientReadResponse>(nullptr);
  }

  ClientReadResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ClientReadResponse>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ClientReadResponse& from);
  void MergeFrom(const ClientReadResponse& from);
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
  void InternalSwap(ClientReadResponse* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "proto.ClientReadResponse";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_proto_2fclient_2eproto);
    return ::descriptor_table_proto_2fclient_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRowsFieldNumber = 3,
    kTxnIdFieldNumber = 2,
    kResultFieldNumber = 1,
  };
  // repeated .proto.Row rows = 3;
  int rows_size() const;
  private:
  int _internal_rows_size() const;
  public:
  void clear_rows();
  ::proto::Row* mutable_rows(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::proto::Row >*
      mutable_rows();
  private:
  const ::proto::Row& _internal_rows(int index) const;
  ::proto::Row* _internal_add_rows();
  public:
  const ::proto::Row& rows(int index) const;
  ::proto::Row* add_rows();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::proto::Row >&
      rows() const;

  // uint64 txn_id = 2;
  void clear_txn_id();
  ::PROTOBUF_NAMESPACE_ID::uint64 txn_id() const;
  void set_txn_id(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_txn_id() const;
  void _internal_set_txn_id(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // .proto.Result result = 1;
  void clear_result();
  ::proto::Result result() const;
  void set_result(::proto::Result value);
  private:
  ::proto::Result _internal_result() const;
  void _internal_set_result(::proto::Result value);
  public:

  // @@protoc_insertion_point(class_scope:proto.ClientReadResponse)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::proto::Row > rows_;
  ::PROTOBUF_NAMESPACE_ID::uint64 txn_id_;
  int result_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_proto_2fclient_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ClientReadRequest

// string client_ip = 1;
inline void ClientReadRequest::clear_client_ip() {
  client_ip_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& ClientReadRequest::client_ip() const {
  // @@protoc_insertion_point(field_get:proto.ClientReadRequest.client_ip)
  return _internal_client_ip();
}
inline void ClientReadRequest::set_client_ip(const std::string& value) {
  _internal_set_client_ip(value);
  // @@protoc_insertion_point(field_set:proto.ClientReadRequest.client_ip)
}
inline std::string* ClientReadRequest::mutable_client_ip() {
  // @@protoc_insertion_point(field_mutable:proto.ClientReadRequest.client_ip)
  return _internal_mutable_client_ip();
}
inline const std::string& ClientReadRequest::_internal_client_ip() const {
  return client_ip_.GetNoArena();
}
inline void ClientReadRequest::_internal_set_client_ip(const std::string& value) {
  
  client_ip_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void ClientReadRequest::set_client_ip(std::string&& value) {
  
  client_ip_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:proto.ClientReadRequest.client_ip)
}
inline void ClientReadRequest::set_client_ip(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  client_ip_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:proto.ClientReadRequest.client_ip)
}
inline void ClientReadRequest::set_client_ip(const char* value, size_t size) {
  
  client_ip_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:proto.ClientReadRequest.client_ip)
}
inline std::string* ClientReadRequest::_internal_mutable_client_ip() {
  
  return client_ip_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* ClientReadRequest::release_client_ip() {
  // @@protoc_insertion_point(field_release:proto.ClientReadRequest.client_ip)
  
  return client_ip_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void ClientReadRequest::set_allocated_client_ip(std::string* client_ip) {
  if (client_ip != nullptr) {
    
  } else {
    
  }
  client_ip_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), client_ip);
  // @@protoc_insertion_point(field_set_allocated:proto.ClientReadRequest.client_ip)
}

// uint64 txn_id = 2;
inline void ClientReadRequest::clear_txn_id() {
  txn_id_ = PROTOBUF_ULONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 ClientReadRequest::_internal_txn_id() const {
  return txn_id_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 ClientReadRequest::txn_id() const {
  // @@protoc_insertion_point(field_get:proto.ClientReadRequest.txn_id)
  return _internal_txn_id();
}
inline void ClientReadRequest::_internal_set_txn_id(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  
  txn_id_ = value;
}
inline void ClientReadRequest::set_txn_id(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_txn_id(value);
  // @@protoc_insertion_point(field_set:proto.ClientReadRequest.txn_id)
}

// repeated .proto.Row rows = 3;
inline int ClientReadRequest::_internal_rows_size() const {
  return rows_.size();
}
inline int ClientReadRequest::rows_size() const {
  return _internal_rows_size();
}
inline ::proto::Row* ClientReadRequest::mutable_rows(int index) {
  // @@protoc_insertion_point(field_mutable:proto.ClientReadRequest.rows)
  return rows_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::proto::Row >*
ClientReadRequest::mutable_rows() {
  // @@protoc_insertion_point(field_mutable_list:proto.ClientReadRequest.rows)
  return &rows_;
}
inline const ::proto::Row& ClientReadRequest::_internal_rows(int index) const {
  return rows_.Get(index);
}
inline const ::proto::Row& ClientReadRequest::rows(int index) const {
  // @@protoc_insertion_point(field_get:proto.ClientReadRequest.rows)
  return _internal_rows(index);
}
inline ::proto::Row* ClientReadRequest::_internal_add_rows() {
  return rows_.Add();
}
inline ::proto::Row* ClientReadRequest::add_rows() {
  // @@protoc_insertion_point(field_add:proto.ClientReadRequest.rows)
  return _internal_add_rows();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::proto::Row >&
ClientReadRequest::rows() const {
  // @@protoc_insertion_point(field_list:proto.ClientReadRequest.rows)
  return rows_;
}

// -------------------------------------------------------------------

// ClientReadResponse

// .proto.Result result = 1;
inline void ClientReadResponse::clear_result() {
  result_ = 0;
}
inline ::proto::Result ClientReadResponse::_internal_result() const {
  return static_cast< ::proto::Result >(result_);
}
inline ::proto::Result ClientReadResponse::result() const {
  // @@protoc_insertion_point(field_get:proto.ClientReadResponse.result)
  return _internal_result();
}
inline void ClientReadResponse::_internal_set_result(::proto::Result value) {
  
  result_ = value;
}
inline void ClientReadResponse::set_result(::proto::Result value) {
  _internal_set_result(value);
  // @@protoc_insertion_point(field_set:proto.ClientReadResponse.result)
}

// uint64 txn_id = 2;
inline void ClientReadResponse::clear_txn_id() {
  txn_id_ = PROTOBUF_ULONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 ClientReadResponse::_internal_txn_id() const {
  return txn_id_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 ClientReadResponse::txn_id() const {
  // @@protoc_insertion_point(field_get:proto.ClientReadResponse.txn_id)
  return _internal_txn_id();
}
inline void ClientReadResponse::_internal_set_txn_id(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  
  txn_id_ = value;
}
inline void ClientReadResponse::set_txn_id(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_txn_id(value);
  // @@protoc_insertion_point(field_set:proto.ClientReadResponse.txn_id)
}

// repeated .proto.Row rows = 3;
inline int ClientReadResponse::_internal_rows_size() const {
  return rows_.size();
}
inline int ClientReadResponse::rows_size() const {
  return _internal_rows_size();
}
inline ::proto::Row* ClientReadResponse::mutable_rows(int index) {
  // @@protoc_insertion_point(field_mutable:proto.ClientReadResponse.rows)
  return rows_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::proto::Row >*
ClientReadResponse::mutable_rows() {
  // @@protoc_insertion_point(field_mutable_list:proto.ClientReadResponse.rows)
  return &rows_;
}
inline const ::proto::Row& ClientReadResponse::_internal_rows(int index) const {
  return rows_.Get(index);
}
inline const ::proto::Row& ClientReadResponse::rows(int index) const {
  // @@protoc_insertion_point(field_get:proto.ClientReadResponse.rows)
  return _internal_rows(index);
}
inline ::proto::Row* ClientReadResponse::_internal_add_rows() {
  return rows_.Add();
}
inline ::proto::Row* ClientReadResponse::add_rows() {
  // @@protoc_insertion_point(field_add:proto.ClientReadResponse.rows)
  return _internal_add_rows();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::proto::Row >&
ClientReadResponse::rows() const {
  // @@protoc_insertion_point(field_list:proto.ClientReadResponse.rows)
  return rows_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_proto_2fclient_2eproto
