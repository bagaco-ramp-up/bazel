load("@requirements//:requirements.bzl", "requirement")
load("@poetry//:dependencies.bzl", "dependency")

py_library(
    name = "comment_library",
    srcs = ["comment_on_pr.py"],
    visibility = [
        "//:__pkg__",
        "//test:__pkg__",
    ],
    deps = select({
        ":dep_installer_pip": [requirement("requests")],
        ":dep_installer_poetry": [dependency("requests")],
    }),
)

config_setting(
    name = "dep_installer_pip",
    define_values = {"dep_installer": "pip"},
)

config_setting(
    name = "dep_installer_poetry",
    define_values = {"dep_installer": "poetry"},
)
