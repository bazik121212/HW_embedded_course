/*
G4-Совпадения букв

В файле input.txt даны два слова не более 100 символов каждое, разделенные одним пробелом. 
Найдите только те символы слов, которые встречаются в обоих словах только один раз. 
Напечатайте их через пробел в файл output.txt в лексикографическом порядке.

Формат входных данных: Два слова из маленьких английских букв через пробел. Длинна каждого слова не больше 100 символов.
Формат результата: Маленькие английские буквы через пробел.
 */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_LEN 101

void count_chars(const char *word, int *count) {
    for (int i = 0; word[i] != '\0'; i++) {
        count[word[i] - 'a']++;
    }
}

int main() {
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");
    
    if (!input || !output) {
        return 1; // Ошибка открытия файла
    }

    char word1[MAX_LEN], word2[MAX_LEN];
    fscanf(input, "%s %s", word1, word2);
    fclose(input);

    int count1[26] = {0}, count2[26] = {0};

    count_chars(word1, count1);
    count_chars(word2, count2);

    char result[26];
    int result_count = 0;

    for (int i = 0; i < 26; i++) {
        if (count1[i] == 1 && count2[i] == 1) {
            result[result_count++] = 'a' + i;
        }
    }

    // Сортируем результат
    for (int i = 0; i < result_count - 1; i++) {
        for (int j = i + 1; j < result_count; j++) {
            if (result[i] > result[j]) {
                char temp = result[i];
                result[i] = result[j];
                result[j] = temp;
            }
        }
    }

    // Записываем результат в файл
    for (int i = 0; i < result_count; i++) {
        fprintf(output, "%c", result[i]);
        if (i < result_count - 1) {
            fprintf(output, " ");
        }
    }

    fclose(output);
    return 0;
}
