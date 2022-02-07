cc_library(
  name = "lib",  
  hdrs = glob(["include/**"])+["hello.h"],
  srcs = glob(["lib/**"])+["hello.cpp"],
  includes = ["include","include/objectbox"],
  copts = ["-fpic",],
  linkopts = ["-lpthread","-ldl"],
  visibility = ["//visibility:public"],
)

cc_binary(
  name = "main",
  deps = ["//models:objects"],
  srcs = ["main.cpp"],
)

cc_test(
  name = "test",
  deps = ["//models:objects"],
  srcs = ["test.cpp"],
)