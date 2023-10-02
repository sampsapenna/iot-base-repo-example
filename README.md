# Pico SDK example using the submodule approach

## Getting started
Repository contains `pico-sdk` as a submodule. After cloning the
repository, run the following:

```
git submodule update --init
git submodule foreach "git submodule update --init"
```

## Usage
```
mkdir build
cd build
cmake ..
make
```
