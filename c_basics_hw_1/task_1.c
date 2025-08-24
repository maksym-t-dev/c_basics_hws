// Завдання 1: Калькулятор
// ---------------------------------------------------------------------------------------------
// Написати калькулятор на мові C.
// Програма повинна підтримувати операції
// множення, ділення, додавання та віднімання як для цілих, так і для нецілих чисел.
// Має бути підтримка також і від'ємних чисел. Потрібно передбачити перевірку на ділення на нуль
// і виводити відповідну помилку в консоль.
// =============================================================================================
#include <stdio.h>

int main()
{
    enum
    {
        multiply = 42,
        plus = 43,
        minus = 45,
        divide = 47
    };

    float a, b; // numbers

    char operation; // operation

    float result; // result of the operation

    // Input
    printf("\nEnter number a: "); // number a
    scanf("%f", &a);

    printf("Enter number b: "); // number b
    scanf("%f", &b);

    printf("\nEnter operation: "); // operation
    scanf(" %c", &operation);

    printf("\n");

    switch(operation)
    {
        case multiply:
            result = a * b;
            break;
        case plus:
            result = a + b;
            break;
        case minus:
            result = a - b;
            break;
        case divide:
            if (b != 0)
            {
                result = a / b;
            } else
            {
                printf("\nDivision by zero is impossible!\n\n");
                return 1;
            }
            break;
        default:
            printf("\nError!\n\n");
            return 1;
            break;
    }

    printf("%.1f + %.1f = %.2f\n\n", a, b, result);

    return 0;
}