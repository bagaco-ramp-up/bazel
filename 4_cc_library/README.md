# Bazel built-in CC rules

## Introduction

The purpose of this exercise is to show usage of CC Bazel built-in rules. Exercise covers building and testing small C++ application using CC Bazel rules with host OS toolchain.

With this exercise the following rules are covered:

1.	[cc_library()](https://docs.bazel.build/versions/master/be/c-cpp.html#cc_library)
2.	[cc_binary()](https://docs.bazel.build/versions/master/be/c-cpp.html#cc_binary)
3.  [cc_test()](https://docs.bazel.build/versions/master/be/c-cpp.html#cc_test)

> **NOTE**: This exercise doesn't cover CC Toolchain setup.

## Project info

The project is composed of 3 C++ modules:
1.	base
2.	data
3.	user

Between these modules there is direct dependency:

**user --> data --> base**

These modules are using only stdc++ library features so there are no special requirements from that perspective.


## Acceptance criteria

1. The `cc_application` executable can be run on the host OS with Bazel command `bazel run //src:cc_application`. The output of the run has to be:

```
User: user@workshop
User ID: 2222
This is a test build: exercise-1
```

2. Use `bazel query` to output a visual dependency graph.

```bash
bazel query
```

3. The `cc_test` target can be executed with Bazel command `bazel test //src:cc_test`. The output of the test has to have:

```
//src:cc_test                                                            PASSED in 0.1s

Executed 1 out of 1 test: 1 test passes.
```


```
bazel query "allpaths(//:cc_binary, //src/base:cc_base)" --notool_deps --output graph | dot -Tsvg > /workspaces/bazel/4_cc_library/deps.svg
```


```
bazel query "rdeps(//..., //src/base:cc_base)" --notool_deps
```
