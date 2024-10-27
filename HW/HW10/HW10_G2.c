/*
G2-Строка и цифры

Считать число N из файла input.txt. 
Сформировать строку из N символов. N четное число, не превосходящее 26. На четных позициях должны находится четные цифры в порядке возрастания, кроме 0, на нечетных позициях - заглавные буквы в порядке следования в английском алфавите. Результат записать в файл output.txt

Формат входных данных: Четное N ≤ 26
Формат результата: Строка из английских букв и цифр
 */


#include <stdio.h>

int main(void)
{

    char buffer[100];

    int n;
    char num='2', let='A';
   
    FILE *f1; 
    FILE *f2; 
    
    f1 = fopen("input.txt", "r");
    fscanf(f1, "%d", &n);
   
    if (f1 != NULL)
    {
        for (int i=0; i<n; i++)
        {
            if (i % 8 == 0)
                num='2';
            
            if ((i % 2 != 0) ) 
            {
                buffer[i] = num;
                num = buffer[i] + 2;   
            }
            else
            {
                buffer[i] = let;
                let = buffer[i] + 1;
            }
        }
    }

    f2 = fopen("output.txt", "w");
    fprintf(f2, "%s", buffer);  
    //printf("%s", buffer);      

    fclose(f1);
    fclose(f2);
    
    return 0;
}

