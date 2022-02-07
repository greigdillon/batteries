cc_library(
  name = "grpc_clang_13",  
  hdrs = glob(["include/**"]),
  srcs = glob(["lib/**"]),
  includes = ["include","include/objectbox"],
  copts = ["-fpic",],
  linkopts = ["-lpthread","-ldl"],
  visibility = ["//visibility:public"],
)