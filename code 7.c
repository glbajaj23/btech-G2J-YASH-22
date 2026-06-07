// ============================================================================
// Title: Summer Vacation Self Learning Assignments - Day 7 (Recursion)
// Company Information: TCS, Infosys, Wipro
// ============================================================================
#include <stdio.h>

// Global variable used specifically for the recursive reverse number logic
int reversedNum = 0; 

// --- FUNCTIONS FOR EACH ASSIGNMENT ---

// Q25: Recursive function to find factorial of a number
unsigned long long findFactorial(int n) {
    if (n <= 1) {
        return 1; // Base case: factorial of 0 or 1 is 1
    }
    return n * findFactorial(n - 1); // Recursive call
}

void solveQ25() {
    int num;
    printf("\n--- Q25: Recursive Factorial ---\n");
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } else {
        printf("Factorial of %d = %llu\n", num, findFactorial(num));
    }
}

// Q26: Recursive function to find the nth Fibonacci term
int findFibonacci(int n) {
    if (n == 0) {
        return 0; // Base case 1
    }
    if (n == 1) {
        return 1; // Base case 2
    }
    return findFibonacci(n - 1) + findFibonacci(n - 2); // Recursive call
}

void solveQ26() {
    int terms;
    printf("\n--- Q26: Recursive Fibonacci Series ---\n");
    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &terms);
    
    printf("Fibonacci Series: ");
    for (int i = 0; i < terms; i++) {
        printf("%d ", findFibonacci(i));
    }
    printf("\n");
}

// Q27: Recursive function to calculate sum of digits
int sumOfDigits(int n) {
    if (n == 0) {
        return 0; // Base case: when no digits are left
    }
    return (n % 10) + sumOfDigits(n / 10); // Adds last digit to the sum of remaining digits
}

void solveQ27() {
    int num, absNum;
    printf("\n--- Q27: Recursive Sum of Digits ---\n");
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    // Handle negative numbers by converting to absolute value
    if (num < 0) {
        absNum = -num;
    } else {
        absNum = num;
    }
    
    printf("Sum of digits of %d is: %d\n", num, sumOfDigits(absNum));
}

// Q28: Recursive function to reverse a number
void reverseNumber(int n) {
    if (n == 0) {
        return; // Base case: stop when number becomes 0
    }
    int remainder = n % 10;
    reversedNum = reversedNum * 10 + remainder; // Builds the reversed number step-by-step
    reverseNumber(n / 10); // Recursive call with remaining digits
}

void solveQ28() {
    int num, absNum;
    printf("\n--- Q28: Recursive Reverse Number ---\n");
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    // Reset the global variable before execution
    reversedNum = 0; 
    
    if (num == 0) {
        printf("Reversed Number: 0\n");
        return;
    }
    
    if (num < 0) {
        absNum = -num;
    } else {
        absNum = num;
    }
    
    reverseNumber(absNum);
    
    // Maintain the negative sign in final output if original number was negative
    if (num < 0) {
        printf("Reversed Number: -%d\n", reversedNum);
    } else {
        printf("Reversed Number: %d\n", reversedNum);
    }
}


// --- MAIN FUNCTION ---
int main() {
    int choice;

    printf("==================================================\n");
    printf("        DAY 7 ASSIGNMENTS (MENU DRIVEN)           \n");
    printf("==================================================\n");
    printf("25. Run Q25 (Recursive Factorial)\n");
    printf("26. Run Q26 (Recursive Fibonacci)\n");
    printf("27. Run Q27 (Recursive Sum of Digits)\n");
    printf("28. Run Q28 (Recursive Reverse Number)\n");
    printf("==================================================\n");
    printf("Select a program to run (25-28): ");
    scanf("%d", &choice);

    switch(choice) {
        case 25: solveQ25(); break;
        case 26: solveQ26(); break;
        case 27: solveQ27(); break;
        case 28: solveQ28(); break;
        default: printf("Invalid choice! Please select a number between 25 and 24.\n");
    }

    return 0;
}