/*
D8 - Числа от A до B

Составить рекурсивную функцию, Выведите все числа от A до B включительно, в порядке возрастания, если A < B, или в порядке убывания в противном случае.

Формат входных данных: Два целых числа через пробел.
Формат результата: Последовательность целых чисел.
*/

# include <stdio.h>

void sorted_range(int a, int b, int gap)
{
    
    if (a != b)
    {
        printf("%d ", a); 
        a += gap;
        sorted_range(a, b, gap);        
    }  
    
}

int main(int argc, char **argv)
{

    int a, b, gap;
    
    scanf("%d %d", &a, &b);
    
    gap = (a < b)? 1 : -1;
    
    sorted_range(a, b, gap);
    
    printf("%d ", b); 
    
    return 0;

}
