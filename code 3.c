// ============================================================================
// Q9: Write a program to Check whether a number is prime.
// Company Information: TCS, Infosys, Wipro
// ============================================================================
#include <stdio.h>
int main() {
    int num, isPrime = 1;
    
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    if (num <= 1) {
        isPrime = 0; // 0 aur 1 prime numbers nahi hote
    } else {
        
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0; 
                break;
            }
        }
    }
    
    if (isPrime == 1) {
        printf("%d is a Prime number.\n", num);
    } else {
        printf("%d is NOT a Prime number.\n", num);
    }
    
    return 0;
}


/* --------------------------------------------------------------------------
   NOTE: Q10, Q11 & Q12 are commented.
---------------------------------------------------------------------------- */
/*
// ============================================================================
// Q10: Write a program to Print prime numbers in a range.
// Company Information: TCS, Infosys, Wipro
// ============================================================================
#include <stdio.h>

int main() {
    int start, end, isPrime; 
    printf("Enter starting number of range: ");
    scanf("%d", &start);
    printf("Enter ending number of range: ");
    scanf("%d", &end);
    printf("Prime numbers between %d and %d are:\n", start, end);
    
    for (int i = start; i <= end; i++) {
        if (i <= 1) {
            continue; 
        }
        
        isPrime = 1;
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        
        if (isPrime == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
*/
/*
// ============================================================================
// Q11: Write a program to Find GCD of two numbers.
// Company Information: TCS, Infosys, Wipro
// ============================================================================
#include <stdio.h>
int main() {
    int n1, n2, gcd = 1;
    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);
    n1 = (n1 < 0) ? -n1 : n1;
    n2 = (n2 < 0) ? -n2 : n2;
    for (int i = 1; i <= n1 && i <= n2; i++) {
        if (n1 % i == 0 && n2 % i == 0) {
            gcd = i;
        }
    }
    
    printf("GCD is: %d\n", gcd);
    return 0;
}
*/


/*
// ============================================================================
// Q12: Write a program to Find LCM of two numbers.
// Company Information: TCS, Infosys, Wipro
// ============================================================================
#include <stdio.h>
int main() {
    int n1, n2, max;
    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);
    max = (n1 > n2) ? n1 : n2;
    while (1) {
        if (max % n1 == 0 && max % n2 == 0) {
            printf("LCM is: %d\n", max);
            break; 
        }
        max++;
    }
    
    return 0;
}
*/