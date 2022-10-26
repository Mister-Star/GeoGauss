// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/storage.proto

#include "proto/storage.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_proto_2ftransaction_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Transaction_proto_2ftransaction_2eproto;
namespace proto {
class StoragePullRequestDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<StoragePullRequest> _instance;
} _StoragePullRequest_default_instance_;
class StoragePullResponseDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<StoragePullResponse> _instance;
} _StoragePullResponse_default_instance_;
}  // namespace proto
static void InitDefaultsscc_info_StoragePullRequest_proto_2fstorage_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::proto::_StoragePullRequest_default_instance_;
    new (ptr) ::proto::StoragePullRequest();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::proto::StoragePullRequest::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_StoragePullRequest_proto_2fstorage_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_StoragePullRequest_proto_2fstorage_2eproto}, {}};

static void InitDefaultsscc_info_StoragePullResponse_proto_2fstorage_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::proto::_StoragePullResponse_default_instance_;
    new (ptr) ::proto::StoragePullResponse();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::proto::StoragePullResponse::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_StoragePullResponse_proto_2fstorage_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_StoragePullResponse_proto_2fstorage_2eproto}, {
      &scc_info_Transaction_proto_2ftransaction_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_proto_2fstorage_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_proto_2fstorage_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_proto_2fstorage_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_proto_2fstorage_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::proto::StoragePullRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::proto::StoragePullRequest, storage_ip_),
  PROTOBUF_FIELD_OFFSET(::proto::StoragePullRequest, epoch_id_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::proto::StoragePullResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::proto::StoragePullResponse, result_),
  PROTOBUF_FIELD_OFFSET(::proto::StoragePullResponse, epoch_id_),
  PROTOBUF_FIELD_OFFSET(::proto::StoragePullResponse, txn_num_),
  PROTOBUF_FIELD_OFFSET(::proto::StoragePullResponse, txns_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::proto::StoragePullRequest)},
  { 7, -1, sizeof(::proto::StoragePullResponse)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::proto::_StoragePullRequest_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::proto::_StoragePullResponse_default_instance_),
};

const char descriptor_table_protodef_proto_2fstorage_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\023proto/storage.proto\022\005proto\032\027proto/tran"
  "saction.proto\":\n\022StoragePullRequest\022\022\n\ns"
  "torage_ip\030\001 \001(\t\022\020\n\010epoch_id\030\002 \001(\004\"y\n\023Sto"
  "ragePullResponse\022\035\n\006result\030\001 \001(\0162\r.proto"
  ".Result\022\020\n\010epoch_id\030\002 \001(\004\022\017\n\007txn_num\030\003 \001"
  "(\004\022 \n\004txns\030\004 \003(\0132\022.proto.Transactionb\006pr"
  "oto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_proto_2fstorage_2eproto_deps[1] = {
  &::descriptor_table_proto_2ftransaction_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_proto_2fstorage_2eproto_sccs[2] = {
  &scc_info_StoragePullRequest_proto_2fstorage_2eproto.base,
  &scc_info_StoragePullResponse_proto_2fstorage_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_proto_2fstorage_2eproto_once;
static bool descriptor_table_proto_2fstorage_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_2fstorage_2eproto = {
  &descriptor_table_proto_2fstorage_2eproto_initialized, descriptor_table_protodef_proto_2fstorage_2eproto, "proto/storage.proto", 244,
  &descriptor_table_proto_2fstorage_2eproto_once, descriptor_table_proto_2fstorage_2eproto_sccs, descriptor_table_proto_2fstorage_2eproto_deps, 2, 1,
  schemas, file_default_instances, TableStruct_proto_2fstorage_2eproto::offsets,
  file_level_metadata_proto_2fstorage_2eproto, 2, file_level_enum_descriptors_proto_2fstorage_2eproto, file_level_service_descriptors_proto_2fstorage_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_proto_2fstorage_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_proto_2fstorage_2eproto), true);
