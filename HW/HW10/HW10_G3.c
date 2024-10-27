/*
G3-Последний символ - номера

В файле input.txt дана строка из 1000 символов. 
Показать номера символов, совпадающих с последним символом строки. 
Результат записать в файл output.txt

Формат входных данных: Строка не более 1000 символов
Формат результата: Целые числа через пробел - номера символа, который совпадает с последним символом строки.
 */


#include <stdio.h>

int main(void)
{

    int n = 0; 
    char symbol, c;
   
    FILE *f1, *f2;  
    
    f1 = fopen("input.txt", "r");
    f2 = fopen("output.txt", "w");
    
    // опрделяем последний символ файла
    fseek(f1, -1, SEEK_END);
    symbol = fgetc(f1);
    
    fseek(f1, 0, SEEK_END);
    n = ftell(f1); // количество символов в файле
    
    // возвращаем указатель в начало файла
    fseek(f1, 0, SEEK_SET);
   
    if (f1 != NULL && f2 != NULL)
    {
        int i = 0;
        int first = 1; // первый найденный элемент
        while ((c = getc(f1)) != EOF && i < (n - 1))
        {
            if (c == symbol)
            {
                if (!first)
                {    
                    fprintf(f2, " ");
                    printf(" ");
                }
                else
                {
                    first = 0;
                }  
                fprintf(f2, "%d", i);
            }
            i++;
        }   
    }

    fclose(f1);
    fclose(f2);
    
    return 0;
}

