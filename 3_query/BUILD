py_binary(
    name = "binary_1",
    srcs = ["main.py"],
)

py_binary(
    name = "binary_2",
    srcs = ["main.py"],
    deps = ["//:library_1"],
)

py_binary(
    name = "binary_3",
    srcs = ["main.py"],
    deps = ["//:library_1"],
)

py_binary(
    name = "binary_4",
    srcs = ["main.py"],
    deps = ["//:binary_5"],
)

py_binary(
    name = "binary_5",
    srcs = ["main.py"],
    deps = ["//sub_package:sub_target1"],
)

py_library(
    name = "library_1",
    srcs = ["main.py"],
)
