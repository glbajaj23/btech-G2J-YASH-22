// ============================================================================
// Q5: Write a program to Find sum of digits of a number.
// Company Information: TCS, Infosys, Wipro
// ============================================================================
#include <stdio.h>
int main() {
    long long num, temp;
    int sum = 0, remainder;
    printf("Enter an integer: ");
    scanf("%lld", &num);
    temp = num; 
    if (temp < 0) {
        temp = -temp;
    }
    while (temp != 0) {
        remainder = temp % 10;  
        sum += remainder;       
        temp /= 10;             
    }
    printf("Sum of digits of %lld is: %d\n", num, sum);
    return 0;
}


/* ----------------------------------------------------------------------------
 NOTE: Q6,Q7,Q8 are commented.
---------------------------------------------------------------------------- */

/*
// ============================================================================
// Q6: Write a program to Reverse a number.
// Company Information: TCS, Infosys, Wipro
// ============================================================================
#include <stdio.h>
int main() {
    long long num, temp;
    long long reversedNum = 0;
    int remainder;
    printf("Enter an integer: ");
    scanf("%lld", &num);
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        reversedNum = reversedNum * 10 + remainder;
        temp /= 10;
    }
    printf("Reversed Number: %lld\n", reversedNum);
    return 0;
}
*/


/*
// ============================================================================
// Q7: Write a program to Find product of digits.
// Company Information: TCS, Infosys, Wipro
// ============================================================================
#include <stdio.h>
int main() {
    long long num, temp;
    long long product = 1;
    int remainder;
    printf("Enter an integer: ");
    scanf("%lld", &num);
    temp = num;
    if (temp == 0) {
        product = 0;
    } else {
        if (temp < 0) {
            temp = -temp;
        }
        while (temp != 0) {
            remainder = temp % 10;
            product *= remainder;
            temp /= 10;
        }
    }
    printf("Product of digits of %lld is: %lld\n", num, product);
    return 0;
}
*/


/*
// ============================================================================
// Q8: Write a program to Check whether a number is palindrome.
// Company Information: TCS, Infosys, Wipro
// ============================================================================
#include <stdio.h>
int main() {
    long long num, temp;
    long long reversedNum = 0;
    int remainder;
    printf("Enter an integer: ");
    scanf("%lld", &num); 
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        reversedNum = reversedNum * 10 + remainder;
        temp /= 10;
    }
    if (num == reversedNum && num >= 0) {
        printf("%lld is a Palindrome number.\n", num);
    } else {
        printf("%lld is NOT a Palindrome number.\n", num);
    }
    return 0;
}
*/