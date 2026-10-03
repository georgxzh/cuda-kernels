# 00-c-basics

Plain C, compiled locally (no GPU involved). Goal: get comfortable with
pointers, arrays, memory layout, and malloc/free before any CUDA — CUDA C++
is just C with extra keywords for "run this on the GPU," and almost every
mistake beginners make on the GPU is actually a pointer/memory mistake they
hadn't learned to see yet.

## How to compile (WSL Ubuntu)

```
cd /mnt/c/Users/georg/Documents/cuda-kernels/00-c-basics
gcc -Wall -Wextra -g -O0 01_pointers_arrays.c -o 01_pointers_arrays.out
./01_pointers_arrays.out
```

`-g -O0` keeps debug info and disables optimization so `gdb` can step
through the code line by line (`gdb ./01_pointers_arrays.out`).

## Exercises

1. `01_pointers_arrays.c` — pointers, array/pointer equivalence, memory layout, malloc/free
