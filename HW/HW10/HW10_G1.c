/*
G1-Три раза

В файле input.txt дана строка. 
Вывести ее в файл output.txt три раза через запятую и показать количество символов в ней.

Формат входных данных: Строка из английских букв и пробелов. Не более 100 символов. В конце могут быть незначащие переносы строк.
Формат результата: Исходная строка 3 раза подряд, через запятую пробел и количество символов в ней.
 */


#include <stdio.h>
#include <string.h>

int main(void)
{

    char buffer[100];
    char c;
    int counter = 0;
   
    FILE *f1; 
    FILE *f2; 
    
    f1 = fopen("input.txt", "r");
    
    // проверяем что файл существует
    if (f1 != NULL)
    {
        // пока символ не равен концу файла или переносу строки
        while (((c = getc(f1)) != EOF) && (c != '\n'))
            buffer[counter++] = c;
    }
    
    f2 = fopen("output.txt", "w");
    fprintf(f2, "%s, %s, %s %d", buffer, buffer, buffer, counter);       

    fclose(f1);
    fclose(f2);
    
    return 0;
}

