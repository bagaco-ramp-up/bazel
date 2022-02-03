# Bazel query

## deps

```
bazel query "deps(binary_2)" --notool_deps
```

## rdeps

```
bazel query "rdeps(//..., //sub_package:sub_target1)" --notool_deps
```

## allpaths

```
bazel query "allpaths(//:binary_4, //sub_package:sub_target1)" --notool_deps --output graph | dot -Tsvg > /workspaces/bazel/3_query/deps.svg
```
