# Dockpost

## So what is Dockpost?

Dockpost is aimed to be an experimental programming language which can compile quickly and execute fast. Dockpost will use a C-style syntax with slight differences. And will hope to see its own standard library.

## Dependancies

* GCC (12)
* CMake 3.22
* Make 4.3

## Compiling Dockpost from source

Dockpost is compiled using cmake.

```bash
#!/bin/bash
mkdir -p build
cd build
cmake ..
make 
cd ..
cp build/dockpost  ./
rm -rf build
```
