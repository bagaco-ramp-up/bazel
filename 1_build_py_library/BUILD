py_binary(
    name = "my_binary",
    srcs = ["main.py"],
    main = "main.py",
    deps = ["//:my_library"],
)

py_library(
    name = "my_library",
    srcs = ["sub_package/is_week_day.py"],
    imports = ["./sub_package"],
)
