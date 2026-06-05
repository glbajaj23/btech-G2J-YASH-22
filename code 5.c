// ============================================================================
// Q17: Write a program to Check perfect number.
// Company Information: TCS, Infosys, Wipro
// ============================================================================
#include <stdio.h>
int main() {
    int num, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    if (sum == num && num > 0) {
        printf("%d is a Perfect number.\n", num);
    } else {
        printf("%d is NOT a Perfect number.\n", num);
    }
    return 0;
}


/* ----------------------------------------------------------------------------
   NOTE:Q18, Q19 & Q20 are  commented 
---------------------------------------------------------------------------- */

/*
// ============================================================================
// Q18: Write a program to Check strong number.
// Company Information: TCS, Infosys, Wipro
// ============================================================================
#include <stdio.h>
int main() {
    int num, originalNum, remainder;
    long long totalSum = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    originalNum = num;
    while (num > 0) {
        remainder = num % 10;
        long long fact = 1;
        for (int i = 1; i <= remainder; i++) {
            fact *= i;
        }
        totalSum += fact;
        num /= 10;
    }
    if (totalSum == originalNum && originalNum > 0) {
        printf("%d is a Strong number.\n", originalNum);
    } else {
        printf("%d is NOT a Strong number.\n", originalNum);
    }
    return 0;
}
*/


/*
// ============================================================================
// Q19: Write a program to Print factors of a number.
// Company Information: TCS, Infosys, Wipro
// ============================================================================
#include <stdio.h>
int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Factors of %d are: ", num);
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
*/


/*
// ============================================================================
// Q20: Write a program to Find largest prime factor.
// Company Information: TCS, Infosys, Wipro
// ============================================================================
#include <stdio.h>
int main() {
    long long num, maxPrimeFactor = -1;
    printf("Enter a positive integer: ");
    scanf("%lld", &num);
    while (num % 2 == 0) {
        maxPrimeFactor = 2;
        num /= 2;
    }
    for (int i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            maxPrimeFactor = i;
            num /= i;
        }
    }
    if (num > 2) {
        maxPrimeFactor = num;
    }
    if (maxPrimeFactor != -1) {
        printf("The largest prime factor is: %lld\n", maxPrimeFactor);
    } else {
        printf("No prime factor found.\n");
    }
    return 0;
}
*/