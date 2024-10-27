/*
G6-Проверка на палиндром
 
Проверка на палиндром
В файле input.txt символьная строка не более 1000 символов. Необходимо проверить, является ли она палиндромом (палиндром читается одинаково в обоих направлениях). Реализовать логическую функцию is_palindrom(str) и записать ответ в файл output.txt.

Формат входных данных: Строка из заглавных английских букв
Формат результата: YES или NO
 */


#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_LEN 1001

bool is_palindrome(const char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");

    if (!input || !output) {
        return 1; // Ошибка открытия файла
    }

    char str[MAX_LEN];
    fgets(str, MAX_LEN, input);
    fclose(input);

    // Удаляем символ новой строки, если он есть
    str[strcspn(str, "\n")] = '\0';

    if (is_palindrome(str)) {
        fprintf(output, "YES\n");
    } else {
        fprintf(output, "NO\n");
    }

    fclose(output);
    return 0;
}
