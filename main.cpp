#include "absl/strings/substitute.h"
#include "absl/memory/memory.h"


int main(){

  absl::make_unique<int>(8);
  absl::Substitute("OKA");

}