#include <stdio.h>

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) return mid;
        else if (arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main() {
    int n, key;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the sorted array: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter the number to search: ");
    scanf("%d", &key);

    int result = binarySearch(arr, n, key);
    if (result != -1) printf("Number found at index %d\n", result);
    else printf("Number not found\n");

    return 0;
}
