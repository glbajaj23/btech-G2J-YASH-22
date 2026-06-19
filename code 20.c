// ============================================================================
// Title: Summer Vacation Self Learning Assignments - Day 20 (Advanced Matrices)
// Company Information: TCS, Infosys, Wipro
// ============================================================================
#include <stdio.h>

// --- FUNCTIONS FOR EACH ASSIGNMENT ---

// Q77: Write a program to Multiply matrices.
void solveQ77() {
    int r1, c1, r2, c2;
    printf("\n--- Q77: Multiply Two Matrices ---\n");
    printf("Enter rows and columns for Matrix 1: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for Matrix 2: ");
    scanf("%d %d", &r2, &c2);

    // Matrix multiplication rule: columns of first matrix must equal rows of second matrix
    if (c1 != r2) {
        printf("Error! Multiplication not possible. Columns of Matrix 1 must equal Rows of Matrix 2.\n");
        return;
    }

    int m1[r1][c1], m2[r2][c2], prod[r1][c2];

    printf("Enter elements for Matrix 1:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &m1[i][j]);
        }
    }

    printf("Enter elements for Matrix 2:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &m2[i][j]);
        }
    }

    // Initialize the product matrix with 0
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            prod[i][j] = 0;
        }
    }

    // Matrix Multiplication logic using 3 nested loops
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                prod[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    printf("Resultant Matrix after Multiplication:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d\t", prod[i][j]);
        }
        printf("\n");
    }
}

// Q78: Write a program to Check symmetric matrix.
void solveQ78() {
    int size, isSymmetric = 1;
    printf("\n--- Q78: Check Symmetric Matrix ---\n");
    printf("Enter the size of the square matrix (Rows = Columns): ");
    scanf("%d", &size);

    int matrix[size][size];
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // A matrix is symmetric if Matrix[i][j] == Matrix[j][i] for all i and j
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0; // Found mismatch, not symmetric
                break;
            }
        }
        if (!isSymmetric) break;
    }

    if (isSymmetric) {
        printf("The matrix is a Symmetric Matrix.\n");
    } else {
        printf("The matrix is NOT a Symmetric Matrix.\n");
    }
}

// Q79: Write a program to Find row-wise sum.
void solveQ79() {
    int rows, cols;
    printf("\n--- Q79: Find Row-wise Sum ---\n");
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculating sum for each row independently
    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += matrix[i][j];
        }
        printf("Sum of elements of Row %d = %d\n", i + 1, rowSum);
    }
}

// Q80: Write a program to Find column-wise sum.
void solveQ80() {
    int rows, cols;
    printf("\n--- Q80: Find Column-wise Sum ---\n");
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculating sum for each column independently
    for (int j = 0; j < cols; j++) {
        int colSum = 0;
        for (int i = 0; i < rows; i++) {
            colSum += matrix[i][j];
        }
        printf("Sum of elements of Column %d = %d\n", j + 1, colSum);
    }
}


// --- MAIN FUNCTION ---
int main() {
    int choice;

    printf("==================================================\n");
    printf("        DAY 20 ASSIGNMENTS (MENU DRIVEN)          \n");
    printf("==================================================\n");
    printf("77. Run Q77 (Multiply Matrices)\n");
    printf("78. Run Q78 (Check Symmetric Matrix)\n");
    printf("79. Run Q79 (Find Row-wise Sum)\n");
    printf("80. Run Q80 (Find Column-wise Sum)\n");
    printf("==================================================\n");
    printf("Select a program to run (77-80): ");
    scanf("%d", &choice);

    switch(choice) {
        case 77: solveQ77(); break;
        case 78: solveQ78(); break;
        case 79: solveQ79(); break;
        case 80: solveQ80(); break;
        default: printf("Invalid choice! Please select a number between 77 and 80.\n");
    }

    return 0;
}