/*
C17 - Сумма цифр равна произведению

Составить логическую функцию, которая определяет, верно ли,
что в заданном числе сумма цифр равна произведению.
int is_happy_number(int n)

Формат входных данных: Целое не отрицательное число
Формат результата: YES или NO
*/

#include <stdio.h>

int is_happy_number(int n)
{
    int sum = 0, prod = 1, rem = 0;
   
    while (n > 0)
    {
        rem = n % 10;
        sum += rem;
        prod *= rem;
        n /= 10;
    }
    
    if (sum == prod)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    
    scanf("%d", &n);
    
    is_happy_number(n) == 1 ? printf("YES") : printf("NO");

    return 0;
}


