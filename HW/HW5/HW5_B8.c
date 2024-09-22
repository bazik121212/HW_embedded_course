/*
B8-Ровно одна цифра 9
Ввести целое число и определить, верно ли, что в нём ровно одна цифра «9».
Формат входных данных: Одно целое число
Формат результата: Одно из слов: YES или NO
*/

# include <stdio.h>

int main(int argc, char **argv)
{

    int a, symbol, count = 0;
    
    scanf("%d", &a);
    
    while (a > 0)
    {
        symbol = a % 10;
        a /= 10; 
        
        if (symbol == 9)
        {
            count += 1;
        }
    }
   
    if (count == 1)
        printf("YES");
    else
        printf("NO");
    
    return 0;

}
