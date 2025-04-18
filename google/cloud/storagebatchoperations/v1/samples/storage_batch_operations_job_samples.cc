// Copyright 2025 Google LLC
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

#include "google/cloud/storagebatchoperations/v1/storage_batch_operations_client.h"
#include "google/cloud/internal/getenv.h"
#include "google/cloud/testing_util/example_driver.h"
#include <iostream>
#include <functional>
#include <string>
#include <vector>

namespace {

void CreateJob(
    google::cloud::storagebatchoperations_v1::StorageBatchOperationsClient client,
    std::vector<std::string> const& argv) {
  if (argv.size() != 2) throw google::cloud::testing_util::Usage{"create-job <parent> <job-id>"};
  //! [storage_batch_operations_create_job]
  auto const parent = argv[0];
  auto const job_id = argv[1];
  namespace storagebatch = google::cloud::storagebatchoperations_v1;
  storagebatch::Job job;  // Customize fields as needed.
  auto future = client.CreateJob(parent, job, job_id);
  auto result = future.get();
  if (!result) throw result.status();
  std::cout << "Created job: " << result->DebugString() << "\n";
  //! [storage_batch_operations_create_job]
}

void ListJobs(
    google::cloud::storagebatchoperations_v1::StorageBatchOperationsClient client,
    std::vector<std::string> const& argv) {
  if (argv.size() != 1) throw google::cloud::testing_util::Usage{"list-jobs <parent>"};
  //! [storage_batch_operations_list_jobs]
  auto const parent = argv[0];
  for (auto const& job : client.ListJobs(parent)) {
    if (!job) throw job.status();
    std::cout << job->DebugString() << "\n";
  }
  //! [storage_batch_operations_list_jobs]
}

void GetJob(
    google::cloud::storagebatchoperations_v1::StorageBatchOperationsClient client,
    std::vector<std::string> const& argv) {
  if (argv.size() != 1) throw google::cloud::testing_util::Usage{"get-job <name>"};
  //! [storage_batch_operations_get_job]
  auto const name = argv[0];
  auto job = client.GetJob(name);
  if (!job) throw job.status();
  std::cout << "Got job: " << job->DebugString() << "\n";
  //! [storage_batch_operations_get_job]
}

void CancelJob(
    google::cloud::storagebatchoperations_v1::StorageBatchOperationsClient client,
    std::vector<std::string> const& argv) {
  if (argv.size() != 1) throw google::cloud::testing_util::Usage{"cancel-job <name>"};
  //! [storage_batch_operations_cancel_job]
  auto const name = argv[0];
  auto response = client.CancelJob(name);
  if (!response) throw response.status();
  std::cout << "Cancelled job: " << response->DebugString() << "\n";
  //! [storage_batch_operations_cancel_job]
}

void DeleteJob(
    google::cloud::storagebatchoperations_v1::StorageBatchOperationsClient client,
    std::vector<std::string> const& argv) {
  if (argv.size() != 1) throw google::cloud::testing_util::Usage{"delete-job <name>"};
  //! [storage_batch_operations_delete_job]
  auto const name = argv[0];
  auto status = client.DeleteJob(name);
  if (!status.ok()) throw status;
  std::cout << "Deleted job\n";
  //! [storage_batch_operations_delete_job]
}

void AutoRun(std::vector<std::string> const& argv) {
  using examples = google::cloud::testing_util;
  if (!argv.empty()) throw examples::Usage{"auto"};
  examples::CheckEnvironmentVariablesAreSet({
    "GOOGLE_CLOUD_CPP_STORAGE_BATCH_OPERATIONS_TEST_PARENT",
    "GOOGLE_CLOUD_CPP_STORAGE_BATCH_OPERATIONS_TEST_JOB_ID"});
  auto const parent = google::cloud::internal::GetEnv(
      "GOOGLE_CLOUD_CPP_STORAGE_BATCH_OPERATIONS_TEST_PARENT").value();
  auto const job_id = google::cloud::internal::GetEnv(
      "GOOGLE_CLOUD_CPP_STORAGE_BATCH_OPERATIONS_TEST_JOB_ID").value();
  auto client = google::cloud::storagebatchoperations_v1::
    StorageBatchOperationsClient(
      google::cloud::storagebatchoperations_v1::MakeStorageBatchOperationsConnection());

  std::cout << "\nRunning CreateJob() example\n";
  CreateJob(client, {parent, job_id});
  auto const name = parent + "/jobs/" + job_id;

  std::cout << "\nRunning GetJob() example\n";
  GetJob(client, {name});

  std::cout << "\nRunning ListJobs() example\n";
  ListJobs(client, {parent});

  std::cout << "\nRunning CancelJob() example\n";
  CancelJob(client, {name});

  std::cout << "\nRunning DeleteJob() example\n";
  DeleteJob(client, {name});
}

}  // namespace

int main(int argc, char* argv[]) {
  using google::cloud::testing_util::Example;
  namespace storagebatch = google::cloud::storagebatchoperations_v1;
  auto make_entry = [](std::string name,
                       std::vector<std::string> const& arg_names,
                       std::function<void(storagebatch::StorageBatchOperationsClient,
                                          std::vector<std::string>)> cmd) {
    auto adapter = [=](std::vector<std::string> argv) {
      if ((argv.size() == 1 && argv[0] == "--help") ||
          argv.size() != arg_names.size()) {
        std::string usage = name;
        for (auto const& a : arg_names) usage += " <" + a + ">";
        throw google::cloud::testing_util::Usage{std::move(usage)};
      }
      auto client = storagebatch::StorageBatchOperationsClient(
          storagebatch::MakeStorageBatchOperationsConnection());
      cmd(client, std::move(argv));
    };
    return Example::Commands::value_type(std::move(name), adapter);
  };
  Example example({
      make_entry("create-job", {"parent", "job-id"}, CreateJob),
      make_entry("get-job", {"name"}, GetJob),
      make_entry("list-jobs", {"parent"}, ListJobs),
      make_entry("cancel-job", {"name"}, CancelJob),
      make_entry("delete-job", {"name"}, DeleteJob),
      {"auto", AutoRun},
  });
  return example.Run(argc, argv);
}
