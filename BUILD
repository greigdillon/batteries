cc_library(
  name = "grpc_clang_13",  
  hdrs = glob(["include/**"]),
  srcs = glob(["lib/**"]),
  includes = ["include","include/objectbox"],
  copts = ["-fpic",],
  linkopts = ["-lpthread","-ldl"],
  visibility = ["//visibility:public"],
)

cc_binary(
  name = "main",
  deps = [":grpc_clang_13"],
  srcs = ["main.cpp"],
)

cc_test(
  name = "test",
  deps = [":grpc_clang_13"],
  srcs = ["test.cpp"],
)