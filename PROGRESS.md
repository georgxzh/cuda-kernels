# Progress

## Status
Phase 0 (C crash course) underway. Step 1 done, Step 2 started.

## Completed
- Phase 0 / 00-c-basics — Step 1 (`01_pointers_arrays.c`): stack array,
  pointer arithmetic `*(p + i)`, malloc + NULL check, free. Output correct
  (sums = 285, addresses 4 bytes apart). Stepped through the fill loop in
  gdb. Check questions answered correctly; `(void*)` casts added for `%p`.

## In progress
- Phase 0 / 00-c-basics — Step 2 (`02_heap_functions.c`): heap arrays
  passed to functions, memcpy, flat row-major 2D matrix, PASS/FAIL check.
  Skeleton given, waiting on attempt.

## Struggled with
- (nothing notable yet)

## Up next
- Phase 0 Step 2: malloc/free exercise, then move to Phase 1 /
  01-vector-add.

## Notes for next session
- Local compiler is WSL Ubuntu gcc 15.2 (user compiles in a WSL shell;
  `gcc -Wall -Wextra -g -O0 file.c -o file.out`). No local NVIDIA GPU.
  GPU work runs on Colab T4 (`-arch=sm_75`).
