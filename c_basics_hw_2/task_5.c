// 5 завдання
// ---------------------------------------------------------------------------------
// користувач має задати в консоль числа min та max,
// Використовуючи цикли потрібно вивести всі числа з інтервалом в +1 від min до max.
// =================================================================================
#include <stdio.h>

// Input min value
void input_min_value(int *m)
{
    printf("Enter minimum value: ");
    scanf(" %d", m);
}

// Input max value
void input_max_value(int *m)
{
    printf("Enter maximum value: ");
    scanf(" %d", m);
}

// Print number range
void print_range(int min, int max)
{
    char comma = ',', dot = '.';

    printf("\nResult -- > ");

    for (int i = min; i <= max; ++i)
    {
        printf("%d%c ", i, (i != max) ? comma : dot);
    }
    printf("\n");
}

int main()
{
    int min, max; // min and max value

    // Input
    input_min_value(&min);
    input_max_value(&max);

    // Output
    print_range(min, max);
}