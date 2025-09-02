// 2 завдання
// ----------------------------------------------------------
// За допомогою рекурсії спробуйте виписати -
// визначити чи введене користувачем число є просте (primary)
// ==========================================================
#include <stdio.h>

// Input prime number
void input(int *n)
{
    printf("Enter a number: ");
    scanf(" %d", n);
}

// Checking prime numbers
int check_prime_nums(int n, int divider)
{
    if (n <= 1) // n not less than 2
        return 0;
    if (divider * divider > n) // the square of the divisor is not greater than n
        return 1;
    if (n % divider == 0) // If n can be divided by another number, then it is false
        return 0;

    return check_prime_nums(n, divider + 1); // increase the divisor
}

// Print prime number
void print_prime_num(int n)
{
    // If true
    if (check_prime_nums(n, 2))
        printf("%d is prime\n", n);

    // If false and other cases
    else
        printf("%d is not prime\n", n);
}

int main()
{
    int n; // prime number

    input(&n);
    print_prime_num(n);
}