/*
E3-Максимум и минимум и их номера

Считать массив из 10 элементов и найти в нем максимальный и минимальный элементы и их номера.
Формат входных данных: 10 целых чисел через пробел
Формат результата: 4 целых числа через пробел: номер максимума, максимум, номер минимума, минимум
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

void MinMax_finder(int arr[], int n)
{
int min = arr[0], max = arr[0];
int i_min=1, i_max=1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            i_min = i + 1;
        }
        else if (arr[i] > max)
        {
            max = arr[i];
            i_max = i + 1;
        }
    }
    printf("%d ", i_max);
    printf("%d ", max);
    printf("%d ", i_min);
    printf("%d", min);
}

int main(int argc, char **argv)
{
    
    int arr[SIZE] = {0};
    
    Input(arr, SIZE);
    
    MinMax_finder(arr, SIZE);
            
    return 0;
}

