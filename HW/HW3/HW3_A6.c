/*
A6-Разность двух чисел
Ввести два числа и найти их разность.

Формат входных данных: Два целых числа
Формат результата: Ответ - одно целое число
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int a, b, dif;
	
	scanf("%d %d", &a, &b);
	
	dif = a - b;

	printf("%d", dif);
	
	return 0;
}

