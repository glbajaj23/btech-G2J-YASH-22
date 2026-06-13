// ============================================================================
// Title: Summer Vacation Self Learning Assignments - Day 12 (Advanced Functions)
// Company Information: TCS, Infosys, Wipro
// ============================================================================
#include <stdio.h>

// --- INDEPENDENT FUNCTIONS FOR THE ASSIGNMENTS ---

// Q45: Function to check if a number is a palindrome (Returns 1 if true, 0 if false)
int isPalindrome(int num) {
    int reversed = 0, original = num, remainder;
    
    while (num > 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    
    if (original == reversed) {
        return 1;
    } else {
        return 0;
    }
}

// Q46: Function to check if a number is an Armstrong number (Returns 1 if true, 0 if false)
int isArmstrong(int num) {
    int original = num, remainder, sum = 0, digits = 0, temp = num;
    
    // Count the number of digits
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    
    temp = num;
    // Calculate the sum of digits raised to the power of total digits
    while (temp > 0) {
        remainder = temp % 10;
        
        // Simple power calculation loop
        int power = 1;
        for (int i = 1; i <= digits; i++) {
            power *= remainder;
        }
        
        sum += power;
        temp /= 10;
    }
    
    if (sum == original) {
        return 1;
    } else {
        return 0;
    }
}

// Q47: Function to print Fibonacci series up to N terms
void printFibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm;
    
    for (int i = 1; i <= n; i++) {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
}

// Q48: Function to check if a number is a perfect number (Returns 1 if true, 0 if false)
int isPerfect(int num) {
    int sum = 0;
    
    // Find sum of all proper divisors
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    
    if (sum == num && num > 0) {
        return 1;
    } else {
        return 0;
    }
}


// --- MAIN FUNCTION TO CALL AND TEST THE FUNCTIONS ---
int main() {
    int choice;

    printf("==================================================\n");
    printf("        DAY 12 ASSIGNMENTS (MENU DRIVEN)          \n");
    printf("==================================================\n");
    printf("45. Run Q45 (Function for Palindrome Check)\n");
    printf("46. Run Q46 (Function for Armstrong Check)\n");
    printf("47. Run Q47 (Function for Fibonacci Series)\n");
    printf("48. Run Q48 (Function for Perfect Number Check)\n");
    printf("==================================================\n");
    printf("Select a program to run (45-48): ");
    scanf("%d", &choice);

    switch(choice) {
        case 45: {
            int num;
            printf("\n--- Q45: Palindrome Number Check ---\n");
            printf("Enter a positive integer: ");
            scanf("%d", &num);
            if (isPalindrome(num) == 1) {
                printf("%d is a Palindrome number.\n", num);
            } else {
                printf("%d is NOT a Palindrome number.\n", num);
            }
            break;
        }
        case 46: {
            int num;
            printf("\n--- Q46: Armstrong Number Check ---\n");
            printf("Enter a positive integer: ");
            scanf("%d", &num);
            if (isArmstrong(num) == 1) {
                printf("%d is an Armstrong number.\n", num);
            } else {
                printf("%d is NOT an Armstrong number.\n", num);
            }
            break;
        }
        case 47: {
            int terms;
            printf("\n--- Q47: Fibonacci Series ---\n");
            printf("Enter the number of terms: ");
            scanf("%d", &terms);
            if (terms <= 0) {
                printf("Please enter a positive number of terms.\n");
            } else {
                printf("Fibonacci Series: ");
                printFibonacci(terms);
            }
            break;
        }
        case 48: {
            int num;
            printf("\n--- Q48: Perfect Number Check ---\n");
            printf("Enter a positive integer: ");
            scanf("%d", &num);
            if (isPerfect(num) == 1) {
                printf("%d is a Perfect number.\n", num);
            } else {
                printf("%d is NOT a Perfect number.\n", num);
            }
            break;
        }
        default: 
            printf("Invalid choice! Please select a number between 45 and 48.\n");
    }

    return 0;
}