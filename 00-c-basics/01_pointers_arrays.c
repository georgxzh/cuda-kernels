// 00-c-basics / Exercise 1: pointers, arrays, memory layout, malloc/free
//
// Goal: see that an array is just a block of contiguous memory, that
// `arr[i]` and pointer arithmetic are the same operation, and that stack
// and heap memory behave differently (heap must be freed).
//
// Fill in the TODOs. Nothing here needs a GPU.

#include <stdio.h>
#include <stdlib.h>

#define N 10

int main(void) {
    // --- Part A: a stack array ---
    int arr[N];

    // TODO 1: fill arr[i] with i*i for i = 0..N-1
    for (int i = 0; i < N; i++){
        arr[i] = i*i;
    }

    // TODO 2: print each element using arr[i] syntax, alongside its address
    //         using &arr[i]. Use "%d" for the value and "%p" for the address
    //         (cast the address to (void*) when printing with %p).
    //         Look at the addresses: what do you notice about the gap
    //         between consecutive elements?

    for (int i = 0; i < N; i++){
        printf("arr[%d] = %d, address: %p\n", i, arr[i], (void*)&arr[i]);
    }

    // --- Part B: the same array, accessed through a pointer ---
    int *p = arr; // an array "decays" to a pointer to its first element

    // TODO 3: sum all N elements using *(p + i) instead of arr[i], store in
    //         a variable `sum_stack`, and print it.

    int sum_stack = 0;
    for (int i = 0; i < N; i++){
        sum_stack += *(p + i);
    }
    printf("sum_stack = %d\n", sum_stack);

    // --- Part C: a heap array ---
    // TODO 4: use malloc to allocate an array of N ints on the heap, called
    //         `heap_arr`. Check if malloc returned NULL (it can fail) and
    //         bail out with a message if so.

    int *heap_arr = malloc(N * sizeof(int));
    if (heap_arr == NULL){
        fprintf(stderr, "Failed to allocate memory\n");
        return 1;
    }

    // TODO 5: fill heap_arr with the same values as arr (i*i), then sum it
    //         (indexing or pointer arithmetic, your choice) into
    //         `sum_heap`, and print it.

    for (int i = 0; i < N; i++){
        heap_arr[i] = i*i;
    }
    int sum_heap = 0;
    for (int i = 0; i < N; i++){
        sum_heap += *(heap_arr + i);
    }
    printf("sum_heap = %d\n", sum_heap);

    // TODO 6: print one address from `arr` and one address from `heap_arr`.
    //         Are they in similar ranges or very different ones?

    printf("address of arr[0] = %p\n", (void*)&arr[0]);
    printf("address of heap_arr[0] = %p\n", (void*)heap_arr);

    // TODO 7: free heap_arr. (What would happen if you used it after this?
    //         You don't need to demonstrate that — just know the answer.)

    free(heap_arr);

    return 0;
}
