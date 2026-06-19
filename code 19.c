// ============================================================================
// Title: Summer Vacation Self Learning Assignments - Day 19 (Matrix Operations)
// Company Information: TCS, Infosys, Wipro
// ============================================================================
#include <stdio.h>

// --- FUNCTIONS FOR EACH ASSIGNMENT ---

// Q73: Write a program to Add matrices.
void solveQ73() {
    int rows, cols;
    printf("\n--- Q73: Add Two Matrices ---\n");
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix1[rows][cols], matrix2[rows][cols], sumMatrix[rows][cols];

    printf("Enter elements for Matrix 1:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements for Matrix 2:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Adding corresponding elements of both matrices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("Resultant Matrix after Addition:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", sumMatrix[i][j]);
        }
        printf("\n");
    }
}

// Q74: Write a program to Subtract matrices.
void solveQ74() {
    int rows, cols;
    printf("\n--- Q74: Subtract Two Matrices ---\n");
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix1[rows][cols], matrix2[rows][cols], diffMatrix[rows][cols];

    printf("Enter elements for Matrix 1:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements for Matrix 2:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Subtracting elements of Matrix 2 from Matrix 1
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            diffMatrix[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    printf("Resultant Matrix after Subtraction:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", diffMatrix[i][j]);
        }
        printf("\n");
    }
}

// Q75: Write a program to Transpose matrix.
void solveQ75() {
    int rows, cols;
    printf("\n--- Q75: Transpose Matrix ---\n");
    printf("Enter rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols], transpose[cols][rows];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Finding transpose by swapping rows and columns indices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("Transposed Matrix:\n");
    // Outer loop runs up to 'cols' because rows and columns are swapped
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
}

// Q76: Write a program to Find diagonal sum.
void solveQ76() {
    int size, diagonalSum = 0;
    printf("\n--- Q76: Find Diagonal Sum (Square Matrix) ---\n");
    printf("Enter the size of the square matrix (Rows = Columns): ");
    scanf("%d", &size);

    int matrix[size][size];
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
            
            // Primary diagonal elements have the same row and column index (i == j)
            if (i == j) {
                diagonalSum += matrix[i][j];
            }
        }
    }

    printf("The sum of the primary diagonal elements is: %d\n", diagonalSum);
}


// --- MAIN FUNCTION ---
int main() {
    int choice;

    printf("==================================================\n");
    printf("        DAY 19 ASSIGNMENTS (MENU DRIVEN)          \n");
    printf("==================================================\n");
    printf("73. Run Q73 (Add Matrices)\n");
    printf("74. Run Q74 (Subtract Matrices)\n");
    printf("75. Run Q75 (Transpose Matrix)\n");
    printf("76. Run Q76 (Find Diagonal Sum)\n");
    printf("==================================================\n");
    printf("Select a program to run (73-76): ");
    scanf("%d", &choice);

    switch(choice) {
        case 73: solveQ73(); break;
        case 74: solveQ74(); break;
        case 75: solveQ75(); break;
        case 76: solveQ76(); break;
        default: printf("Invalid choice! Please select a number between 73 and 76.\n");
    }

    return 0;
}