/*
E2 - Найти минимум

Ввести c клавиатуры массив из 5 элементов, найти минимальный из них.
Формат входных данных: 5 целых чисел через пробел
Формат результата: Одно единственное целое число
 */


#include <stdio.h>

# define SIZE 5

int Input(int arr[], int n)
{
    int i = 0;
    for (i=0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    return i;
}

int Min_finder(int arr[], int n)
{
int min = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}

int main(int argc, char **argv)
{
    
    int arr[SIZE] = {0};
    
    Input(arr, SIZE);
    
    printf("%d", Min_finder(arr, SIZE));
        
    return 0;
}

