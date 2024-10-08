/*
D1 - От 1 до N

Составить рекурсивную функцию, печать всех чисел от 1 до N
Формат входных данных : Одно натуральное число
Формат результата : Последовательность чисел от 1 до введенного числа
*/


#include <stdio.h>

void print_suseq(int n)
{
    if (n > 1)
        print_suseq(n - 1);
        
    printf("%d ", n);
}


int main()
{
    int n;
    
    scanf("%d", &n);
   
    print_suseq(n);
    
    return 0;
}
