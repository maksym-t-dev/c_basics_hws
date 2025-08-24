// Завдання 2: Шифр Цезаря
// ---------------------------------------------------------------------------------------------------
// Написати програму на C, яка реалізує шифр Цезаря. Користувач повинен ввести три букви,
// наприклад, "a b c", і програма повинна зашифрувати їх,
// зсунувши кожну букву на задану кількість позицій. Кожна буква повинна оброблятися як окрема змінна.
// ===================================================================================================
#include <stdio.h>

int main()
{
    char a, b, c; // letters
    int shift; // shift

    // Input letters
    printf("\nEnter 3 letters using space: ");
    scanf("%c %c %c", &a, &b, &c);

    // Input shift
    printf("Enter offset: ");
    scanf("%d", &shift);

    // Check for a
    if (a >= 65 && a <= 90) // check for A-Z
    {
        a = (a - 65 + shift) % 26 + 65;
    }
    else if (a >= 97 && a <= 122) // check for a-z
    {
        a = (a - 97 + shift) % 26 + 97;
    }

    // Check for b
    if (b >= 65 && b <= 90) // check for A-Z
    {
        b = (b - 65 + shift) % 26 + 65;
    }
    else if (b >= 97 && b <= 122) // check for a-z
    {
        b = (b - 97 + shift) % 26 + 97;
    }

    // Check for c
    if (c >= 65 && c <= 90) // check for c A-Z
    {
        c = (c - 65 + shift) % 26 + 65;
    }
    else if (c >= 97 && c <= 122) // check for c a-z
    {
        c = (c - 97 + shift) % 26 + 97;
    }

    else {
        printf("\nError!\n\n");

        return 1;
    }

    // Result
    printf("\nResult --> %c %c %c\n\n", a, b, c);

    return 0;
}