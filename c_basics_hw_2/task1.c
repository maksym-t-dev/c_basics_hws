// 1 завдання
// ---------------------------------------------------------------------------------------
// Користувач задає 2 числа - min та max (потрібно також вирішити яке з чисел буде більше)
// потрібно виписати в термінал всі числа фібоначі цього проміжку
// =======================================================================================
#include <stdio.h>

// Correct input min and max value
void correct_input(int *min, int *max)
{
    if (*min > *max) // min value is greater than the max = swape
    {
        int temp = *min;
        *min = *max;
        *max = temp;
    }
    printf("Range [ %d : %d ]\n", *min, *max); // print range
}

// Input minimum and maximum value
void input_min_and_max_value(int *min, int *max)
{
    printf("\nEnter minimum and maximum value: ");
    scanf(" %d %d", min, max);

    correct_input(min, max);
}

// Fibonacci numbers
unsigned long long fibonacci(int n)
{
    if (n <= 1) // n less than or equal to 1, return n
        return n;

    // All other Ribonacci numbers
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int min, max; // minimum and maximum value

    input_min_and_max_value(&min, &max); // input min, max value

    for (int i = 1; i <= max; ++i)
    {
        if (fibonacci(i) < min) // start Fibonacci numbers
            fibonacci(i);

        if (fibonacci(i) > max) // F(i) > max value = exit
        {
            printf("\n");
            break;
        }

        if (fibonacci(i) >= min && fibonacci(i) <= max) // Range Fibonacci numbers
            if (i == 1)
                printf("\nResult -->");
            printf(" %llu", fibonacci(i)); // print Fibonacci numebrs
    }
}