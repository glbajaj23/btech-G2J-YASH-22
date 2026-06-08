// ============================================================================
// Title: Summer Vacation Self Learning Assignments - Day 8
// Company Information: TCS, Infosys, Wipro, Microsoft, Adobe, Paytm
// ============================================================================
#include <stdio.h>

// --- FUNCTIONS FOR EACH PATTERN ---

// Q29: Program to Print half pyramid pattern
// Expected Output Pattern:
// *
// **
// ***
// ****
// *****
void solveQ29() {
    int rows = 5;
    printf("\n--- Q29: Half Pyramid Pattern ---\n");
    
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n"); 
    }
}

// Q30: Program to Print number triangle
// Expected Output Pattern:
// 1
// 12
// 123
// 1234
// 12345
void solveQ30() {
    int rows = 5;
    printf("\n--- Q30: Number Triangle Pattern ---\n");
    
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}

// Q31: Program to Print character triangle
// Expected Output Pattern:
// A
// AB
// ABC
// ABCD
// ABCDE
void solveQ31() {
    int rows = 5;
    printf("\n--- Q31: Character Triangle Pattern ---\n");
    
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c", 'A' + j - 1); 
        }
        printf("\n");
    }
}

// Q32: Program to Print repeated-number pattern
// Expected Output Pattern:
// 1
// 22
// 333
// 4444
// 55555
void solveQ32() {
    int rows = 5;
    printf("\n--- Q32: Repeated-Number Pattern ---\n");
    
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }
}


// --- MAIN FUNCTION ---
int main() {
    int choice;

    printf("==================================================\n");
    printf("        DAY 8 ASSIGNMENTS (MENU DRIVEN)           \n");
    printf("==================================================\n");
    printf("29. Run Q29 (Half Pyramid Pattern)\n");
    printf("30. Run Q30 (Number Triangle Pattern)\n");
    printf("31. Run Q31 (Character Triangle Pattern)\n");
    printf("32. Run Q32 (Repeated-Number Pattern)\n");
    printf("==================================================\n");
    printf("Select a program to run (29-32): ");
    scanf("%d", &choice);

    switch(choice) {
        case 29: solveQ29(); break;
        case 30: solveQ30(); break;
        case 31: solveQ31(); break;
        case 32: solveQ32(); break;
        default: printf("Invalid choice! Please select a number between 29 and 32.\n");
    }

    return 0;
}