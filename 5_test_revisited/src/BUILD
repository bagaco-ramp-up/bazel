load("@requirements//:requirements.bzl", "requirement")

py_library(
    name = "comment_library",
    srcs = ["comment_on_pr.py"],
    visibility = [
        "//:__pkg__",
        "//test:__pkg__",
    ],
    deps = [requirement("requests")],
)
