#include <stdio.h>

#define N_ELEMENTS(arr) (sizeof(arr) / sizeof(*(arr)))

int min_element(int *arr, int size)
{
    int min = *arr;

    int *it;
    for (it = arr + 1; it < arr + size; ++it) {
        if (*it < min) {
            min = *it;
        }
    }

    return min;
}

void print_array(int *arr, int size)
{
    printf("Array: ");
    int i;
    for (i = 0; i < 7; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {9,5,4,3,2,1,1};
    const int min = min_element(arr, N_ELEMENTS(arr));
    print_array(arr, N_ELEMENTS(arr));
    printf("Min element: %2d\n", min);

    return 0;
}
