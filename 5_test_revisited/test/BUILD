py_test(
    name = "test_comment_on_pr",
    srcs = ["test_comment_on_pr.py"],
    data = [
        "data/response_mutation.json",
        "data/response_pr.json",
    ],
    deps = [
        "//src:comment_library",
        "//test:mock_response",
    ],
)

py_library(
    name = "mock_response",
    srcs = ["mock_response.py"],
)
