// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/message.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_proto_2fmessage_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_proto_2fmessage_2eproto

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
#include "proto/server.pb.h"
#include "proto/client.pb.h"
#include "proto/storage.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_proto_2fmessage_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_proto_2fmessage_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_2fmessage_2eproto;
namespace proto {
class Message;
class MessageDefaultTypeInternal;
extern MessageDefaultTypeInternal _Message_default_instance_;
}  // namespace proto
PROTOBUF_NAMESPACE_OPEN
template<> ::proto::Message* Arena::CreateMaybeMessage<::proto::Message>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace proto {

// ===================================================================

class Message :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:proto.Message) */ {
 public:
  Message();
  virtual ~Message();

  Message(const Message& from);
  Message(Message&& from) noexcept
    : Message() {
    *this = ::std::move(from);
  }

  inline Message& operator=(const Message& from) {
    CopyFrom(from);
    return *this;
  }
  inline Message& operator=(Message&& from) noexcept {
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
  static const Message& default_instance();

  enum TypeCase {
    kTxn = 1,
    kReplyTxnToClient = 2,
    kClientReadRequest = 3,
    kClientReadResponse = 4,
    kStoragePullRequest = 5,
    kStoragePullResponse = 6,
    kRaftRequest = 7,
    kRaftResponse = 8,
    TYPE_NOT_SET = 0,
  };

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Message* internal_default_instance() {
    return reinterpret_cast<const Message*>(
               &_Message_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Message& a, Message& b) {
    a.Swap(&b);
  }
  inline void Swap(Message* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Message* New() const final {
    return CreateMaybeMessage<Message>(nullptr);
  }

  Message* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Message>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Message& from);
  void MergeFrom(const Message& from);
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
  void InternalSwap(Message* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "proto.Message";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_proto_2fmessage_2eproto);
    return ::descriptor_table_proto_2fmessage_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTxnFieldNumber = 1,
    kReplyTxnToClientFieldNumber = 2,
    kClientReadRequestFieldNumber = 3,
    kClientReadResponseFieldNumber = 4,
    kStoragePullRequestFieldNumber = 5,
    kStoragePullResponseFieldNumber = 6,
    kRaftRequestFieldNumber = 7,
    kRaftResponseFieldNumber = 8,
  };
  // .proto.Transaction txn = 1;
  bool has_txn() const;
  private:
  bool _internal_has_txn() const;
  public:
  void clear_txn();
  const ::proto::Transaction& txn() const;
  ::proto::Transaction* release_txn();
  ::proto::Transaction* mutable_txn();
  void set_allocated_txn(::proto::Transaction* txn);
  private:
  const ::proto::Transaction& _internal_txn() const;
  ::proto::Transaction* _internal_mutable_txn();
  public:

  // .proto.ReplyTransactionToClient reply_txn_to_client = 2;
  bool has_reply_txn_to_client() const;
  private:
  bool _internal_has_reply_txn_to_client() const;
  public:
  void clear_reply_txn_to_client();
  const ::proto::ReplyTransactionToClient& reply_txn_to_client() const;
  ::proto::ReplyTransactionToClient* release_reply_txn_to_client();
  ::proto::ReplyTransactionToClient* mutable_reply_txn_to_client();
  void set_allocated_reply_txn_to_client(::proto::ReplyTransactionToClient* reply_txn_to_client);
  private:
  const ::proto::ReplyTransactionToClient& _internal_reply_txn_to_client() const;
  ::proto::ReplyTransactionToClient* _internal_mutable_reply_txn_to_client();
  public:

  // .proto.ClientReadRequest client_read_request = 3;
  bool has_client_read_request() const;
  private:
  bool _internal_has_client_read_request() const;
  public:
  void clear_client_read_request();
  const ::proto::ClientReadRequest& client_read_request() const;
  ::proto::ClientReadRequest* release_client_read_request();
  ::proto::ClientReadRequest* mutable_client_read_request();
  void set_allocated_client_read_request(::proto::ClientReadRequest* client_read_request);
  private:
  const ::proto::ClientReadRequest& _internal_client_read_request() const;
  ::proto::ClientReadRequest* _internal_mutable_client_read_request();
  public:

  // .proto.ClientReadResponse client_read_response = 4;
  bool has_client_read_response() const;
  private:
  bool _internal_has_client_read_response() const;
  public:
  void clear_client_read_response();
  const ::proto::ClientReadResponse& client_read_response() const;
  ::proto::ClientReadResponse* release_client_read_response();
  ::proto::ClientReadResponse* mutable_client_read_response();
  void set_allocated_client_read_response(::proto::ClientReadResponse* client_read_response);
  private:
  const ::proto::ClientReadResponse& _internal_client_read_response() const;
  ::proto::ClientReadResponse* _internal_mutable_client_read_response();
  public:

  // .proto.StoragePullRequest storage_pull_request = 5;
  bool has_storage_pull_request() const;
  private:
  bool _internal_has_storage_pull_request() const;
  public:
  void clear_storage_pull_request();
  const ::proto::StoragePullRequest& storage_pull_request() const;
  ::proto::StoragePullRequest* release_storage_pull_request();
  ::proto::StoragePullRequest* mutable_storage_pull_request();
  void set_allocated_storage_pull_request(::proto::StoragePullRequest* storage_pull_request);
  private:
  const ::proto::StoragePullRequest& _internal_storage_pull_request() const;
  ::proto::StoragePullRequest* _internal_mutable_storage_pull_request();
  public:

  // .proto.StoragePullResponse storage_pull_response = 6;
  bool has_storage_pull_response() const;
  private:
  bool _internal_has_storage_pull_response() const;
  public:
  void clear_storage_pull_response();
  const ::proto::StoragePullResponse& storage_pull_response() const;
  ::proto::StoragePullResponse* release_storage_pull_response();
  ::proto::StoragePullResponse* mutable_storage_pull_response();
  void set_allocated_storage_pull_response(::proto::StoragePullResponse* storage_pull_response);
  private:
  const ::proto::StoragePullResponse& _internal_storage_pull_response() const;
  ::proto::StoragePullResponse* _internal_mutable_storage_pull_response();
  public:

  // .proto.RaftRequest raft_request = 7;
  bool has_raft_request() const;
  private:
  bool _internal_has_raft_request() const;
  public:
  void clear_raft_request();
  const ::proto::RaftRequest& raft_request() const;
  ::proto::RaftRequest* release_raft_request();
  ::proto::RaftRequest* mutable_raft_request();
  void set_allocated_raft_request(::proto::RaftRequest* raft_request);
  private:
  const ::proto::RaftRequest& _internal_raft_request() const;
  ::proto::RaftRequest* _internal_mutable_raft_request();
  public:

  // .proto.RaftResponse raft_response = 8;
  bool has_raft_response() const;
  private:
  bool _internal_has_raft_response() const;
  public:
  void clear_raft_response();
  const ::proto::RaftResponse& raft_response() const;
  ::proto::RaftResponse* release_raft_response();
  ::proto::RaftResponse* mutable_raft_response();
  void set_allocated_raft_response(::proto::RaftResponse* raft_response);
  private:
  const ::proto::RaftResponse& _internal_raft_response() const;
  ::proto::RaftResponse* _internal_mutable_raft_response();
  public:

  void clear_type();
  TypeCase type_case() const;
  // @@protoc_insertion_point(class_scope:proto.Message)
 private:
  class _Internal;
  void set_has_txn();
  void set_has_reply_txn_to_client();
  void set_has_client_read_request();
  void set_has_client_read_response();
  void set_has_storage_pull_request();
  void set_has_storage_pull_response();
  void set_has_raft_request();
  void set_has_raft_response();

  inline bool has_type() const;
  inline void clear_has_type();

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  union TypeUnion {
    TypeUnion() {}
    ::proto::Transaction* txn_;
    ::proto::ReplyTransactionToClient* reply_txn_to_client_;
    ::proto::ClientReadRequest* client_read_request_;
    ::proto::ClientReadResponse* client_read_response_;
    ::proto::StoragePullRequest* storage_pull_request_;
    ::proto::StoragePullResponse* storage_pull_response_;
    ::proto::RaftRequest* raft_request_;
    ::proto::RaftResponse* raft_response_;
  } type_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::uint32 _oneof_case_[1];

  friend struct ::TableStruct_proto_2fmessage_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Message

// .proto.Transaction txn = 1;
inline bool Message::_internal_has_txn() const {
  return type_case() == kTxn;
}
inline bool Message::has_txn() const {
  return _internal_has_txn();
}
inline void Message::set_has_txn() {
  _oneof_case_[0] = kTxn;
}
inline ::proto::Transaction* Message::release_txn() {
  // @@protoc_insertion_point(field_release:proto.Message.txn)
  if (_internal_has_txn()) {
    clear_has_type();
      ::proto::Transaction* temp = type_.txn_;
    type_.txn_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::proto::Transaction& Message::_internal_txn() const {
  return _internal_has_txn()
      ? *type_.txn_
      : *reinterpret_cast< ::proto::Transaction*>(&::proto::_Transaction_default_instance_);
}
inline const ::proto::Transaction& Message::txn() const {
  // @@protoc_insertion_point(field_get:proto.Message.txn)
  return _internal_txn();
}
inline ::proto::Transaction* Message::_internal_mutable_txn() {
  if (!_internal_has_txn()) {
    clear_type();
    set_has_txn();
    type_.txn_ = CreateMaybeMessage< ::proto::Transaction >(
        GetArenaNoVirtual());
  }
  return type_.txn_;
}
inline ::proto::Transaction* Message::mutable_txn() {
  // @@protoc_insertion_point(field_mutable:proto.Message.txn)
  return _internal_mutable_txn();
}

// .proto.ReplyTransactionToClient reply_txn_to_client = 2;
inline bool Message::_internal_has_reply_txn_to_client() const {
  return type_case() == kReplyTxnToClient;
}
inline bool Message::has_reply_txn_to_client() const {
  return _internal_has_reply_txn_to_client();
}
inline void Message::set_has_reply_txn_to_client() {
  _oneof_case_[0] = kReplyTxnToClient;
}
inline ::proto::ReplyTransactionToClient* Message::release_reply_txn_to_client() {
  // @@protoc_insertion_point(field_release:proto.Message.reply_txn_to_client)
  if (_internal_has_reply_txn_to_client()) {
    clear_has_type();
      ::proto::ReplyTransactionToClient* temp = type_.reply_txn_to_client_;
    type_.reply_txn_to_client_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::proto::ReplyTransactionToClient& Message::_internal_reply_txn_to_client() const {
  return _internal_has_reply_txn_to_client()
      ? *type_.reply_txn_to_client_
      : *reinterpret_cast< ::proto::ReplyTransactionToClient*>(&::proto::_ReplyTransactionToClient_default_instance_);
}
inline const ::proto::ReplyTransactionToClient& Message::reply_txn_to_client() const {
  // @@protoc_insertion_point(field_get:proto.Message.reply_txn_to_client)
  return _internal_reply_txn_to_client();
}
inline ::proto::ReplyTransactionToClient* Message::_internal_mutable_reply_txn_to_client() {
  if (!_internal_has_reply_txn_to_client()) {
    clear_type();
    set_has_reply_txn_to_client();
    type_.reply_txn_to_client_ = CreateMaybeMessage< ::proto::ReplyTransactionToClient >(
        GetArenaNoVirtual());
  }
  return type_.reply_txn_to_client_;
}
inline ::proto::ReplyTransactionToClient* Message::mutable_reply_txn_to_client() {
  // @@protoc_insertion_point(field_mutable:proto.Message.reply_txn_to_client)
  return _internal_mutable_reply_txn_to_client();
}

// .proto.ClientReadRequest client_read_request = 3;
inline bool Message::_internal_has_client_read_request() const {
  return type_case() == kClientReadRequest;
}
inline bool Message::has_client_read_request() const {
  return _internal_has_client_read_request();
}
inline void Message::set_has_client_read_request() {
  _oneof_case_[0] = kClientReadRequest;
}
inline ::proto::ClientReadRequest* Message::release_client_read_request() {
  // @@protoc_insertion_point(field_release:proto.Message.client_read_request)
  if (_internal_has_client_read_request()) {
    clear_has_type();
      ::proto::ClientReadRequest* temp = type_.client_read_request_;
    type_.client_read_request_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::proto::ClientReadRequest& Message::_internal_client_read_request() const {
  return _internal_has_client_read_request()
      ? *type_.client_read_request_
      : *reinterpret_cast< ::proto::ClientReadRequest*>(&::proto::_ClientReadRequest_default_instance_);
}
inline const ::proto::ClientReadRequest& Message::client_read_request() const {
  // @@protoc_insertion_point(field_get:proto.Message.client_read_request)
  return _internal_client_read_request();
}
inline ::proto::ClientReadRequest* Message::_internal_mutable_client_read_request() {
  if (!_internal_has_client_read_request()) {
    clear_type();
    set_has_client_read_request();
    type_.client_read_request_ = CreateMaybeMessage< ::proto::ClientReadRequest >(
        GetArenaNoVirtual());
  }
  return type_.client_read_request_;
}
inline ::proto::ClientReadRequest* Message::mutable_client_read_request() {
  // @@protoc_insertion_point(field_mutable:proto.Message.client_read_request)
  return _internal_mutable_client_read_request();
}

// .proto.ClientReadResponse client_read_response = 4;
inline bool Message::_internal_has_client_read_response() const {
  return type_case() == kClientReadResponse;
}
inline bool Message::has_client_read_response() const {
  return _internal_has_client_read_response();
}
inline void Message::set_has_client_read_response() {
  _oneof_case_[0] = kClientReadResponse;
}
inline ::proto::ClientReadResponse* Message::release_client_read_response() {
  // @@protoc_insertion_point(field_release:proto.Message.client_read_response)
  if (_internal_has_client_read_response()) {
    clear_has_type();
      ::proto::ClientReadResponse* temp = type_.client_read_response_;
    type_.client_read_response_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::proto::ClientReadResponse& Message::_internal_client_read_response() const {
  return _internal_has_client_read_response()
      ? *type_.client_read_response_
      : *reinterpret_cast< ::proto::ClientReadResponse*>(&::proto::_ClientReadResponse_default_instance_);
}
inline const ::proto::ClientReadResponse& Message::client_read_response() const {
  // @@protoc_insertion_point(field_get:proto.Message.client_read_response)
  return _internal_client_read_response();
}
inline ::proto::ClientReadResponse* Message::_internal_mutable_client_read_response() {
  if (!_internal_has_client_read_response()) {
    clear_type();
    set_has_client_read_response();
    type_.client_read_response_ = CreateMaybeMessage< ::proto::ClientReadResponse >(
        GetArenaNoVirtual());
  }
  return type_.client_read_response_;
}
inline ::proto::ClientReadResponse* Message::mutable_client_read_response() {
  // @@protoc_insertion_point(field_mutable:proto.Message.client_read_response)
  return _internal_mutable_client_read_response();
}

// .proto.StoragePullRequest storage_pull_request = 5;
inline bool Message::_internal_has_storage_pull_request() const {
  return type_case() == kStoragePullRequest;
}
inline bool Message::has_storage_pull_request() const {
  return _internal_has_storage_pull_request();
}
inline void Message::set_has_storage_pull_request() {
  _oneof_case_[0] = kStoragePullRequest;
}
inline ::proto::StoragePullRequest* Message::release_storage_pull_request() {
  // @@protoc_insertion_point(field_release:proto.Message.storage_pull_request)
  if (_internal_has_storage_pull_request()) {
    clear_has_type();
      ::proto::StoragePullRequest* temp = type_.storage_pull_request_;
    type_.storage_pull_request_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::proto::StoragePullRequest& Message::_internal_storage_pull_request() const {
  return _internal_has_storage_pull_request()
      ? *type_.storage_pull_request_
      : *reinterpret_cast< ::proto::StoragePullRequest*>(&::proto::_StoragePullRequest_default_instance_);
}
inline const ::proto::StoragePullRequest& Message::storage_pull_request() const {
  // @@protoc_insertion_point(field_get:proto.Message.storage_pull_request)
  return _internal_storage_pull_request();
}
inline ::proto::StoragePullRequest* Message::_internal_mutable_storage_pull_request() {
  if (!_internal_has_storage_pull_request()) {
    clear_type();
    set_has_storage_pull_request();
    type_.storage_pull_request_ = CreateMaybeMessage< ::proto::StoragePullRequest >(
        GetArenaNoVirtual());
  }
  return type_.storage_pull_request_;
}
inline ::proto::StoragePullRequest* Message::mutable_storage_pull_request() {
  // @@protoc_insertion_point(field_mutable:proto.Message.storage_pull_request)
  return _internal_mutable_storage_pull_request();
}

// .proto.StoragePullResponse storage_pull_response = 6;
inline bool Message::_internal_has_storage_pull_response() const {
  return type_case() == kStoragePullResponse;
}
inline bool Message::has_storage_pull_response() const {
  return _internal_has_storage_pull_response();
}
inline void Message::set_has_storage_pull_response() {
  _oneof_case_[0] = kStoragePullResponse;
}
inline ::proto::StoragePullResponse* Message::release_storage_pull_response() {
  // @@protoc_insertion_point(field_release:proto.Message.storage_pull_response)
  if (_internal_has_storage_pull_response()) {
    clear_has_type();
      ::proto::StoragePullResponse* temp = type_.storage_pull_response_;
    type_.storage_pull_response_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::proto::StoragePullResponse& Message::_internal_storage_pull_response() const {
  return _internal_has_storage_pull_response()
      ? *type_.storage_pull_response_
      : *reinterpret_cast< ::proto::StoragePullResponse*>(&::proto::_StoragePullResponse_default_instance_);
}
inline const ::proto::StoragePullResponse& Message::storage_pull_response() const {
  // @@protoc_insertion_point(field_get:proto.Message.storage_pull_response)
  return _internal_storage_pull_response();
}
inline ::proto::StoragePullResponse* Message::_internal_mutable_storage_pull_response() {
  if (!_internal_has_storage_pull_response()) {
    clear_type();
    set_has_storage_pull_response();
    type_.storage_pull_response_ = CreateMaybeMessage< ::proto::StoragePullResponse >(
        GetArenaNoVirtual());
  }
  return type_.storage_pull_response_;
}
inline ::proto::StoragePullResponse* Message::mutable_storage_pull_response() {
  // @@protoc_insertion_point(field_mutable:proto.Message.storage_pull_response)
  return _internal_mutable_storage_pull_response();
}

// .proto.RaftRequest raft_request = 7;
inline bool Message::_internal_has_raft_request() const {
  return type_case() == kRaftRequest;
}
inline bool Message::has_raft_request() const {
  return _internal_has_raft_request();
}
inline void Message::set_has_raft_request() {
  _oneof_case_[0] = kRaftRequest;
}
inline ::proto::RaftRequest* Message::release_raft_request() {
  // @@protoc_insertion_point(field_release:proto.Message.raft_request)
  if (_internal_has_raft_request()) {
    clear_has_type();
      ::proto::RaftRequest* temp = type_.raft_request_;
    type_.raft_request_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::proto::RaftRequest& Message::_internal_raft_request() const {
  return _internal_has_raft_request()
      ? *type_.raft_request_
      : *reinterpret_cast< ::proto::RaftRequest*>(&::proto::_RaftRequest_default_instance_);
}
inline const ::proto::RaftRequest& Message::raft_request() const {
  // @@protoc_insertion_point(field_get:proto.Message.raft_request)
  return _internal_raft_request();
}
inline ::proto::RaftRequest* Message::_internal_mutable_raft_request() {
  if (!_internal_has_raft_request()) {
    clear_type();
    set_has_raft_request();
    type_.raft_request_ = CreateMaybeMessage< ::proto::RaftRequest >(
        GetArenaNoVirtual());
  }
  return type_.raft_request_;
}
inline ::proto::RaftRequest* Message::mutable_raft_request() {
  // @@protoc_insertion_point(field_mutable:proto.Message.raft_request)
  return _internal_mutable_raft_request();
}

// .proto.RaftResponse raft_response = 8;
inline bool Message::_internal_has_raft_response() const {
  return type_case() == kRaftResponse;
}
inline bool Message::has_raft_response() const {
  return _internal_has_raft_response();
}
inline void Message::set_has_raft_response() {
  _oneof_case_[0] = kRaftResponse;
}
inline ::proto::RaftResponse* Message::release_raft_response() {
  // @@protoc_insertion_point(field_release:proto.Message.raft_response)
  if (_internal_has_raft_response()) {
    clear_has_type();
      ::proto::RaftResponse* temp = type_.raft_response_;
    type_.raft_response_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::proto::RaftResponse& Message::_internal_raft_response() const {
  return _internal_has_raft_response()
      ? *type_.raft_response_
      : *reinterpret_cast< ::proto::RaftResponse*>(&::proto::_RaftResponse_default_instance_);
}
inline const ::proto::RaftResponse& Message::raft_response() const {
  // @@protoc_insertion_point(field_get:proto.Message.raft_response)
  return _internal_raft_response();
}
inline ::proto::RaftResponse* Message::_internal_mutable_raft_response() {
  if (!_internal_has_raft_response()) {
    clear_type();
    set_has_raft_response();
    type_.raft_response_ = CreateMaybeMessage< ::proto::RaftResponse >(
        GetArenaNoVirtual());
  }
  return type_.raft_response_;
}
inline ::proto::RaftResponse* Message::mutable_raft_response() {
  // @@protoc_insertion_point(field_mutable:proto.Message.raft_response)
  return _internal_mutable_raft_response();
}

inline bool Message::has_type() const {
  return type_case() != TYPE_NOT_SET;
}
inline void Message::clear_has_type() {
  _oneof_case_[0] = TYPE_NOT_SET;
}
inline Message::TypeCase Message::type_case() const {
  return Message::TypeCase(_oneof_case_[0]);
}
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_proto_2fmessage_2eproto
