/*
D3-В обратном порядке

Дано целое не отрицательное число N. Выведите все его цифры по одной,
в обратном порядке, разделяя их пробелами или новыми строками.
Составить рекурсивную функцию.
Формат входных данных: Одно не отрицательное целое число
Формат результата: Последовательность цифр введенного числа в обратном порядке через пробел
*/

#include <stdio.h>

void numbers(int n)
{
    
    if (n > 0)
    
    {
        printf("%d ", (n % 10));
        return numbers(n / 10);
    }
}

int main()
{
    int n;
    
    scanf("%d", &n);
   
    if (n > 0)
        numbers(n);
    else if (n == 0)
        printf("%d ", n);
    
    return 0;
}
