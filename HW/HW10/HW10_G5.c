/*
G5-Заменить a на b

В файле input.txt дана символьная строка не более 1000 символов. Необходимо заменить все буквы "а" на буквы "b" и наоборот, как заглавные, так и строчные. Результат записать в output.txt.

Формат входных данных: Строка из маленьких и больших английских букв, знаков препинания и пробелов.
Формат результата: Строка из маленьких и больших английских букв, знаков препинания и пробелов.
 */


#include <stdio.h>
#include <string.h>

#define MAX_LEN 1001

int main() {
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");

    if (!input || !output) {
        return 1; // Ошибка открытия файла
    }

    char str[MAX_LEN];
    fgets(str, MAX_LEN, input);
    fclose(input);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a') {
            str[i] = 'b';
        } else if (str[i] == 'b') {
            str[i] = 'a';
        } else if (str[i] == 'A') {
            str[i] = 'B';
        } else if (str[i] == 'B') {
            str[i] = 'A';
        }
    }

    fprintf(output, "%s", str);
    fclose(output);
    return 0;
}
