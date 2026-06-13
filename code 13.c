// ============================================================================
// Title: Summer Vacation Self Learning Assignments - Day 13 (Arrays Basics)
// Company Information: Amazon, Deloitte, Capgemini, TCS, Infosys, Wipro
// ============================================================================
#include <stdio.h>

// --- FUNCTIONS FOR EACH ASSIGNMENT ---

// Q49: Write a program to Input and display array.
void solveQ49() {
    int n;
    printf("\n--- Q49: Input and Display Array ---\n");
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The elements of the array are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Q50: Write a program to Find sum and average of array.
void solveQ50() {
    int n, sum = 0;
    double average;
    printf("\n--- Q50: Sum and Average of Array ---\n");
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // Accumulate sum during input
    }

    average = (double)sum / n; // Typecast to get precise decimal average

    printf("Sum of array elements = %d\n", sum);
    printf("Average of array elements = %.2lf\n", average);
}

// Q51: Write a program to Find largest and smallest element.
void solveQ51() {
    int n;
    printf("\n--- Q51: Find Largest and Smallest Element ---\n");
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid array size.\n");
        return;
    }

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Assume the first element is both largest and smallest initially
    int largest = arr[0];
    int smallest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    printf("Largest element = %d\n", largest);
    printf("Smallest element = %d\n", smallest);
}

// Q52: Write a program to Count even and odd elements.
void solveQ52() {
    int n, evenCount = 0, oddCount = 0;
    printf("\n--- Q52: Count Even and Odd Elements ---\n");
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        
        // Check if the element is even or odd
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("Total Even elements = %d\n", evenCount);
    printf("Total Odd elements = %d\n", oddCount);
}


// --- MAIN FUNCTION ---
int main() {
    int choice;

    printf("==================================================\n");
    printf("        DAY 13 ASSIGNMENTS (MENU DRIVEN)          \n");
    printf("==================================================\n");
    printf("49. Run Q49 (Input and Display Array)\n");
    printf("50. Run Q50 (Find Sum and Average of Array)\n");
    printf("51. Run Q51 (Find Largest and Smallest Element)\n");
    printf("52. Run Q52 (Count Even and Odd Elements)\n");
    printf("==================================================\n");
    printf("Select a program to run (49-52): ");
    scanf("%d", &choice);

    switch(choice) {
        case 49: solveQ49(); break;
        case 50: solveQ50(); break;
        case 51: solveQ51(); break;
        case 52: solveQ52(); break;
        default: printf("Invalid choice! Please select a number between 49 and 52.\n");
    }

    return 0;
}