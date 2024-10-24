/*
F3-Цифры по возрастанию

Написать функцию и программу демонстрирующую работу данной функции.
Вывести в порядке возрастания цифры, входящие в десятичную запись натурального числа N, не более 1000 цифр. 
Цифра пробел сколько раз данная цифра встречается в числе.
Формат входных данных: Натуральное число не более 1000 цифр
Формат результата: Цифры входящие в число через пробел в порядке возрастания. От самой младшей цифры до самой старшей и количество.
 */

#include <stdio.h>

void print_digit(char s[])
{
    int count_digits[10] = {0};

    scanf("%[^\n]", s);
    
    for (int i=0; s[i]; i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
            count_digits[s[i] - '0']++;  
    }
    
    for (int j=0; j < 10; j++)
    {
        if (count_digits[j] > 0)
            printf("%d %d\n", j, count_digits[j]);
    }
}

int main(int argc, char **argv)
{
    char str[1000]="0";
    
    print_digit(str);
    
    return 0;
}
