/*
G7-Количество букв

Количество букв
В файле input.txt считать символьную строку, не более 10 000 символов. Посчитать количество строчных (маленьких) и прописных (больших) букв в введенной строке. 
Учитывать только английские буквы. Результат записать в файл output.txt.

Формат входных данных: Строка состоящая из английских букв, цифр, пробелов и знаков препинания.
Формат результата: Два целых числа. Количество строчных букв и количество заглавных букв.
 */

#include <stdio.h>
#include <ctype.h>

#define MAX_LEN 10001

int main() {
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");

    if (!input || !output) {
        return 1; // Ошибка открытия файла
    }

    char str[MAX_LEN];
    fgets(str, MAX_LEN, input);
    fclose(input);

    int lowercase_count = 0;
    int uppercase_count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) {
            lowercase_count++;
        } else if (isupper(str[i])) {
            uppercase_count++;
        }
    }

    fprintf(output, "%d %d\n", lowercase_count, uppercase_count);
    fclose(output);
    return 0;
}
