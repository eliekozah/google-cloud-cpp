#include <iostream>
#include <gtest/gtest.h>
#include <google/cloud/storage/client.h>
#include <map>
#include <unordered_map> // Required for std::unordered_multimap
#include <grpcpp/grpcpp.h>
#include <grpcpp/client_context.h>

// Include the common_options.h file
#include "google/cloud/storage/grpc_plugin.h"
#include "google/cloud/storage/options.h"
#include "google/cloud/common_options.h"
#include "google/cloud/options.h"

namespace gcs = google::cloud::storage;
namespace gc = google::cloud;

// TEST(CustomHeadersTest, JSONRequest) {

//     auto client = gcs::Client(
//         gc::Options{}
//         .set<gc::CustomHeadersOption>({{"foobar", "bazbiz"}, {"c", "d"}})
//         .set<gc::UserProjectOption>("storage-sdks-kozah")
//     );

//     auto response = client.ListObjects("kozah_bucket");

//     ASSERT_TRUE(response.begin() != response.end()) << "No objects found or error listing objects";

//     for (auto const& object_metadata : response) {
//         if (object_metadata.ok()) {
//             std::cout << "HI " << object_metadata->name() << std::endl;
//         } else {
//             std::cerr << "Error retrieving object metadata: " << object_metadata.status() << std::endl;
//         }
//     }
// }

TEST(CustomHeadersTest, Request) {

    auto client = gcs::Client(
        gc::Options{}
        .set<gc::UserProjectOption>("abc")
        .set<gc::CustomHeadersOption>({{"a", "b"}, {"c", "d"}})
    );
    //        .set<gc::CustomHeadersOption>({{"foobar", "bazbiz"}, {"c", "d"}})
    auto response = client.ListObjects(
        "kozah_bucket",
        gc::Options{}
        .set<gc::UserProjectOption>("storage-sdks-kozah")
        .set<gc::CustomHeadersOption>({{"e", "f"}, {"g", "h"}})
    );

    ASSERT_TRUE(response.begin() != response.end()) << "No objects found or error listing objects";

    for (auto const& object_metadata : response) {
        if (object_metadata.ok()) {
            std::cout << "HI6 " << object_metadata->name() << std::endl;
        } else {
            std::cerr << "Error retrieving object metadata: " << object_metadata.status() << std::endl;
        }
    }
}
