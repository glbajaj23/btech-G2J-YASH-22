// ============================================================================
// Title: Summer Vacation Self Learning Assignments - Day 15 (Array Manipulations)
// Company Information: Amazon, Deloitte, Capgemini, TCS, Infosys, Wipro
// ============================================================================
#include <stdio.h>

// --- FUNCTIONS FOR EACH ASSIGNMENT ---

// Q57: Write a program to Reverse array.
void solveQ57() {
    int n;
    printf("\n--- Q57: Reverse Array ---\n");
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Swapping elements from start and end to reverse the array in-place
    int start = 0, end = n - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    printf("Reversed array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Q58: Write a program to Rotate array left by one position.
void solveQ58() {
    int n;
    printf("\n--- Q58: Rotate Array Left ---\n");
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n <= 0) return;

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Store the first element in a temporary variable
    int first = arr[0];

    // Shift all elements to the left by one position
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Put the first element at the last position
    arr[n - 1] = first;

    printf("Array after Left Rotation: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Q59: Write a program to Rotate array right by one position.
void solveQ59() {
    int n;
    printf("\n--- Q59: Rotate Array Right ---\n");
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n <= 0) return;

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Store the last element in a temporary variable
    int last = arr[n - 1];

    // Shift all elements to the right by one position
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    // Put the last element at the first position
    arr[0] = last;

    printf("Array after Right Rotation: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Q60: Write a program to Move zeroes to end.
void solveQ60() {
    int n;
    printf("\n--- Q60: Move Zeroes to End ---\n");
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Maintain a count of non-zero elements
    int count = 0;

    // If element is non-zero, replace the element at index 'count' with it
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count] = arr[i];
            count++;
        }
    }

    // Fill the remaining spaces with zeroes
    while (count < n) {
        arr[count] = 0;
        count++;
    }

    printf("Array after moving zeroes to end: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


// --- MAIN FUNCTION ---
int main() {
    int choice;

    printf("==================================================\n");
    printf("        DAY 15 ASSIGNMENTS (MENU DRIVEN)          \n");
    printf("==================================================\n");
    printf("57. Run Q57 (Reverse Array)\n");
    printf("58. Run Q58 (Rotate Array Left)\n");
    printf("59. Run Q59 (Rotate Array Right)\n");
    printf("60. Run Q60 (Move Zeroes to End)\n");
    printf("==================================================\n");
    printf("Select a program to run (57-60): ");
    scanf("%d", &choice);

    switch(choice) {
        case 57: solveQ57(); break;
        case 58: solveQ58(); break;
        case 59: solveQ59(); break;
        case 60: solveQ60(); break;
        default: printf("Invalid choice! Please select a number between 57 and 60.\n");
    }

    return 0;
}