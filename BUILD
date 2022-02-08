cc_library(
  name = "batteries",  
  hdrs = glob(["include/**"]),
  srcs = glob(["lib/**"]),
  includes = ["include","include/objectbox"],
  copts = ["-fpic",],
  linkopts = ["-lpthread","-ldl"],
  visibility = ["//visibility:public"],    
)

cc_test(
  name = "test",
  deps = [":batteries"],
  srcs = ["test.cpp"],
)

cc_binary(
  name = "main",
  deps = [":batteries"],
  srcs = ["main.cpp"],
)