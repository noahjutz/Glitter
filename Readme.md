# Glitter Fork

For more information about Glitter, see https://github.com/Polytonic/Glitter.

## Build

```sh
cmake -B Build -DCMAKE_EXPORT_COMPILE_COMMANDS=ON -DASSIMP_BUILD_ZLIB=ON .
```

This creates compile_commands.json with `CMAKE_EXPORT_COMPILE_COMMANDS` and fixes a compilation error ([issue](https://github.com/assimp/assimp/issues/6542)) using `ASSIMP_BUILD_ZLIB`.
