cc_library(
  name = "lib",  
  hdrs = glob(["include/**"])+["hello.h"],
  srcs = glob(["lib/**"])+["hello.cpp"],
  includes = ["include"],
  copts = ["-fpic",],
  linkopts = ["-lpthread","-ldl"],
)

cc_binary(
  name = "main",
  deps = [":lib"],
  srcs = ["main.cpp"],
)

cc_test(
  name = "test",
  deps = [":lib"],
  srcs = ["test.cpp"],
)