/*
B4-Ровно три цифры
Ввести целое число и определить, верно ли, что в нём ровно 3 цифры..
Формат входных данных: Целое положительное число
Формат результата: Одно из слов: YES или NO
*/

# include <stdio.h>

int main(int argc, char **argv)
{

    int a, count = 0;
    
    scanf("%d", &a);

    while (a > 0)
    {
        count += 1;
        a = a / 10;
    }
    
    if (count == 3)
        printf("YES"); 
    else
        printf("NO");
      
    return 0;

}
