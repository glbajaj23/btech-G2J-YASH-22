// ============================================================================
// Title: Summer Vacation Self Learning Assignments - Day 17 (Array Operations)
// Company Information: Amazon, Deloitte, Capgemini, TCS, Infosys, Wipro
// ============================================================================
#include <stdio.h>

// --- FUNCTIONS FOR EACH ASSIGNMENT ---

// Q65: Write a program to Merge arrays.
void solveQ65() {
    int n1, n2;
    printf("\n--- Q65: Merge Two Arrays ---\n");
    
    printf("Enter the size of the first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter %d elements for the first array:\n", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter %d elements for the second array:\n", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int mergedSize = n1 + n2;
    int mergedArr[mergedSize];

    // Copy elements of the first array into the merged array
    for (int i = 0; i < n1; i++) {
        mergedArr[i] = arr1[i];
    }

    // Copy elements of the second array into the merged array
    for (int i = 0; i < n2; i++) {
        mergedArr[n1 + i] = arr2[i];
    }

    printf("The merged array is: ");
    for (int i = 0; i < mergedSize; i++) {
        printf("%d ", mergedArr[i]);
    }
    printf("\n");
}

// Q66: Write a program to Union of arrays.
void solveQ66() {
    int n1, n2;
    printf("\n--- Q66: Union of Two Arrays ---\n");
    
    printf("Enter the size of the first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter %d elements for first array:\n", n1);
    for (int i = 0; i < n1; i++) scanf("%d", &arr1[i]);

    printf("Enter the size of the second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter %d elements for second array:\n", n2);
    for (int i = 0; i < n2; i++) scanf("%d", &arr2[i]);

    // Maximum possible size of union array is n1 + n2
    int unionArr[n1 + n2];
    int k = 0;

    // Add all unique elements from first array to union array
    for (int i = 0; i < n1; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < k; j++) {
            if (arr1[i] == unionArr[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            unionArr[k++] = arr1[i];
        }
    }

    // Add unique elements from second array if they aren't already in union array
    for (int i = 0; i < n2; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < k; j++) {
            if (arr2[i] == unionArr[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            unionArr[k++] = arr2[i];
        }
    }

    printf("Union of the two arrays is: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", unionArr[i]);
    }
    printf("\n");
}

// Q67: Write a program to Intersection of arrays.
void solveQ67() {
    int n1, n2;
    printf("\n--- Q67: Intersection of Two Arrays ---\n");
    
    printf("Enter the size of the first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter %d elements for first array:\n", n1);
    for (int i = 0; i < n1; i++) scanf("%d", &arr1[i]);

    printf("Enter the size of the second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter %d elements for second array:\n", n2);
    for (int i = 0; i < n2; i++) scanf("%d", &arr2[i]);

    printf("Intersection of the two arrays is: ");
    int foundIntersection = 0;

    // Find common unique elements between both arrays
    for (int i = 0; i < n1; i++) {
        // Check if arr1[i] was already processed to avoid printing multiple duplicates
        int alreadyPrinted = 0;
        for (int k = 0; k < i; k++) {
            if (arr1[i] == arr1[k]) {
                alreadyPrinted = 1;
                break;
            }
        }
        if (alreadyPrinted) continue;

        // Check if it exists in the second array
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                foundIntersection = 1;
                break;
            }
        }
    }

    if (!foundIntersection) {
        printf("None (No intersecting elements found)");
    }
    printf("\n");
}

// Q68: Write a program to Find common elements.
void solveQ68() {
    int n1, n2;
    printf("\n--- Q68: Find Common Elements ---\n");
    
    printf("Enter the size of the first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter %d elements for first array:\n", n1);
    for (int i = 0; i < n1; i++) scanf("%d", &arr1[i]);

    printf("Enter the size of the second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter %d elements for second array:\n", n2);
    for (int i = 0; i < n2; i++) scanf("%d", &arr2[i]);

    printf("Common elements are: ");
    int hasCommon = 0;

    // Direct tracking of common elements (standard matrix/pair matching style)
    for (int i = 0; i < n1; i++) {
        int alreadyChecked = 0;
        for (int k = 0; k < i; k++) {
            if (arr1[i] == arr1[k]) {
                alreadyChecked = 1;
                break;
            }
        }
        if (alreadyChecked) continue;

        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                hasCommon = 1;
                break;
            }
        }
    }

    if (!hasCommon) {
        printf("None");
    }
    printf("\n");
}


// --- MAIN FUNCTION ---
int main() {
    int choice;

    printf("==================================================\n");
    printf("        DAY 17 ASSIGNMENTS (MENU DRIVEN)          \n");
    printf("==================================================\n");
    printf("65. Run Q65 (Merge Arrays)\n");
    printf("66. Run Q66 (Union of Arrays)\n");
    printf("67. Run Q67 (Intersection of Arrays)\n");
    printf("68. Run Q68 (Find Common Elements)\n");
    printf("==================================================\n");
    printf("Select a program to run (65-68): ");
    scanf("%d", &choice);

    switch(choice) {
        case 65: solveQ65(); break;
        case 66: solveQ66(); break;
        case 67: solveQ67(); break;
        case 68: solveQ68(); break;
        default: printf("Invalid choice! Please select a number between 65 and 68.\n");
    }

    return 0;
}