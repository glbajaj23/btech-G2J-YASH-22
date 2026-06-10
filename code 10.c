Q38: Program to Print reverse pyramid
// Expected Output Pattern:
// *********
//  *******
//   *****
//    ***
//     *
#include <stdio.h>

int main() {
    int n, i, j, space;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = n; i >= 1; i--) {
        for(space = 0; space < n - i; space++) {
            printf(" ");
        }

        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
Q37: Program to Print star pyramid
// Expected Output Pattern:
//     *
//    ***
//   *****
//  *******
// *********
#include <stdio.h>

int main() {
    int n, i, j, space;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        for(space = 1; space <= n - i; space++) {
            printf(" ");
        }

        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
// Q39: Program to Print number pyramid
// Expected Output Pattern:
//     1
//    121
//   12321
//  1234321
// 123454321
#include <stdio.h>

int main() {
    int n, i, j, space;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {

        for(space = 1; space <= n - i; space++) {
            printf(" ");
        }

        for(j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
// Q40: Program to Print character pyramid
// Expected Output Pattern:
//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA
#include <stdio.h>

int main() {
    int n, i, j, space;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {

        for(space = 1; space <= n - i; space++) {
            printf(" ");
        }

        for(j = 0; j < i; j++) {
            printf("%c ", 'A' + j);
        }

        printf("\n");
    }

    return 0;
}