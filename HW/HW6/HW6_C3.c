
/*
C3-Среднее арифметическое

Написать функцию, которая возвращает среднее арифметическое двух переданных ей аргументов (параметров).
int middle(int a, int b)
Формат входных данных: Два целых не отрицательных числа
Формат результата: Одно целое число
*/


#include <stdio.h>

int middle(int a, int b)
{
    int mid;
    
    mid = (a + b)/2;
    
    return mid;
}


int main()
{
    int a, b;
    
    scanf("%d %d", &a, &b);
   
    printf("%d", middle(a, b));

    return 0;
}
