// int *arr = malloc(10 * sizeof(int));
// arr[10] = 5;
// free(arr);


#include <stdio.h>
#include <stdlib.h>

int main() {

    int *arr = malloc(10 * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    arr[9] = 5;
    printf("Value at arr[9]: %d\n", arr[9]);

    free(arr);
    return 0;
}
