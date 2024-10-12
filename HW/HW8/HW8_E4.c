/*
E4-Два максимума

Считать массив из 10 элементов и найти в нем два максимальных элемента и напечатать их сумму.
Формат входных данных: 10 целых чисел через пробел.
Формат результата: Сумма двух максимальных элементов.
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

void Swap(int arr[], int i, int j)
{
    int temp = 0;
    if (arr[i] > arr[j])
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

void BubbleSort(int arr[], int n)
{
    int noSwap = 0;
    for (int i = 0; i < n; i++)
    {
        noSwap = 1;
        for (int j = n - 1; j > i; j--)
        {
            if (arr[j-1] > arr[j])
            {
                Swap(arr, j-1, j);
                noSwap = 0;
            }
        }
        if (noSwap)
            break;
    }   
}



int main(int argc, char **argv)
{
    
    int arr[SIZE] = {0};
    
    Input(arr, SIZE);
    
    BubbleSort(arr, SIZE);
    
    printf("%d", (arr[SIZE - 1] + arr[SIZE - 2]));        
            
    return 0;
}

