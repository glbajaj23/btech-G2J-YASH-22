// ============================================================================
// Title: Summer Vacation Self Learning Assignments - Day 9
// Company Information: TCS, Infosys, Wipro, Microsoft, Adobe, Paytm
// ============================================================================
#include <stdio.h>

// --- FUNCTIONS FOR EACH PATTERN ---

// Q33: Program to Print reverse star pattern
// Expected Output Pattern:
// *****
// ****
// ***
// **
// *
void solveQ33() {
    int rows = 5;
    printf("\n--- Q33: Reverse Star Pattern ---\n");
    
    // Outer loop starts from max rows and decreases
    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

// Q34: Program to Print reverse number triangle
// Expected Output Pattern:
// 12345
// 1234
// 123
// 12
// 1
void solveQ34() {
    int rows = 5;
    printf("\n--- Q34: Reverse Number Triangle ---\n");
    
    // Outer loop decreases the total numbers to print in each row
    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}

// Q35: Program to Print repeated character pattern
// Expected Output Pattern:
// A
// BB
// CCC
// DDD
// EEEEE
void solveQ35() {
    int rows = 5;
    printf("\n--- Q35: Repeated Character Pattern ---\n");
    
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            // Prints the character corresponding to the current row 'i'
            printf("%c", 'A' + i - 1);
        }
        printf("\n");
    }
}

// Q36: Program to Print hollow square pattern
// Expected Output Pattern:
// *****
// * *
// * *
// * *
// *****
void solveQ36() {
    int rows = 5;
    printf("\n--- Q36: Hollow Square Pattern ---\n");
    
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows; j++) {
            // Print star only for boundaries (first/last row or first/last column)
            if (i == 1 || i == rows || j == 1 || j == rows) {
                printf("*");
            } else {
                printf(" "); // Print space for the inside of the square
            }
        }
        printf("\n");
    }
}


// --- MAIN FUNCTION ---
int main() {
    int choice;

    printf("==================================================\n");
    printf("        DAY 9 ASSIGNMENTS (MENU DRIVEN)           \n");
    printf("==================================================\n");
    printf("33. Run Q33 (Reverse Star Pattern)\n");
    printf("34. Run Q34 (Reverse Number Triangle)\n");
    printf("35. Run Q35 (Repeated Character Pattern)\n");
    printf("36. Run Q36 (Hollow Square Pattern)\n");
    printf("==================================================\n");
    printf("Select a program to run (33-36): ");
    scanf("%d", &choice);

    switch(choice) {
        case 33: solveQ33(); break;
        case 34: solveQ34(); break;
        case 35: solveQ35(); break;
        case 36: solveQ36(); break;
        default: printf("Invalid choice! Please select a number between 33 and 36.\n");
    }

    return 0;
}