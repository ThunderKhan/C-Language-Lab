#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 4;

    int low = 0;
    int high = size - 1;
    int found = 0;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            printf("The target %d is at index %d\n", target, mid);
            found = 1;
            break;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (!found) {
        printf("Target not found!\n");
    }

    return 0;
}
