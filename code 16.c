// ============================================================================
// Title: Summer Vacation Self Learning Assignments - Day 16 (Advanced Arrays)
// Company Information: Amazon, Deloitte, Capgemini, TCS, Infosys, Wipro
// ============================================================================
#include <stdio.h>

// --- FUNCTIONS FOR EACH ASSIGNMENT ---

// Q61: Write a program to Find missing number in array.
void solveQ61() {
    int n;
    printf("\n--- Q61: Find Missing Number in Array ---\n");
    printf("Enter the number of elements present in array (N-1): ");
    scanf("%d", &n);

    // Actual total numbers should be N (from 1 to N)
    int totalNumbers = n + 1;
    int arr[n];

    printf("Enter %d elements (distinct elements from 1 to %d with one missing):\n", n, totalNumbers);
    int currentSum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        currentSum += arr[i]; // Sum of elements present in the array
    }

    // Formula to find sum of first N natural numbers: (N * (N + 1)) / 2
    int expectedSum = (totalNumbers * (totalNumbers + 1)) / 2;

    // Missing number is the difference between expected sum and actual sum
    int missingNumber = expectedSum - currentSum;

    printf("The missing number in the array is: %d\n", missingNumber);
}

// Q62: Write a program to Find maximum frequency element.
void solveQ62() {
    int n;
    printf("\n--- Q62: Find Maximum Frequency Element ---\n");
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxElement = arr[0], maxCount = 0;

    // Nested loops to count frequency of each element
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        // Update max frequency element found so far
        if (count > maxCount) {
            maxCount = count;
            maxElement = arr[i];
        }
    }

    printf("Element with maximum frequency is: %d (Appears %d times)\n", maxElement, maxCount);
}

// Q63: Write a program to Find pair with given sum.
void solveQ63() {
    int n, targetSum, pairFound = 0;
    printf("\n--- Q63: Find Pair with Given Sum ---\n");
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target sum to find a pair: ");
    scanf("%d", &targetSum);

    // Nested loops to check all possible pairs
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == targetSum) {
                printf("Pair found: (%d, %d) equals sum %d\n", arr[i], arr[j], targetSum);
                pairFound = 1;
                break; // Break inner loop if one pair for this index is tracked
            }
        }
        if (pairFound) break; // Break outer loop if you only need the first matching pair
    }

    if (!pairFound) {
        printf("No pair found with the sum %d in the array.\n", targetSum);
    }
}

// Q64: Write a program to Remove duplicates from array.
void solveQ64() {
    int n;
    printf("\n--- Q64: Remove Duplicates from Array ---\n");
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int uniqueSize = n;

    // Loops to find duplicates and shift remaining elements left
    for (int i = 0; i < uniqueSize; i++) {
        for (int j = i + 1; j < uniqueSize; j++) {
            if (arr[i] == arr[j]) {
                // Shift elements left to overwrite the duplicate element
                for (int k = j; k < uniqueSize - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                uniqueSize--; // Decrease array size after removal
                j--;         // Adjust the pointer to check the shifted element
            }
        }
    }

    printf("Array after removing duplicates: ");
    for (int i = 0; i < uniqueSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


// --- MAIN FUNCTION ---
int main() {
    int choice;

    printf("==================================================\n");
    printf("        DAY 16 ASSIGNMENTS (MENU DRIVEN)          \n");
    printf("==================================================\n");
    printf("61. Run Q61 (Find Missing Number)\n");
    printf("62. Run Q62 (Maximum Frequency Element)\n");
    printf("63. Run Q63 (Find Pair with Given Sum)\n");
    printf("64. Run Q64 (Remove Duplicates from Array)\n");
    printf("==================================================\n");
    printf("Select a program to run (61-64): ");
    scanf("%d", &choice);

    switch(choice) {
        case 61: solveQ61(); break;
        case 62: solveQ62(); break;
        case 63: solveQ63(); break;
        case 64: solveQ64(); break;
        default: printf("Invalid choice! Please select a number between 61 and 64.\n");
    }

    return 0;
}