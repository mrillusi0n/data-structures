#include <stdio.h>

void print_arr(int *arr, int size) {
    printf("[");

    if (size > 0)
        printf("%d", arr[0]);

    for (int i = 1; i < size - 1; i++)
        printf(", %d", arr[i]);

    printf("]\n");
}