/*
E7-Инверсия половин

Считать массив из 10 элементов и выполнить инверсию отдельно для 1-ой и 2-ой половин массива.
Необходимо изменить считанный массив и напечатать его одним циклом.

Формат входных данных: 10 целых элементов массива через пробел.
Формат результата: 10 целых элементов массива через пробел.
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

void Output(int arr[], int n)
{
    int i = 0;
    for (i=0; i < n; i++)
    {
        printf("%d ", arr[i]);
        
    }
    printf("\n");
}


void Inversion(int arr[], int first, int n)
{
    int temp = 0;
    for (int i = first; i < (first + n)/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[first + n - i];
        arr[first + n - i] = temp;
    } 
}


int main(int argc, char **argv)
{
    
    int arr[SIZE] = {0};
    
    Input(arr, SIZE);  
    
    Inversion(arr, 0, (SIZE/2-1));
    Inversion(arr, SIZE/2, (SIZE-1));
    
    Output(arr, SIZE);       
            
    return 0;
}

