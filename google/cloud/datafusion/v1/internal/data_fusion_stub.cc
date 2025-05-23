// Copyright 2023 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/datafusion/v1/datafusion.proto

#include "google/cloud/datafusion/v1/internal/data_fusion_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/datafusion/v1/datafusion.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace datafusion_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DataFusionStub::~DataFusionStub() = default;

StatusOr<google::cloud::datafusion::v1::ListAvailableVersionsResponse>
DefaultDataFusionStub::ListAvailableVersions(
    grpc::ClientContext& context, Options const&,
    google::cloud::datafusion::v1::ListAvailableVersionsRequest const&
        request) {
  google::cloud::datafusion::v1::ListAvailableVersionsResponse response;
  auto status = grpc_stub_->ListAvailableVersions(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::datafusion::v1::ListInstancesResponse>
DefaultDataFusionStub::ListInstances(
    grpc::ClientContext& context, Options const&,
    google::cloud::datafusion::v1::ListInstancesRequest const& request) {
  google::cloud::datafusion::v1::ListInstancesResponse response;
  auto status = grpc_stub_->ListInstances(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::datafusion::v1::Instance>
DefaultDataFusionStub::GetInstance(
    grpc::ClientContext& context, Options const&,
    google::cloud::datafusion::v1::GetInstanceRequest const& request) {
  google::cloud::datafusion::v1::Instance response;
  auto status = grpc_stub_->GetInstance(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultDataFusionStub::AsyncCreateInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::datafusion::v1::CreateInstanceRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::datafusion::v1::CreateInstanceRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::datafusion::v1::CreateInstanceRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateInstance(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultDataFusionStub::CreateInstance(
    grpc::ClientContext& context, Options,
    google::cloud::datafusion::v1::CreateInstanceRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateInstance(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultDataFusionStub::AsyncDeleteInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::datafusion::v1::DeleteInstanceRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::datafusion::v1::DeleteInstanceRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::datafusion::v1::DeleteInstanceRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteInstance(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultDataFusionStub::DeleteInstance(
    grpc::ClientContext& context, Options,
    google::cloud::datafusion::v1::DeleteInstanceRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeleteInstance(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultDataFusionStub::AsyncUpdateInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::datafusion::v1::UpdateInstanceRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::datafusion::v1::UpdateInstanceRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::datafusion::v1::UpdateInstanceRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateInstance(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultDataFusionStub::UpdateInstance(
    grpc::ClientContext& context, Options,
    google::cloud::datafusion::v1::UpdateInstanceRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->UpdateInstance(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultDataFusionStub::AsyncRestartInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::datafusion::v1::RestartInstanceRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::datafusion::v1::RestartInstanceRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::datafusion::v1::RestartInstanceRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncRestartInstance(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultDataFusionStub::RestartInstance(
    grpc::ClientContext& context, Options,
    google::cloud::datafusion::v1::RestartInstanceRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->RestartInstance(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultDataFusionStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    // NOLINTNEXTLINE(performance-unnecessary-value-param)
    google::cloud::internal::ImmutableOptions,
    google::longrunning::GetOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::GetOperationRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::longrunning::GetOperationRequest const& request,
             grpc::CompletionQueue* cq) {
        return operations_stub_->AsyncGetOperation(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultDataFusionStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    // NOLINTNEXTLINE(performance-unnecessary-value-param)
    google::cloud::internal::ImmutableOptions,
    google::longrunning::CancelOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::CancelOperationRequest,
                                    google::protobuf::Empty>(
             cq,
             [this](grpc::ClientContext* context,
                    google::longrunning::CancelOperationRequest const& request,
                    grpc::CompletionQueue* cq) {
               return operations_stub_->AsyncCancelOperation(context, request,
                                                             cq);
             },
             request, std::move(context))
      .then([](future<StatusOr<google::protobuf::Empty>> f) {
        return f.get().status();
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datafusion_v1_internal
}  // namespace cloud
}  // namespace google
