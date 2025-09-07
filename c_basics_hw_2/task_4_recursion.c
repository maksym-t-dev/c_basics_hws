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

// Print row
void print_cols(int n, char s)
{
    if (n == 0)
        return;

    printf("%c ", s);

    print_row(n - 1, s);
}

// Print matrix
void print_matrix(int m, int n, char s)
{
    if (m == 0)
        return;

    print_row(n, s);

    printf("\n");

    print_matrix(m - 1, n, s);
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