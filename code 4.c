// ============================================================================
// Q13: Write a program to Generate Fibonacci series.
// Company Information: TCS, Infosys, Wipro
// ============================================================================
#include <stdio.h>
int main() {
    int n;
    long long t1 = 0, t2 = 1, nextTerm;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (int i = 1; i <= n; ++i) {
        printf("%lld ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
    return 0;
}


/* ----------------------------------------------------------------------------
   NOTE: Q14, Q15 & Q16 are commented.
---------------------------------------------------------------------------- */

/*
// ============================================================================
// Q14: Write a program to Find nth Fibonacci term.
// Company Information: TCS, Infosys, Wipro
// ============================================================================
#include <stdio.h>
int main() {
    int n;
    long long t1 = 0, t2 = 1, nextTerm = 0;
    printf("Enter the position (n) to find the nth Fibonacci term: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
    } else if (n == 1) {
        printf("The 1st Fibonacci term is: %lld\n", t1);
    } else if (n == 2) {
        printf("The 2nd Fibonacci term is: %lld\n", t2);
    } else {
        for (int i = 3; i <= n; ++i) {
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
        }
        printf("The %dth Fibonacci term is: %lld\n", n, t2);
    }
    return 0;
}
*/


/*
// ============================================================================
// Q15: Write a program to Check Armstrong number.
// Company Information: TCS, Infosys, Wipro
// ============================================================================
#include <stdio.h>
#include <math.h>
int main() {
    long long num, originalNum, tempNum;
    int remainder, n = 0;
    double result = 0.0;
    printf("Enter an integer: ");
    scanf("%lld", &num);
    originalNum = num;
    tempNum = num;
    while (tempNum != 0) {
        tempNum /= 10;
        ++n;
    }
    tempNum = num;
    while (tempNum != 0) {
        remainder = tempNum % 10;
        result += pow(remainder, n);
        tempNum /= 10;
    }
    if ((int)result == originalNum && originalNum >= 0)
        printf("%lld is an Armstrong number.\n", originalNum);
    else
        printf("%lld is NOT an Armstrong number.\n", originalNum);

    return 0;
}
*/


/*
// ============================================================================
// Q16: Write a program to Print Armstrong numbers in a range.
// Company Information: TCS, Infosys, Wipro
// ============================================================================
#include <stdio.h>
#include <math.h>
int main() {
    int start, end, temp1, temp2, remainder, n = 0;
    double result = 0.0;
    printf("Enter starting number of range: ");
    scanf("%d", &start);
    printf("Enter ending number of range: ");
    scanf("%d", &end);
    printf("Armstrong numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; ++i) {
        temp1 = i;
        temp2 = i;
        while (temp1 != 0) {
            temp1 /= 10;
            ++n;
        }
        while (temp2 != 0) {
            remainder = temp2 % 10;
            result += pow(remainder, n);
            temp2 /= 10;
        }
        if ((int)result == i && i >= 0) {
            printf("%d ", i);
        }
        n = 0;
        result = 0.0;
    }
    printf("\n");
    return 0;
}
*/