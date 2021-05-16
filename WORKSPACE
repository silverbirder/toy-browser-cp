new_local_repository(
    name = "sfml",
    path = "/usr/local/Cellar/sfml/2.5.1_1",
    build_file = "./src/third_party/sfml.BUILD",
)

load(
    "@bazel_tools//tools/build_defs/repo:git.bzl",
    "git_repository",
    "new_git_repository"
)

git_repository(
 name = "com_google_absl",
 remote = "https://github.com/abseil/abseil-cpp.git",
 branch = "master"
)

git_repository(
    name = "com_github_gflags_gflags",
    remote = "https://github.com/gflags/gflags.git",
    branch = "master"
)
