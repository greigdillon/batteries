This is the headers for grpc built with clang_13 for use with bazel.

Use this in build file

    :batteries

Batteries include pre-built libraries:

GRPC & Protobuf

Flatbuffers

Abseil

GTest/GMock

Objectbox


In .bazelrc file add

     build --repo_env=CC=clang-13 --action_env=BAZELCXX_OPTS="-std=c++20:-w:-lpthread"


### To Add new library.        
    0) Build 
    
    1) Strip everything except .o files in bazel-out/kb-fastbuild/external (TODO: Write script to automate)

    2) Copy folder into lib/_all. (TODO: Write script to automate)
    3) Create tar.xz file. (TODO: Write script to automate)
    4) Upload to github. (TODO: Write script to automate)

    TODO: Create Jenkins Pipeline to streamline the process and make it easier to release builds.