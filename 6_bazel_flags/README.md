## Create a bazelrc file

- [ ] Export profiles

```bash
bazel test //... --profile=/workspaces/bazel/6_bazel_flags/profile.json
```

- [ ] Export explain

bazel test //... --define dep_installer=pip --explain=/workspaces/bazel/6_bazel_flags/explain.txt

### Create multiple configs

- [x] Create two config definitions: one called pip and one called poetry. In each config the define should be set accordingly for `build`.
- [x] Set default flags: profile and explain, that are given to every bazel command irregardless of config.
- [ ] Set the flag `--nocache_test_results` for the `test` command.
- [ ] Run the two commands with the appended `--config` options.
