// 4 завдання
// ----------------------------------------------------------------------------
// Користувач задає m та n значення, а також символ яким буде заповнена матриця
// виведіть матрицю MxN заповнену обраним символом
// ============================================================================
#include <stdio.h>

// Input matrix size (m, n)
void input_matrix_size(int *m, int *n)
{
    printf("\nEnter matrix size: ");
    scanf(" %d %d", m, n);
}

// Input symbol for matrix (symbol)
void input_symbol(char *s)
{
    printf("Enter symbol: ");
    scanf(" %c", s);

    printf("\n");
}

// Output matrix
void print_matrix(int rows, int cols, int s)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            printf(" %c", s);
        }
        printf("\n");
    }
}

int main()
{
    int m, n; // matrix size
    char symbol; // symbol for matrix

    // Input
    input_matrix_size(&m, &n);
    input_symbol(&symbol);

    // Output
    print_matrix(m, n, symbol);
}