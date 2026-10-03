# Progress

## Status
Phase 0 (C crash course) underway. Step 1 done.

## Completed
- Phase 0 / 00-c-basics — Step 1 (`01_pointers_arrays.c`): stack array,
  pointer arithmetic `*(p + i)`, malloc + NULL check, free. Output correct
  (sums = 285, addresses 4 bytes apart). Stepped through the fill loop in
  gdb.

## In progress
- Step 1 loose ends (small, do before Step 2):
  - Answer the two check questions in own words: (Q1) why consecutive
    addresses are 4 bytes apart, (Q2) what happens using `heap_arr`
    after `free`.
  - Add `(void*)` casts to the three `%p` printf args (TODO 2 asked for
    it; `-Wpedantic` warns without them).

## Struggled with
- (nothing notable yet)

## Up next
- Phase 0 Step 2: malloc/free exercise, then move to Phase 1 /
  01-vector-add.

## Notes for next session
- Local compiler is WSL Ubuntu gcc 15.2 (user compiles in a WSL shell;
  `gcc -Wall -Wextra -g -O0 file.c -o file.out`). No local NVIDIA GPU.
  GPU work runs on Colab T4 (`-arch=sm_75`).
