// ====================
// Q1: Write a program to Calculate sum of first N natural numbers.
// ===================
#include <stdio.h>

int main() {
    int n, sum = 0;
    
    printf("Enter a positive integer (N): ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++) {
        sum += i; 
    }
    
    printf("The sum of first %d natural numbers is: %d\n", n, sum);
    return 0;
}


/* ---------------------------------
   NOTE: Q2,Q3,Q4 are commented .
--------------------------------- */

/* // ====================
// Q2: Write a program to Print multiplication table of a given number.
// ====================
#include <stdio.h>

int main() {
    int num;
    
    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &num);
    
    printf("\nMultiplication Table for %d:\n", num);
    for(int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    
    return 0;
}
*/


/*
// ====================
// Q3: Write a program to Find factorial of a number.
// ====================
#include <stdio.h>

int main() {
    int num;
    unsigned long long factorial = 1;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } else {
        for(int i = 1; i <= num; i++) {
            factorial *= i;
        }
        printf("Factorial of %d = %llu\n", num, factorial);
    }
    
    return 0;
}
*/


/*
// ====================
// Q4: Write a program to Count digits in a number.
// ====================
#include <stdio.h>

int main() {
    long long num;
    int count = 0;
    
    printf("Enter an integer: ");
    scanf("%lld", &num);
    
    if (num == 0) {
        count = 1;
    } else {
        if (num < 0) {
            num = -num;
        }
        while(num != 0) {
            num /= 10;
            count++;
        }
    }
    
    printf("Number of digits: %d\n", count);
    return 0;
}
*/