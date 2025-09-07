// 6 завдання
// ----------------------------------------------------------------------------------------
// Напишіть програму яка в консоль буде виводити 7 чисел після заданого користувачем числа.
// Використайте #define
// Example Input : 5
// Output : 5 6 7 8 9 10 11 12
// ========================================================================================
#include <stdio.h>

#define how_many_numbers 7 // fixed value of numbers after the initial number

// Input start number
void input_n(int *n)
{
    printf("Enter a number: ");
    scanf(" %d", n);
}

// Output
void print_nums(int n)
{
    printf("<%d> ", n); // start number

    for (int i = 0; i < how_many_numbers; ++i) // If "i" is less than "how_many_numbers" - print
    {
        printf("%d ", ++n);
    }
}

int main()
{
    int n;

    // Input
    input_n(&n);

    // Output
    print_nums(n);
}