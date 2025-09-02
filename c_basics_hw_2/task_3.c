// 3* завдання
// --------------------------------------------------------------------------
// виведіть матрицю
// користувач задає максимальне число матриці, вам потрібно вигадати алгоритм
// який виведе матрицю чисел так як це в прикладі:
// Example Input: 3
// --------------------------------------------------------------------------
// Output:
// --------------------------------------------------------------------------
// 3 3 3 3 3
// 3 2 2 2 3
// 3 2 1 2 3
// 3 2 2 2 3
// 3 3 3 3 3
// ==========================================================================
#include <stdio.h>

// Input n
void input_n(int *n)
{
    printf("\nEnter the maximum number for the matrix: ");
    scanf(" %d", n);

    printf("\n");
}

// Print matrix
void print_matrix(int n)
{
    for (int i = 1; i <= 5; ++i) // cols
    {
        for (int j = 1; j <= 5; ++j) // rows
        {
            if ((i > 1 && i != 5) && (j > 1 && j != 5)) // output n-1 or n-2
            {
                // Central number
                if (i == 3 && j == 3)
                    printf(" %d", n - 2);

                // Everything else (n - 1)
                else
                    printf(" %d", n - 1);
            }
            // Maximum value
            else
                printf(" %d", n);
        }
        printf("\n");
    }
}

int main()
{
    int n; // initial value

    input_n(&n);
    print_matrix(n);
}