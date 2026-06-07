// ============================================================================
// Title: Summer Vacation Self Learning Assignments - Day 6
// Company Information: TCS, Infosys, Wipro
// ============================================================================
#include <stdio.h>

// --- FUNCTIONS FOR EACH ASSIGNMENT ---

// Q21: Write a program to Convert decimal to binary.
void solveQ21() {
    int decimalNum, remainder;
    long long binaryNum = 0;
    long long placeValue = 1;

    printf("\n--- Q21: Decimal to Binary Conversion ---\n");
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);

    int temp = decimalNum;

    // Loop to divide by 2 and build the binary number using place value
    while (temp > 0) {
        remainder = temp % 2;
        binaryNum = binaryNum + (remainder * placeValue);
        temp = temp / 2;
        placeValue = placeValue * 10; // Increments position (1, 10, 100, 1000...)
    }

    printf("Binary equivalent of %d is: %lld\n", decimalNum, binaryNum);
}

// Q22: Write a program to Convert binary to decimal.
void solveQ22() {
    long long binaryNum, temp;
    int decimalNum = 0;
    int base = 1; // Holds the power of 2 (1, 2, 4, 8, 16...)
    int remainder;

    printf("\n--- Q22: Binary to Decimal Conversion ---\n");
    printf("Enter a binary number: ");
    scanf("%lld", &binaryNum);

    temp = binaryNum;

    // Loop to extract digits from right to left and multiply with base
    while (temp > 0) {
        remainder = temp % 10;
        decimalNum = decimalNum + (remainder * base);
        temp = temp / 10;
        base = base * 2; // Doubles the base for the next bit position
    }

    printf("Decimal equivalent of %lld is: %d\n", binaryNum, decimalNum);
}

// Q23: Write a program to Count set bits in a number.
void solveQ23() {
    int num, remainder;
    int count = 0;

    printf("\n--- Q23: Count Set Bits ---\n");
    printf("Enter an integer: ");
    scanf("%d", &num);

    int temp = num;

    // Standard binary conversion loop to check and count 1s
    while (temp > 0) {
        remainder = temp % 2;
        if (remainder == 1) {
            count = count + 1; // Increment count if bit is 1
        }
        temp = temp / 2;
    }

    printf("Number of set bits (1s) in %d is: %d\n", num, count);
}

// Q24: Write a program to Find x^n without pow().
void solveQ24() {
    double base, result = 1.0;
    int exponent, absExponent;

    printf("\n--- Q24: Find x^n without pow() ---\n");
    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    // Convert exponent to positive for the loop iteration
    if (exponent < 0) {
        absExponent = -exponent;
    } else {
        absExponent = exponent;
    }

    // Multiply base iteratively
    for (int i = 1; i <= absExponent; i++) {
        result = result * base;
    }

    // If exponent was negative, invert the final result
    if (exponent < 0) {
        result = 1.0 / result;
    }

    printf("%.2lf^%d = %.6lf\n", base, exponent, result);
}


// --- MAIN FUNCTION ---
int main() {
    int choice;

    printf("==================================================\n");
    printf("        DAY 6 ASSIGNMENTS (MENU DRIVEN)           \n");
    printf("==================================================\n");
    printf("21. Run Q21 (Decimal to Binary)\n");
    printf("22. Run Q22 (Binary to Decimal)\n");
    printf("23. Run Q23 (Count Set Bits)\n");
    printf("24. Run Q24 (Find x^n without pow)\n");
    printf("==================================================\n");
    printf("Select a program to run (21-24): ");
    scanf("%d", &choice);

    switch(choice) {
        case 21: solveQ21(); break;
        case 22: solveQ22(); break;
        case 23: solveQ23(); break;
        case 24: solveQ24(); break;
        default: printf("Invalid choice! Please select a number between 21 and 24.\n");
    }

    return 0;
}