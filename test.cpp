#include "include/absl/strings/substitute.h"
#include "gtest/gtest.h"
#include "grpc/grpc.h"


TEST(Batteries, VersionNumbers){

  std::cout << absl::Substitute("Clang-13\n");
  std::cout << absl::Substitute("Grpc Version $0\n",grpc_version_string());
  std::cout << absl::Substitute("Proto Version $0\n",3);
  std::cout << absl::Substitute("Clang-13\n");
  std::cout << absl::Substitute("Clang-13\n");
  std::cout << absl::Substitute("Clang-13\n");
  std::cout << absl::Substitute("Clang-13\n");



}