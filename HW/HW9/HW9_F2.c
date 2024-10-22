/*
F2-Четные в начало

Написать только одну функцию, которая ставит в начало массива все четные элементы, а в конец – все нечетные. 
Не нарушайте порядок следования чисел между собой. Строго согласно прототипу: void sort_even_odd(int n, int a[])
Формат входных данных: Функция принимает на вход целые числа
Формат результата: Отсортированный исходный массив
 */


#include <stdio.h>
/*
#define SIZE 5

int input_array(int a[], int n)
{
    int i = 0;
    
    for (i=0; i<n; i++) 
    {
        scanf("%d", &a[i]);
    }
    return i;
}

void output_array(int a[], int n)
{
    int i = 0;
    for (i=0; i<n; i++) 
    {
        printf("%d ", a[i]);
    }
}
*/
void sort_even_odd(int n, int a[])
{
    int no_change = 0;
    int temp = 0;
    
    for (int i=0; i<n; i++)
    {
        no_change = 1;
           
        for (int j=(n-1); j>i; j--)
        {
            if ( a[j] % 2 == 0 && a[j - 1] % 2 != 0)
            {
                temp = a[j-1];
                a[j-1] = a[j];
                a[j] = temp;
                
                no_change = 0;
            } 
        }
        if (no_change)
            break;
    }
    //output_array(a, size);
}

/*
int main(int argc, char **argv)
{
    
    int a[SIZE]={0};
    
    input_array(a, SIZE);
    
    sort_even_odd(SIZE, a);
    
    return 0;
}
*/
