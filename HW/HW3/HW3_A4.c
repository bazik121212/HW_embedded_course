/*
A4-Произведение трех чисел
Ввести три числа, найти их сумму и произведение.

Формат входных данных: Три целых числа через пробел.
Формат результата: Строка вида
%d+%d+%d=%d
%d*%d*%d=%d
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int a, b, c, sum, prod;
	scanf("%d %d %d", &a, &b, &c);
	
	sum = a + b + c;
	prod = a * b * c;
	
	printf("%d+%d+%d=%d\n", a, b, c, sum);
	printf("%d*%d*%d=%d", a, b, c, prod);
	
	return 0;
}

