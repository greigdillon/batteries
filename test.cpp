#include <iostream>
#include "gtest/gtest.h"
#include "objectbox/objectbox.h"
#include "absl/memory/memory.h"

TEST(Tesing,Libraries){
  std::cout << obx_version_string() << std::endl;

  auto i = absl::make_unique<int>(9);
  std::cout << *i.get() << std::endl;

  EXPECT_EQ(3, 1);
}