// ============================================================================
// Title: Summer Vacation Self Learning Assignments - Day 10 (Full Pyramids)
// Company Information: TCS, Infosys, Wipro, Microsoft, Adobe, Paytm
// ============================================================================
#include <stdio.h>

// --- FUNCTIONS FOR EACH PATTERN ---

// Q37: Program to Print star pyramid
// Expected Output Pattern:
//     *
//    ***
//   *****
//  *******
// *********
void solveQ37() {
    int rows = 5;
    printf("\n--- Q37: Star Pyramid ---\n");
    
    for (int i = 1; i <= rows; i++) {
        // Loop to print leading spaces
        for (int space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        // Loop to print stars (2*i - 1 stars in row i)
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
}

// Q38: Program to Print reverse pyramid
// Expected Output Pattern:
// *********
//  *******
//   *****
//    ***
//     *
void solveQ38() {
    int rows = 5;
    printf("\n--- Q38: Reverse Star Pyramid ---\n");
    
    for (int i = rows; i >= 1; i--) {
        // Loop to print leading spaces
        for (int space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        // Loop to print stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
}

// Q39: Program to Print number pyramid
// Expected Output Pattern:
//     1
//    121
//   12321
//  1234321
// 123454321
void solveQ39() {
    int rows = 5;
    printf("\n--- Q39: Number Pyramid ---\n");
    
    for (int i = 1; i <= rows; i++) {
        // Loop to print spaces
        for (int space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        // Loop to print increasing numbers
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        // Loop to print decreasing numbers
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
}

// Q40: Program to Print character pyramid
// Expected Output Pattern:
//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA
void solveQ40() {
    int rows = 5;
    printf("\n--- Q40: Character Pyramid ---\n");
    
    for (int i = 1; i <= rows; i++) {
        // Loop to print spaces
        for (int space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        // Loop to print increasing characters
        for (int j = 1; j <= i; j++) {
            printf("%c", 'A' + j - 1);
        }
        // Loop to print decreasing characters
        for (int j = i - 1; j >= 1; j--) {
            printf("%c", 'A' + j - 1);
        }
        printf("\n");
    }
}


// --- MAIN FUNCTION ---
int main() {
    int choice;

    printf("==================================================\n");
    printf("        DAY 10 ASSIGNMENTS (MENU DRIVEN)          \n");
    printf("==================================================\n");
    printf("37. Run Q37 (Star Pyramid)\n");
    printf("38. Run Q38 (Reverse Star Pyramid)\n");
    printf("39. Run Q39 (Number Pyramid)\n");
    printf("40. Run Q40 (Character Pyramid)\n");
    printf("==================================================\n");
    printf("Select a program to run (37-40): ");
    scanf("%d", &choice);

    switch(choice) {
        case 37: solveQ37(); break;
        case 38: solveQ38(); break;
        case 39: solveQ39(); break;
        case 40: solveQ40(); break;
        default: printf("Invalid choice! Please select a number between 37 and 40.\n");
    }

    return 0;
}