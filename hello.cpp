#include <grpcpp/support/status.h>
#include <memory>
#include "grpc/grpc.h"
#include <iostream>
#include "absl/strings/substitute.h"

void sayHello(){
  std::cout << "Hello" << grpc::Status::OK.error_code();
  std::cout << absl::Substitute("Okay $0","okay") << std::endl;
}


