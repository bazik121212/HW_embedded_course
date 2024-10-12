/*
E1-Среднее арифметическое

Ввести c клавиатуры массив из 5 элементов, 
найти среднее арифметическое всех элементов массива.

Формат входных данных: 5 целых не нулевых чисел через пробел
Формат результата: Одно число в формате "%.3f"
*/

#include <stdio.h>

#define SIZE 5

int Input(int arr[], int n)
{    
int i;
  
    for (i=0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    return i;
}


float Mean(int arr[], int n)
{
    float sum = .0;
    
    for (int i=0; i < n; i++)
    {
        sum += arr[i];
    }
    
    return (sum / n);
}

int main()
{
    float mean=0;
    int arr[SIZE];
    
    
    Input(arr, SIZE);
    
    mean = Mean(arr, SIZE);
    
    printf("%.3f", mean);
    
    return 0;
}


