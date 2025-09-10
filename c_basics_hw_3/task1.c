// Завдання 1
// -------------------------------------------------------------------
// Створіть 2х вимерний масив якій буде заповнений рандомними числами.
// Виведіть цю матрицю
// ===================================================================
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int ROWS = 3, COLS = 4; // matrix size [3; 4]
    int matrix[ROWS][COLS]; // matrix

    srand(time(NULL));

    const int MIN = 10, MAX = 99; // min and max value (range)

    for (int i = 0; i < ROWS; ++i) // rows
    {
        for (int j = 0; j < COLS; ++j) // cols
        {
            // Random number, write to variable arr and output
            int arr = matrix[i][j] = (rand() %
                ((MAX - MIN) + 1) + MIN);
            printf("%d ", arr);
        }
        printf("\n");
    }
}