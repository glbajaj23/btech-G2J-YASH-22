// ============================================================================
// Title: Summer Vacation Self Learning Assignments - Day 14 (Intermediate Arrays)
// Company Information: Amazon, Deloitte, Capgemini, TCS, Infosys, Wipro
// ============================================================================
#include <stdio.h>

// --- FUNCTIONS FOR EACH ASSIGNMENT ---

// Q53: Write a program to Linear search.
void solveQ53() {
    int n, searchElement, foundIndex = -1;
    printf("\n--- Q53: Linear Search ---\n");
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &searchElement);

    // Traverse the array to find the element
    for (int i = 0; i < n; i++) {
        if (arr[i] == searchElement) {
            foundIndex = i; // Store the index if element is found
            break;          // Stop searching further
        }
    }

    if (foundIndex != -1) {
        printf("Element %d found at index position: %d\n", searchElement, foundIndex);
    } else {
        printf("Element %d is NOT present in the array.\n", searchElement);
    }
}

// Q54: Write a program to Frequency of an element.
void solveQ54() {
    int n, target, frequency = 0;
    printf("\n--- Q54: Frequency of an Element ---\n");
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to find its frequency: ");
    scanf("%d", &target);

    // Count how many times the target element appears
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            frequency++;
        }
    }

    printf("The element %d occurs %d time(s) in the array.\n", target, frequency);
}

// Q55: Write a program to Second largest element.
void solveQ55() {
    int n;
    printf("\n--- Q55: Find Second Largest Element ---\n");
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array must have at least 2 elements to find the second largest.\n");
        return;
    }

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize largest and second largest with extreme small limits or standard logic
    int largest = arr[0];
    int secondLargest = -1; // Assuming array contains positive numbers, or handles valid tracking

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == -1 || largest == secondLargest) {
        printf("There is no distinct second largest element.\n");
    } else {
        printf("Largest element = %d, Second Largest element = %d\n", largest, secondLargest);
    }
}

// Q56: Write a program to Find duplicates in array.
void solveQ56() {
    int n, duplicateFound = 0;
    printf("\n--- Q56: Find Duplicates in Array ---\n");
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Duplicate elements in the array are: ");
    // Nested loops to check each pair of elements for duplicates
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                // To prevent printing the same duplicate multiple times in basic view,
                // we just print it or trace it simply here.
                printf("%d ", arr[i]);
                duplicateFound = 1;
                break; // Break the inner loop once duplicate for this element is tracked
            }
        }
    }

    if (!duplicateFound) {
        printf("None (No duplicate elements found)");
    }
    printf("\n");
}


// --- MAIN FUNCTION ---
int main() {
    int choice;

    printf("==================================================\n");
    printf("        DAY 14 ASSIGNMENTS (MENU DRIVEN)          \n");
    printf("==================================================\n");
    printf("53. Run Q53 (Linear Search)\n");
    printf("54. Run Q54 (Frequency of an Element)\n");
    printf("55. Run Q55 (Second Largest Element)\n");
    printf("56. Run Q56 (Find Duplicates in Array)\n");
    printf("==================================================\n");
    printf("Select a program to run (53-56): ");
    scanf("%d", &choice);

    switch(choice) {
        case 53: solveQ53(); break;
        case 54: solveQ54(); break;
        case 55: solveQ55(); break;
        case 56: solveQ56(); break;
        default: printf("Invalid choice! Please select a number between 53 and 56.\n");
    }

    return 0;
}