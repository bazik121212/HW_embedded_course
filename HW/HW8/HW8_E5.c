/*
E5-Сумма положительных элементов

Считать массив из 10 элементов и посчитать сумму положительных элементов массива.

Формат входных данных: 10 целых чисел через пробел
Формат результата: Одно целое число - сумма положительных элементов массива
 */


#include <stdio.h>

# define SIZE 10

int Input(int arr[], int n)
{
    int i = 0;
    for (i=0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    return i;
}


int PosSum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            sum += arr[i];
    }
    return sum;
}



int main(int argc, char **argv)
{
    
    int arr[SIZE] = {0};
    
    Input(arr, SIZE);  
    
    printf("%d", PosSum(arr, SIZE));        
            
    return 0;
}

