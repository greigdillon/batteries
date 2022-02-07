This is the headers for grpc built with clang_13 for use with bazel.

Use this in build file

    :grpc_clang_13

This release includes -

GRPC & Protobuf

Flatbuffers

Abseil

GTest/GMock

Objectbox


In .bazelrc file add

     build --repo_env=CC=clang-13 --action_env=BAZELCXX_OPTS="-std=c++20:-w:-lpthread"
