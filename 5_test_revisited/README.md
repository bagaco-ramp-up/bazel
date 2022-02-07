# Goals

## py_binary

Run the main binary via:

```bash
bazel run //src:main -- 15 "hello world" "my_token"
```

## py_test

Run the test via:

```bash
bazel test //...
```

## Use poetry instead of pip

- [x] Create poetry toml and lock file.
- [x] Declare rules_poetry deps => https://github.com/soniaai/rules_poetry
- [x] Switch target to use the new rule

## Use a config flag to switch between the two dependency installers

- [ ] `bazel test //... --define dep_installer=pip`
- [ ] https://docs.bazel.build/versions/main/configurable-attributes.html
- [ ] https://docs.bazel.build/versions/main/configurable-attributes.html#why-doesnt-select-work-with-bind