namespace proto {

// ===================================================================

void StoragePullRequest::InitAsDefaultInstance() {
}
class StoragePullRequest::_Internal {
 public:
};

StoragePullRequest::StoragePullRequest()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:proto.StoragePullRequest)
}
StoragePullRequest::StoragePullRequest(const StoragePullRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  storage_ip_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_storage_ip().empty()) {
    storage_ip_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.storage_ip_);
  }
  epoch_id_ = from.epoch_id_;
  // @@protoc_insertion_point(copy_constructor:proto.StoragePullRequest)
}

void StoragePullRequest::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_StoragePullRequest_proto_2fstorage_2eproto.base);
  storage_ip_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  epoch_id_ = PROTOBUF_ULONGLONG(0);
}

StoragePullRequest::~StoragePullRequest() {
  // @@protoc_insertion_point(destructor:proto.StoragePullRequest)
  SharedDtor();
}

void StoragePullRequest::SharedDtor() {
  storage_ip_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void StoragePullRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const StoragePullRequest& StoragePullRequest::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_StoragePullRequest_proto_2fstorage_2eproto.base);
  return *internal_default_instance();
}


void StoragePullRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:proto.StoragePullRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  storage_ip_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  epoch_id_ = PROTOBUF_ULONGLONG(0);
  _internal_metadata_.Clear();
}

const char* StoragePullRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string storage_ip = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_storage_ip();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "proto.StoragePullRequest.storage_ip"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint64 epoch_id = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          epoch_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* StoragePullRequest::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:proto.StoragePullRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string storage_ip = 1;
  if (this->storage_ip().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_storage_ip().data(), static_cast<int>(this->_internal_storage_ip().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "proto.StoragePullRequest.storage_ip");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_storage_ip(), target);
  }

  // uint64 epoch_id = 2;
  if (this->epoch_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(2, this->_internal_epoch_id(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.StoragePullRequest)
  return target;
}

size_t StoragePullRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.StoragePullRequest)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string storage_ip = 1;
  if (this->storage_ip().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_storage_ip());
  }

  // uint64 epoch_id = 2;
  if (this->epoch_id() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
        this->_internal_epoch_id());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void StoragePullRequest::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:proto.StoragePullRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const StoragePullRequest* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<StoragePullRequest>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:proto.StoragePullRequest)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:proto.StoragePullRequest)
    MergeFrom(*source);
  }
}

void StoragePullRequest::MergeFrom(const StoragePullRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:proto.StoragePullRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.storage_ip().size() > 0) {

    storage_ip_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.storage_ip_);
  }
  if (from.epoch_id() != 0) {
    _internal_set_epoch_id(from._internal_epoch_id());
  }
}

void StoragePullRequest::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:proto.StoragePullRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void StoragePullRequest::CopyFrom(const StoragePullRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:proto.StoragePullRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool StoragePullRequest::IsInitialized() const {
  return true;
}

void StoragePullRequest::InternalSwap(StoragePullRequest* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  storage_ip_.Swap(&other->storage_ip_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(epoch_id_, other->epoch_id_);
}

::PROTOBUF_NAMESPACE_ID::Metadata StoragePullRequest::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void StoragePullResponse::InitAsDefaultInstance() {
}
class StoragePullResponse::_Internal {
 public:
};

void StoragePullResponse::clear_txns() {
  txns_.Clear();
}
StoragePullResponse::StoragePullResponse()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:proto.StoragePullResponse)
}
StoragePullResponse::StoragePullResponse(const StoragePullResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      txns_(from.txns_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&epoch_id_, &from.epoch_id_,
    static_cast<size_t>(reinterpret_cast<char*>(&result_) -
    reinterpret_cast<char*>(&epoch_id_)) + sizeof(result_));
  // @@protoc_insertion_point(copy_constructor:proto.StoragePullResponse)
}

