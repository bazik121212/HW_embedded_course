/*
F1-Сортировка по возрастанию

Написать только одну функцию, которая сортирует массив по возрастанию. 
Необходимо реализовать только одну функцию, всю программу составлять не надо.
Строго согласно прототипу. Имя функции и все аргументы должны быть: 
void sort_array(int size, int a[]).
Всю программу загружать не надо, только одну эту функцию. 
Можно просто закомментировать текст всей программы, кроме данной функции.
Формат входных данных: Функция принимает на вход, первый аргумент - размер массива, второй аргумент - адрес нулевого элемента.
Формат результата: Функция ничего не возвращает. Производит сортировку переданного ей массива по возрастанию.
 */

/*
#include <stdio.h>

#define SIZE 20

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
void sort_array(int size, int a[])
{
    int no_change = 0;
    int temp = 0;
    
    for (int i=0; i<size; i++)
    {
        no_change = 1;
           
        for (int j=(size-1); j>i; j--)
        {
            if (a[j-1] > a[j])
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
    
    sort_array(SIZE, a);
    
    return 0;
}
*/
