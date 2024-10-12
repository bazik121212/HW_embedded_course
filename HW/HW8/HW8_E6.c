/*
E6-Среднее арифметическое 2

Считать массив из 12 элементов и посчитать среднее арифметическое элементов массива.

Формат входных данных: 12 целых чисел через пробел
Формат результата: Среднее арифметическое в формате "%.2f"
 */


#include <stdio.h>

# define SIZE 12

int Input(int arr[], int n)
{
    int i = 0;
    for (i=0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    return i;
}


float Mean(int arr[], int n)
{
    float sum = 0.;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    
    return sum / n;
}


int main(int argc, char **argv)
{
    
    int arr[SIZE] = {0};
    
    Input(arr, SIZE);  
    
    printf("%.2f", Mean(arr, SIZE));        
            
    return 0;
}

