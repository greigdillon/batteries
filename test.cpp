#include "include/Eigen/src/Core/util/Macros.h"
#include "include/absl/base/config.h"
#include "include/absl/strings/substitute.h"
#include "gtest/gtest.h"
#include "grpc/grpc.h"
#include "include/flatbuffers/base.h"
#include "google/protobuf/port_def.inc"
#include "flatbuffers/flatbuffers.h"
#include "objectbox/objectbox.h"
#include "boost/version.hpp"
#include "Eigen/Eigen"

TEST(Batteries, VersionNumbers){

  std::cout << absl::Substitute("Clang-13\n\n");
  
  std::cout << absl::Substitute("Grpc Version\n");
  std::cout << absl::Substitute("$0\n\n",grpc_version_string());

  std::cout << absl::Substitute("Proto Version\n");
  std::cout << absl::Substitute("$0\n\n",PROTOBUF_VERSION);

  std::cout << absl::Substitute("Flatbuffers Version\n");
  std::cout << absl::Substitute("$0.$1.$2\n\n",FLATBUFFERS_VERSION_MAJOR,FLATBUFFERS_VERSION_MINOR,FLATBUFFERS_VERSION_REVISION);
  
  std::cout << absl::Substitute("Abseil Version\n");
  std::cout << absl::Substitute("$0\n\n",ABSL_LTS_RELEASE_VERSION);
  
  std::cout << absl::Substitute("GTest Version\n");
  std::cout << absl::Substitute("$0\n\n","1.11.0");

  std::cout << absl::Substitute("Object Box\n");
  std::cout << absl::Substitute("$0\n\n",obx_version_string());

  std::cout << absl::Substitute("Boost\n");
  std::cout << absl::Substitute("$0\n\n",BOOST_LIB_VERSION);

  std::cout << absl::Substitute("Eigen\n");
  std::cout << absl::Substitute("$0.$1.$2\n\n",EIGEN_WORLD_VERSION,EIGEN_MAJOR_VERSION,EIGEN_MINOR_VERSION);


}