// Copyright 2021 Google LLC
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
// source: google/spanner/admin/instance/v1/spanner_instance_admin.proto

#include "google/cloud/spanner/admin/instance_admin_client.h"
#include "google/cloud/spanner/admin/instance_admin_options.h"
#include <memory>
#include <thread>
#include <utility>

namespace google {
namespace cloud {
namespace spanner_admin {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

InstanceAdminClient::InstanceAdminClient(
    std::shared_ptr<InstanceAdminConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
InstanceAdminClient::~InstanceAdminClient() = default;

StreamRange<google::spanner::admin::instance::v1::InstanceConfig>
InstanceAdminClient::ListInstanceConfigs(std::string const& parent,
                                         Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::spanner::admin::instance::v1::ListInstanceConfigsRequest request;
  request.set_parent(parent);
  return connection_->ListInstanceConfigs(request);
}

StreamRange<google::spanner::admin::instance::v1::InstanceConfig>
InstanceAdminClient::ListInstanceConfigs(
    google::spanner::admin::instance::v1::ListInstanceConfigsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListInstanceConfigs(std::move(request));
}

StatusOr<google::spanner::admin::instance::v1::InstanceConfig>
InstanceAdminClient::GetInstanceConfig(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::spanner::admin::instance::v1::GetInstanceConfigRequest request;
  request.set_name(name);
  return connection_->GetInstanceConfig(request);
}

StatusOr<google::spanner::admin::instance::v1::InstanceConfig>
InstanceAdminClient::GetInstanceConfig(
    google::spanner::admin::instance::v1::GetInstanceConfigRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetInstanceConfig(request);
}

future<StatusOr<google::spanner::admin::instance::v1::InstanceConfig>>
InstanceAdminClient::CreateInstanceConfig(
    std::string const& parent,
    google::spanner::admin::instance::v1::InstanceConfig const& instance_config,
    std::string const& instance_config_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::spanner::admin::instance::v1::CreateInstanceConfigRequest request;
  request.set_parent(parent);
  *request.mutable_instance_config() = instance_config;
  request.set_instance_config_id(instance_config_id);
  return connection_->CreateInstanceConfig(request);
}

StatusOr<google::longrunning::Operation>
InstanceAdminClient::CreateInstanceConfig(
    NoAwaitTag, std::string const& parent,
    google::spanner::admin::instance::v1::InstanceConfig const& instance_config,
    std::string const& instance_config_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::spanner::admin::instance::v1::CreateInstanceConfigRequest request;
  request.set_parent(parent);
  *request.mutable_instance_config() = instance_config;
  request.set_instance_config_id(instance_config_id);
  return connection_->CreateInstanceConfig(NoAwaitTag{}, request);
}

future<StatusOr<google::spanner::admin::instance::v1::InstanceConfig>>
InstanceAdminClient::CreateInstanceConfig(
    google::spanner::admin::instance::v1::CreateInstanceConfigRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateInstanceConfig(request);
}

StatusOr<google::longrunning::Operation>
InstanceAdminClient::CreateInstanceConfig(
    NoAwaitTag,
    google::spanner::admin::instance::v1::CreateInstanceConfigRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateInstanceConfig(NoAwaitTag{}, request);
}

future<StatusOr<google::spanner::admin::instance::v1::InstanceConfig>>
InstanceAdminClient::CreateInstanceConfig(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateInstanceConfig(operation);
}

future<StatusOr<google::spanner::admin::instance::v1::InstanceConfig>>
InstanceAdminClient::UpdateInstanceConfig(
    google::spanner::admin::instance::v1::InstanceConfig const& instance_config,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::spanner::admin::instance::v1::UpdateInstanceConfigRequest request;
  *request.mutable_instance_config() = instance_config;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateInstanceConfig(request);
}

StatusOr<google::longrunning::Operation>
InstanceAdminClient::UpdateInstanceConfig(
    NoAwaitTag,
    google::spanner::admin::instance::v1::InstanceConfig const& instance_config,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::spanner::admin::instance::v1::UpdateInstanceConfigRequest request;
  *request.mutable_instance_config() = instance_config;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateInstanceConfig(NoAwaitTag{}, request);
}

future<StatusOr<google::spanner::admin::instance::v1::InstanceConfig>>
InstanceAdminClient::UpdateInstanceConfig(
    google::spanner::admin::instance::v1::UpdateInstanceConfigRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateInstanceConfig(request);
}

StatusOr<google::longrunning::Operation>
InstanceAdminClient::UpdateInstanceConfig(
    NoAwaitTag,
    google::spanner::admin::instance::v1::UpdateInstanceConfigRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateInstanceConfig(NoAwaitTag{}, request);
}

future<StatusOr<google::spanner::admin::instance::v1::InstanceConfig>>
InstanceAdminClient::UpdateInstanceConfig(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateInstanceConfig(operation);
}

Status InstanceAdminClient::DeleteInstanceConfig(std::string const& name,
                                                 Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::spanner::admin::instance::v1::DeleteInstanceConfigRequest request;
  request.set_name(name);
  return connection_->DeleteInstanceConfig(request);
}

Status InstanceAdminClient::DeleteInstanceConfig(
    google::spanner::admin::instance::v1::DeleteInstanceConfigRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteInstanceConfig(request);
}

StreamRange<google::longrunning::Operation>
InstanceAdminClient::ListInstanceConfigOperations(std::string const& parent,
                                                  Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::spanner::admin::instance::v1::ListInstanceConfigOperationsRequest
      request;
  request.set_parent(parent);
  return connection_->ListInstanceConfigOperations(request);
}

StreamRange<google::longrunning::Operation>
InstanceAdminClient::ListInstanceConfigOperations(
    google::spanner::admin::instance::v1::ListInstanceConfigOperationsRequest
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListInstanceConfigOperations(std::move(request));
}

StreamRange<google::spanner::admin::instance::v1::Instance>
InstanceAdminClient::ListInstances(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::spanner::admin::instance::v1::ListInstancesRequest request;
  request.set_parent(parent);
  return connection_->ListInstances(request);
}

StreamRange<google::spanner::admin::instance::v1::Instance>
InstanceAdminClient::ListInstances(
    google::spanner::admin::instance::v1::ListInstancesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListInstances(std::move(request));
}

StreamRange<google::spanner::admin::instance::v1::InstancePartition>
InstanceAdminClient::ListInstancePartitions(std::string const& parent,
                                            Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::spanner::admin::instance::v1::ListInstancePartitionsRequest request;
  request.set_parent(parent);
  return connection_->ListInstancePartitions(request);
}

StreamRange<google::spanner::admin::instance::v1::InstancePartition>
InstanceAdminClient::ListInstancePartitions(
    google::spanner::admin::instance::v1::ListInstancePartitionsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListInstancePartitions(std::move(request));
}

StatusOr<google::spanner::admin::instance::v1::Instance>
InstanceAdminClient::GetInstance(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::spanner::admin::instance::v1::GetInstanceRequest request;
  request.set_name(name);
  return connection_->GetInstance(request);
}

StatusOr<google::spanner::admin::instance::v1::Instance>
InstanceAdminClient::GetInstance(
    google::spanner::admin::instance::v1::GetInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetInstance(request);
}

future<StatusOr<google::spanner::admin::instance::v1::Instance>>
InstanceAdminClient::CreateInstance(
    std::string const& parent, std::string const& instance_id,
    google::spanner::admin::instance::v1::Instance const& instance,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::spanner::admin::instance::v1::CreateInstanceRequest request;
  request.set_parent(parent);
  request.set_instance_id(instance_id);
  *request.mutable_instance() = instance;
  return connection_->CreateInstance(request);
}

StatusOr<google::longrunning::Operation> InstanceAdminClient::CreateInstance(
    NoAwaitTag, std::string const& parent, std::string const& instance_id,
    google::spanner::admin::instance::v1::Instance const& instance,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::spanner::admin::instance::v1::CreateInstanceRequest request;
  request.set_parent(parent);
  request.set_instance_id(instance_id);
  *request.mutable_instance() = instance;
  return connection_->CreateInstance(NoAwaitTag{}, request);
}

future<StatusOr<google::spanner::admin::instance::v1::Instance>>
InstanceAdminClient::CreateInstance(
    google::spanner::admin::instance::v1::CreateInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateInstance(request);
}

StatusOr<google::longrunning::Operation> InstanceAdminClient::CreateInstance(
    NoAwaitTag,
    google::spanner::admin::instance::v1::CreateInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateInstance(NoAwaitTag{}, request);
}

future<StatusOr<google::spanner::admin::instance::v1::Instance>>
InstanceAdminClient::CreateInstance(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateInstance(operation);
}

future<StatusOr<google::spanner::admin::instance::v1::Instance>>
InstanceAdminClient::UpdateInstance(
    google::spanner::admin::instance::v1::Instance const& instance,
    google::protobuf::FieldMask const& field_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::spanner::admin::instance::v1::UpdateInstanceRequest request;
  *request.mutable_instance() = instance;
  *request.mutable_field_mask() = field_mask;
  return connection_->UpdateInstance(request);
}

StatusOr<google::longrunning::Operation> InstanceAdminClient::UpdateInstance(
    NoAwaitTag, google::spanner::admin::instance::v1::Instance const& instance,
    google::protobuf::FieldMask const& field_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::spanner::admin::instance::v1::UpdateInstanceRequest request;
  *request.mutable_instance() = instance;
  *request.mutable_field_mask() = field_mask;
  return connection_->UpdateInstance(NoAwaitTag{}, request);
}

future<StatusOr<google::spanner::admin::instance::v1::Instance>>
InstanceAdminClient::UpdateInstance(
    google::spanner::admin::instance::v1::UpdateInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateInstance(request);
}

StatusOr<google::longrunning::Operation> InstanceAdminClient::UpdateInstance(
    NoAwaitTag,
    google::spanner::admin::instance::v1::UpdateInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateInstance(NoAwaitTag{}, request);
}

future<StatusOr<google::spanner::admin::instance::v1::Instance>>
InstanceAdminClient::UpdateInstance(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateInstance(operation);
}

Status InstanceAdminClient::DeleteInstance(std::string const& name,
                                           Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::spanner::admin::instance::v1::DeleteInstanceRequest request;
  request.set_name(name);
  return connection_->DeleteInstance(request);
}

Status InstanceAdminClient::DeleteInstance(
    google::spanner::admin::instance::v1::DeleteInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteInstance(request);
}

StatusOr<google::iam::v1::Policy> InstanceAdminClient::SetIamPolicy(
    std::string const& resource, google::iam::v1::Policy const& policy,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::iam::v1::SetIamPolicyRequest request;
  request.set_resource(resource);
  *request.mutable_policy() = policy;
  return connection_->SetIamPolicy(request);
}

StatusOr<google::iam::v1::Policy> InstanceAdminClient::SetIamPolicy(
    std::string const& resource, IamUpdater const& updater, Options opts) {
  internal::CheckExpectedOptions<InstanceAdminBackoffPolicyOption>(opts,
                                                                   __func__);
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::iam::v1::GetIamPolicyRequest get_request;
  get_request.set_resource(resource);
  google::iam::v1::SetIamPolicyRequest set_request;
  set_request.set_resource(resource);
  auto backoff_policy =
      internal::CurrentOptions().get<InstanceAdminBackoffPolicyOption>();
  if (backoff_policy != nullptr) {
    backoff_policy = backoff_policy->clone();
  }
  for (;;) {
    auto recent = connection_->GetIamPolicy(get_request);
    if (!recent) {
      return recent.status();
    }
    auto policy = updater(*std::move(recent));
    if (!policy) {
      return internal::CancelledError(
          "updater did not yield a policy",
          GCP_ERROR_INFO().WithMetadata("gl-cpp.error.origin", "client"));
    }
    *set_request.mutable_policy() = *std::move(policy);
    auto result = connection_->SetIamPolicy(set_request);
    if (result || result.status().code() != StatusCode::kAborted ||
        backoff_policy == nullptr) {
      return result;
    }
    std::this_thread::sleep_for(backoff_policy->OnCompletion());
  }
}

StatusOr<google::iam::v1::Policy> InstanceAdminClient::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetIamPolicy(request);
}

StatusOr<google::iam::v1::Policy> InstanceAdminClient::GetIamPolicy(
    std::string const& resource, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::iam::v1::GetIamPolicyRequest request;
  request.set_resource(resource);
  return connection_->GetIamPolicy(request);
}

StatusOr<google::iam::v1::Policy> InstanceAdminClient::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetIamPolicy(request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
InstanceAdminClient::TestIamPermissions(
    std::string const& resource, std::vector<std::string> const& permissions,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::iam::v1::TestIamPermissionsRequest request;
  request.set_resource(resource);
  *request.mutable_permissions() = {permissions.begin(), permissions.end()};
  return connection_->TestIamPermissions(request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
InstanceAdminClient::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->TestIamPermissions(request);
}

StatusOr<google::spanner::admin::instance::v1::InstancePartition>
InstanceAdminClient::GetInstancePartition(std::string const& name,
                                          Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::spanner::admin::instance::v1::GetInstancePartitionRequest request;
  request.set_name(name);
  return connection_->GetInstancePartition(request);
}

StatusOr<google::spanner::admin::instance::v1::InstancePartition>
InstanceAdminClient::GetInstancePartition(
    google::spanner::admin::instance::v1::GetInstancePartitionRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetInstancePartition(request);
}

future<StatusOr<google::spanner::admin::instance::v1::InstancePartition>>
InstanceAdminClient::CreateInstancePartition(
    std::string const& parent,
    google::spanner::admin::instance::v1::InstancePartition const&
        instance_partition,
    std::string const& instance_partition_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::spanner::admin::instance::v1::CreateInstancePartitionRequest request;
  request.set_parent(parent);
  *request.mutable_instance_partition() = instance_partition;
  request.set_instance_partition_id(instance_partition_id);
  return connection_->CreateInstancePartition(request);
}

StatusOr<google::longrunning::Operation>
InstanceAdminClient::CreateInstancePartition(
    NoAwaitTag, std::string const& parent,
    google::spanner::admin::instance::v1::InstancePartition const&
        instance_partition,
    std::string const& instance_partition_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::spanner::admin::instance::v1::CreateInstancePartitionRequest request;
  request.set_parent(parent);
  *request.mutable_instance_partition() = instance_partition;
  request.set_instance_partition_id(instance_partition_id);
  return connection_->CreateInstancePartition(NoAwaitTag{}, request);
}

future<StatusOr<google::spanner::admin::instance::v1::InstancePartition>>
InstanceAdminClient::CreateInstancePartition(
    google::spanner::admin::instance::v1::CreateInstancePartitionRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateInstancePartition(request);
}

StatusOr<google::longrunning::Operation>
InstanceAdminClient::CreateInstancePartition(
    NoAwaitTag,
    google::spanner::admin::instance::v1::CreateInstancePartitionRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateInstancePartition(NoAwaitTag{}, request);
}

future<StatusOr<google::spanner::admin::instance::v1::InstancePartition>>
InstanceAdminClient::CreateInstancePartition(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateInstancePartition(operation);
}

Status InstanceAdminClient::DeleteInstancePartition(std::string const& name,
                                                    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::spanner::admin::instance::v1::DeleteInstancePartitionRequest request;
  request.set_name(name);
  return connection_->DeleteInstancePartition(request);
}

Status InstanceAdminClient::DeleteInstancePartition(
    google::spanner::admin::instance::v1::DeleteInstancePartitionRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteInstancePartition(request);
}

future<StatusOr<google::spanner::admin::instance::v1::InstancePartition>>
InstanceAdminClient::UpdateInstancePartition(
    google::spanner::admin::instance::v1::InstancePartition const&
        instance_partition,
    google::protobuf::FieldMask const& field_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::spanner::admin::instance::v1::UpdateInstancePartitionRequest request;
  *request.mutable_instance_partition() = instance_partition;
  *request.mutable_field_mask() = field_mask;
  return connection_->UpdateInstancePartition(request);
}

StatusOr<google::longrunning::Operation>
InstanceAdminClient::UpdateInstancePartition(
    NoAwaitTag,
    google::spanner::admin::instance::v1::InstancePartition const&
        instance_partition,
    google::protobuf::FieldMask const& field_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::spanner::admin::instance::v1::UpdateInstancePartitionRequest request;
  *request.mutable_instance_partition() = instance_partition;
  *request.mutable_field_mask() = field_mask;
  return connection_->UpdateInstancePartition(NoAwaitTag{}, request);
}

future<StatusOr<google::spanner::admin::instance::v1::InstancePartition>>
InstanceAdminClient::UpdateInstancePartition(
    google::spanner::admin::instance::v1::UpdateInstancePartitionRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateInstancePartition(request);
}

StatusOr<google::longrunning::Operation>
InstanceAdminClient::UpdateInstancePartition(
    NoAwaitTag,
    google::spanner::admin::instance::v1::UpdateInstancePartitionRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateInstancePartition(NoAwaitTag{}, request);
}

future<StatusOr<google::spanner::admin::instance::v1::InstancePartition>>
InstanceAdminClient::UpdateInstancePartition(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateInstancePartition(operation);
}

StreamRange<google::longrunning::Operation>
InstanceAdminClient::ListInstancePartitionOperations(std::string const& parent,
                                                     Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::spanner::admin::instance::v1::ListInstancePartitionOperationsRequest
      request;
  request.set_parent(parent);
  return connection_->ListInstancePartitionOperations(request);
}

StreamRange<google::longrunning::Operation>
InstanceAdminClient::ListInstancePartitionOperations(
    google::spanner::admin::instance::v1::ListInstancePartitionOperationsRequest
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListInstancePartitionOperations(std::move(request));
}

future<StatusOr<google::spanner::admin::instance::v1::MoveInstanceResponse>>
InstanceAdminClient::MoveInstance(
    google::spanner::admin::instance::v1::MoveInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->MoveInstance(request);
}

StatusOr<google::longrunning::Operation> InstanceAdminClient::MoveInstance(
    NoAwaitTag,
    google::spanner::admin::instance::v1::MoveInstanceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->MoveInstance(NoAwaitTag{}, request);
}

future<StatusOr<google::spanner::admin::instance::v1::MoveInstanceResponse>>
InstanceAdminClient::MoveInstance(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->MoveInstance(operation);
}

StreamRange<google::longrunning::Operation> InstanceAdminClient::ListOperations(
    std::string const& name, std::string const& filter, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::ListOperationsRequest request;
  request.set_name(name);
  request.set_filter(filter);
  return connection_->ListOperations(request);
}

StreamRange<google::longrunning::Operation> InstanceAdminClient::ListOperations(
    google::longrunning::ListOperationsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListOperations(std::move(request));
}

StatusOr<google::longrunning::Operation> InstanceAdminClient::GetOperation(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::GetOperationRequest request;
  request.set_name(name);
  return connection_->GetOperation(request);
}

StatusOr<google::longrunning::Operation> InstanceAdminClient::GetOperation(
    google::longrunning::GetOperationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetOperation(request);
}

Status InstanceAdminClient::DeleteOperation(std::string const& name,
                                            Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::DeleteOperationRequest request;
  request.set_name(name);
  return connection_->DeleteOperation(request);
}

Status InstanceAdminClient::DeleteOperation(
    google::longrunning::DeleteOperationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteOperation(request);
}

Status InstanceAdminClient::CancelOperation(std::string const& name,
                                            Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::CancelOperationRequest request;
  request.set_name(name);
  return connection_->CancelOperation(request);
}

Status InstanceAdminClient::CancelOperation(
    google::longrunning::CancelOperationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CancelOperation(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace spanner_admin
}  // namespace cloud
}  // namespace google