void StoragePullResponse::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_StoragePullResponse_proto_2fstorage_2eproto.base);
  ::memset(&epoch_id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&result_) -
      reinterpret_cast<char*>(&epoch_id_)) + sizeof(result_));
}

StoragePullResponse::~StoragePullResponse() {
  // @@protoc_insertion_point(destructor:proto.StoragePullResponse)
  SharedDtor();
}

void StoragePullResponse::SharedDtor() {
}

void StoragePullResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const StoragePullResponse& StoragePullResponse::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_StoragePullResponse_proto_2fstorage_2eproto.base);
  return *internal_default_instance();
}


void StoragePullResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:proto.StoragePullResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  txns_.Clear();
  ::memset(&epoch_id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&result_) -
      reinterpret_cast<char*>(&epoch_id_)) + sizeof(result_));
  _internal_metadata_.Clear();
}

const char* StoragePullResponse::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .proto.Result result = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
          _internal_set_result(static_cast<::proto::Result>(val));
        } else goto handle_unusual;
        continue;
      // uint64 epoch_id = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          epoch_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint64 txn_num = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          txn_num_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .proto.Transaction txns = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_txns(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<34>(ptr));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* StoragePullResponse::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:proto.StoragePullResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.Result result = 1;
  if (this->result() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      1, this->_internal_result(), target);
  }

  // uint64 epoch_id = 2;
  if (this->epoch_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(2, this->_internal_epoch_id(), target);
  }

  // uint64 txn_num = 3;
  if (this->txn_num() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(3, this->_internal_txn_num(), target);
  }

  // repeated .proto.Transaction txns = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_txns_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(4, this->_internal_txns(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.StoragePullResponse)
  return target;
}

size_t StoragePullResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.StoragePullResponse)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .proto.Transaction txns = 4;
  total_size += 1UL * this->_internal_txns_size();
  for (const auto& msg : this->txns_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // uint64 epoch_id = 2;
  if (this->epoch_id() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
        this->_internal_epoch_id());
  }

  // uint64 txn_num = 3;
  if (this->txn_num() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
        this->_internal_txn_num());
  }

  // .proto.Result result = 1;
  if (this->result() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_result());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void StoragePullResponse::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:proto.StoragePullResponse)
  GOOGLE_DCHECK_NE(&from, this);
  const StoragePullResponse* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<StoragePullResponse>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:proto.StoragePullResponse)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:proto.StoragePullResponse)
    MergeFrom(*source);
  }
}

void StoragePullResponse::MergeFrom(const StoragePullResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:proto.StoragePullResponse)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  txns_.MergeFrom(from.txns_);
  if (from.epoch_id() != 0) {
    _internal_set_epoch_id(from._internal_epoch_id());
  }
  if (from.txn_num() != 0) {
    _internal_set_txn_num(from._internal_txn_num());
  }
  if (from.result() != 0) {
    _internal_set_result(from._internal_result());
  }
}

void StoragePullResponse::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:proto.StoragePullResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void StoragePullResponse::CopyFrom(const StoragePullResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:proto.StoragePullResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool StoragePullResponse::IsInitialized() const {
  return true;
}

void StoragePullResponse::InternalSwap(StoragePullResponse* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  txns_.InternalSwap(&other->txns_);
  swap(epoch_id_, other->epoch_id_);
  swap(txn_num_, other->txn_num_);
  swap(result_, other->result_);
}

::PROTOBUF_NAMESPACE_ID::Metadata StoragePullResponse::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::proto::StoragePullRequest* Arena::CreateMaybeMessage< ::proto::StoragePullRequest >(Arena* arena) {
  return Arena::CreateInternal< ::proto::StoragePullRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::proto::StoragePullResponse* Arena::CreateMaybeMessage< ::proto::StoragePullResponse >(Arena* arena) {
  return Arena::CreateInternal< ::proto::StoragePullResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
