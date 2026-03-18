#include <stdio.h>
#include <stdlib.h>

/* NAME: Rishit Agarwal
   REG NO: AP25110070245
*/

// --- TASK 1: LINEAR SEARCH ---
// Logic: Checks each element of the array one by one until a match is found.
void task1_linear_search() {
    int n, search, found = 0;
    int array[100];

    printf("\n--- Task 1: Linear Search ---\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter value to find: ");
    scanf("%d", &search);

    for (int i = 0; i < n; i++) {
        if (array[i] == search) {
            printf("%d is present at index %d.\n", search, i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("%d is not present in the array.\n", search);
    }
}

// --- TASK 2: BINARY SEARCH ---
// Logic: Divides the search space in half repeatedly. Requires a sorted array.
void task2_binary_search() {
    int n, search, low, high, mid, found = 0;
    int array[100];

    printf("\n--- Task 2: Binary Search ---\n");
    printf("Enter number of elements (must be sorted): ");
    scanf("%d", &n);

    printf("Enter %d sorted integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter value to find: ");
    scanf("%d", &search);

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = low + (high - low) / 2; // Midpoint to avoid overflow

        if (array[mid] == search) {
            printf("%d found at index %d.\n", search, mid);
            found = 1;
            break;
        } 
        else if (array[mid] < search) {
            low = mid + 1;
        } 
        else {
            high = mid - 1;
        }
    }

    if (!found) {
        printf("Not found! %d is not in the array.\n", search);
    }
}

int main() {
    task1_linear_search();
    task2_binary_search();
    
    return 0;
}