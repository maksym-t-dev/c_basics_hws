// 2 завдання
// ----------------------------------------------------------
// За допомогою рекурсії спробуйте виписати -
// визначити чи введене користувачем число є просте (primary)
// ==========================================================
#include <stdio.h>

void input(int *n)
{
    printf("Enter a number: ");
    scanf(" %d", n);
}

int checking_prime_numbers(int n, int divider)
{
    if (n <= 1)
        return 0;
    if (divider * divider > n)
        return 1;
    if (n % divider == 0)
        return 0;

    return checking_prime_numbers(n, divider + 1);
}

void print_prime_numbers(int n)
{
    if (checking_prime_numbers(n, 2))
        printf("%d is prime\n", n);
    else
        printf("%d is not prime\n", n);
}

int main()
{
    int n;

    input(&n);
    print_prime_numbers(n);
}