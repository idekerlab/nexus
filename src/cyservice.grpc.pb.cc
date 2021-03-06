// Generated by the gRPC protobuf plugin.
// If you make any local change, they will be lost.
// source: cyservice.proto

#include "cyservice.pb.h"
#include "cyservice.grpc.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/channel_interface.h>
#include <grpc++/impl/codegen/client_unary_call.h>
#include <grpc++/impl/codegen/method_handler_impl.h>
#include <grpc++/impl/codegen/rpc_service_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/sync_stream.h>
namespace cyservice {

static const char* CyService_method_names[] = {
  "/cyservice.CyService/StreamFragments",
};

std::unique_ptr< CyService::Stub> CyService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  std::unique_ptr< CyService::Stub> stub(new CyService::Stub(channel));
  return stub;
}

CyService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_StreamFragments_(CyService_method_names[0], ::grpc::RpcMethod::BIDI_STREAMING, channel)
  {}

::grpc::ClientReaderWriter< ::cyservice::Fragment, ::cyservice::Fragment>* CyService::Stub::StreamFragmentsRaw(::grpc::ClientContext* context) {
  return new ::grpc::ClientReaderWriter< ::cyservice::Fragment, ::cyservice::Fragment>(channel_.get(), rpcmethod_StreamFragments_, context);
}

::grpc::ClientAsyncReaderWriter< ::cyservice::Fragment, ::cyservice::Fragment>* CyService::Stub::AsyncStreamFragmentsRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
  return new ::grpc::ClientAsyncReaderWriter< ::cyservice::Fragment, ::cyservice::Fragment>(channel_.get(), cq, rpcmethod_StreamFragments_, context, tag);
}

CyService::Service::Service() {
  (void)CyService_method_names;
  AddMethod(new ::grpc::RpcServiceMethod(
      CyService_method_names[0],
      ::grpc::RpcMethod::BIDI_STREAMING,
      new ::grpc::BidiStreamingHandler< CyService::Service, ::cyservice::Fragment, ::cyservice::Fragment>(
          std::mem_fn(&CyService::Service::StreamFragments), this)));
}

CyService::Service::~Service() {
}

::grpc::Status CyService::Service::StreamFragments(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::cyservice::Fragment, ::cyservice::Fragment>* stream) {
  (void) context;
  (void) stream;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace cyservice

