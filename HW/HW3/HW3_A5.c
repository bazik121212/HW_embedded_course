/*
A5-Среднее арифметиеское
Ввести три числа, найти их среднее арифметическое.

Формат входных данных: Три целых числа
Формат результата: Вещественное число в формате %.2f
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int a, b, c;
	float mean;
	
	scanf("%d %d %d", &a, &b, &c);
	
	mean = (a + b + c) / 3.;

	printf("%.2f", mean);
	
	return 0;
}

