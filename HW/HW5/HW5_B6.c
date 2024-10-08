/*
B6-Две одинаковые цифры
Ввести целое число и определить, верно ли, что в его записи есть две одинаковые цифры, стоящие рядом.
Формат входных данных: Одно целое число
Формат результата: Одно из слов: YES или NO
*/

# include <stdio.h>

int main(int argc, char **argv)
{

    int a, s1, s2;
    
    scanf("%d", &a);
    
    while (a > 0)
    {
        s1 = a % 10;
        s2 = a / 10 % 10;
        
        if (s1 == s2)
        {
            printf("YES");
            break; 
        }
        else
            {
                a /= 10;
            }
    }
    
    if (a <= 0)
        {
            printf("NO");
        }
    
    return 0;

}
