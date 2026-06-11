// ============================================================================
// Title: Summer Vacation Self Learning Assignments - Day 11 (Functions)
// Company Information: TCS, Infosys, Wipro
// ============================================================================
#include <stdio.h>

// --- INDEPENDENT FUNCTIONS FOR THE ASSIGNMENTS ---

// Q41: Function to find sum of two numbers
int findSum(int a, int b) {
    return a + b;
}

// Q42: Function to find maximum between two numbers
int findMaximum(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

// Q43: Function to check if a number is prime (returns 1 if prime, 0 if not)
int checkPrime(int n) {
    if (n <= 1) {
        return 0; // 0 and 1 are not prime numbers
    }
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return 0; // Number is divisible, so not prime
        }
    }
    return 1; // Number is prime
}

// Q44: Function to find factorial of a number
unsigned long long findFactorial(int n) {
    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}


// --- MAIN FUNCTION TO CALL AND TEST THE FUNCTIONS ---
int main() {
    int choice;

    printf("==================================================\n");
    printf("        DAY 11 ASSIGNMENTS (MENU DRIVEN)          \n");
    printf("==================================================\n");
    printf("41. Run Q41 (Function to find sum of two numbers)\n");
    printf("42. Run Q42 (Function to find maximum)\n");
    printf("43. Run Q43 (Function to check prime)\n");
    printf("44. Run Q44 (Function to find factorial)\n");
    printf("==================================================\n");
    printf("Select a program to run (41-44): ");
    scanf("%d", &choice);

    switch(choice) {
        case 41: {
            int num1, num2;
            printf("\n--- Q41: Sum of Two Numbers ---\n");
            printf("Enter two integers: ");
            scanf("%d %d", &num1, &num2);
            printf("The sum of %d and %d is: %d\n", num1, num2, findSum(num1, num2));
            break;
        }
        case 42: {
            int num1, num2;
            printf("\n--- Q42: Find Maximum ---\n");
            printf("Enter two integers: ");
            scanf("%d %d", &num1, &num2);
            printf("The maximum number is: %d\n", findMaximum(num1, num2));
            break;
        }
        case 43: {
            int num;
            printf("\n--- Q43: Check Prime Number ---\n");
            printf("Enter an integer: ");
            scanf("%d", &num);
            if (checkPrime(num) == 1) {
                printf("%d is a Prime number.\n", num);
            } else {
                printf("%d is NOT a Prime number.\n", num);
            }
            break;
        }
        case 44: {
            int num;
            printf("\n--- Q44: Find Factorial ---\n");
            printf("Enter a positive integer: ");
            scanf("%d", &num);
            if (num < 0) {
                printf("Error! Factorial of a negative number doesn't exist.\n");
            } else {
                printf("Factorial of %d = %llu\n", num, findFactorial(num));
            }
            break;
        }
        default: 
            printf("Invalid choice! Please select a number between 41 and 44.\n");
    }

    return 0;
}