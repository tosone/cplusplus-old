# CPlusPlus Learning [![Build Status](https://travis-ci.org/tosone/cplusplus.svg?branch=master)](https://travis-ci.org/tosone/cplusplus)

### 初始化依赖

- `git submodule update --init --recursive`

### 更新依赖

- `git submodule foreach git pull origin master`

### 删除依赖

- `git submodule deinit path_submodule`
- `rm -rf path_submodule`
- `rm -rf .git/modules/path_submodules`
- Remove `.gitmodules` manual
