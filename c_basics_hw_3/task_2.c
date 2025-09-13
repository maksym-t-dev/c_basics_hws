// Завдання 2
// ---------------------------------------------------
// Створіть калькулятор матриць.
// Цікавить саме операція додавання.
// Потрібно вивести матрицю 1, матрицю 2 та результат.
// ===================================================
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Allocating memory for the matrix
void memory_allocation(int **m, const int ROWS, const int COLS)
{
    *m = (int *) malloc(ROWS * COLS * sizeof(int));
}

// Random number
int get_random()
{
    // Range [ 10 : 49 ]
    const int min = 10;
    const int max = 49;

    return (rand() % ((max - min) + 1) + min); // return random number
}

// Input matrix
void intput_matrix(int *m, int rows, int cols)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            m[i * cols + j] = get_random();
        }
    }
}

// Print matrix
void print_matrix(int *m, int rows, int cols)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            printf(" %d", (m[i * cols + j]));
        }
        printf("\n");
    }
}

// Sum of matrices
void sum_matrices(int *m_a, int *m_b, int rows, int cols)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            m_a[i * cols + j] += m_b[i * cols + j];
        }
    }
}

int main()
{
    srand(time(NULL));

    // Matrix size
    const int ROWS = 3;
    const int COLS = 4;

    int *matrix_a; // matrix a
    int *matrix_b; // matrix b

    // Memory allocation
    memory_allocation(&matrix_a, ROWS, COLS);
    memory_allocation(&matrix_b, ROWS, COLS);

    // Input
    intput_matrix(matrix_a, ROWS, COLS);
    intput_matrix(matrix_b, ROWS, COLS);

    // Print
    printf("\n Matrix a: \n");
    print_matrix(matrix_a, ROWS, COLS);

    printf("\n Matrix b: \n");
    print_matrix(matrix_b, ROWS, COLS);
    printf("\n");

    // Result
    sum_matrices(matrix_a, matrix_b, ROWS, COLS);

    printf(" Result \n");
    print_matrix(matrix_a, ROWS, COLS);
    printf("\n");
}
