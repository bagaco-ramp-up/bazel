py_library(
    name = "sub_target1",
    srcs = ["main.py"],
)

py_binary(
    name = "binary_2",
    srcs = ["main.py"],
    deps = ["//sub_package:sub_target1"],
)
