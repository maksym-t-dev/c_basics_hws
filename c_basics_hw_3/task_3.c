// Завдання 3
// Знайдіть найбільший елемент у матриці.
// Виведіть його позицію (рядок-колонка) а також це число
// ------------------------------------------------------
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Random numbers [10:99]
int get_rand()
{
    return (rand() % ((10 - 99) + 1) + 10);
}

int main()
{
    srand(time(NULL));

    const int ROWS = 3, COLS = 4; // matrix size
    int matrix[ROWS][COLS]; // matrix

    // Input and print matrix
    for (int i = 0; i < ROWS; ++i)
    {
        for (int j = 0; j < COLS; ++j)
        {
            matrix[i][j] = get_rand(); // random value
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    int max_value = 0; // max value
    for (int i = 0; i < ROWS; ++i)
    {
        for (int j = 0; j < COLS; ++j)
        {
            if (matrix[i][j] == matrix[0][0] || max_value < matrix[i][j])
                max_value = matrix[i][j];
        }
    }

    bool isMatrixFirstMax = true; // matrix first maximum value
    for (int i = 0; i < ROWS; ++i)
    {
        for (int j = 0; j < COLS; ++j)
        {
            // The maximum value is exactly that position in the matrix
            if (max_value == matrix[i][j] && isMatrixFirstMax)
            {
                printf("[%d:%d] ", i, j);
                isMatrixFirstMax = false;
            }
        }
    }
    printf("%d", max_value);
}