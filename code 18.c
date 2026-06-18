// ============================================================================
// Title: Summer Vacation Self Learning Assignments - Day 18 (Sorting & Searching)
// Company Information: Amazon, Deloitte, Capgemini, TCS, Infosys, Wipro
// ============================================================================
#include <stdio.h>

// --- FUNCTIONS FOR EACH ASSIGNMENT ---

// Q69: Write a program to Bubble sort.
void solveQ69() {
    int n;
    printf("\n--- Q69: Bubble Sort (Ascending Order) ---\n");
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Bubble Sort Algorithm: Repeatedly swap adjacent elements if they are in wrong order
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array using Bubble Sort: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Q70: Write a program to Selection sort.
void solveQ70() {
    int n;
    printf("\n--- Q70: Selection Sort (Ascending Order) ---\n");
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Selection Sort Algorithm: Find the minimum element from unsorted part and put it at beginning
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j; // Track the index of minimum element
            }
        }
        // Swap the found minimum element with the first element of unsorted part
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }

    printf("Sorted array using Selection Sort: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Q71: Write a program to Binary search.
void solveQ71() {
    int n, target, foundIndex = -1;
    printf("\n--- Q71: Binary Search (Requires sorted array) ---\n");
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements in SORTED order (Ascending):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &target);

    int low = 0, high = n - 1;

    // Binary Search Algorithm: Divide and conquer search strategy
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            foundIndex = mid; // Element found
            break;
        }
        else if (arr[mid] < target) {
            low = mid + 1; // Target is in the right half
        }
        else {
            high = mid - 1; // Target is in the left half
        }
    }

    if (foundIndex != -1) {
        printf("Element %d found at index position: %d\n", target, foundIndex);
    } else {
        printf("Element %d is NOT present in the array.\n", target);
    }
}

// Q72: Write a program to Sort array in descending order.
void solveQ72() {
    int n;
    printf("\n--- Q72: Sort Array in Descending Order ---\n");
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sorting in descending order using simple bubble sort modification
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) { // Change sign to '<' for descending order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Array sorted in Descending Order: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


// --- MAIN FUNCTION ---
int main() {
    int choice;

    printf("==================================================\n");
    printf("        DAY 18 ASSIGNMENTS (MENU DRIVEN)          \n");
    printf("==================================================\n");
    printf("69. Run Q69 (Bubble Sort)\n");
    printf("70. Run Q70 (Selection Sort)\n");
    printf("71. Run Q71 (Binary Search)\n");
    printf("72. Run Q72 (Sort Array in Descending Order)\n");
    printf("==================================================\n");
    printf("Select a program to run (69-72): ");
    scanf("%d", &choice);

    switch(choice) {
        case 69: solveQ69(); break;
        case 70: solveQ70(); break;
        case 71: solveQ71(); break;
        case 72: solveQ72(); break;
        default: printf("Invalid choice! Please select a number between 69 and 72.\n");
    }

    return 0;
}