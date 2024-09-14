/*
A13-Произведение цифр
На вход подается произвольное трехзначное число, напечать произведение цифр.

Формат входных данных: Трехзначное целое положительное число
Формат результата: Одно целое число
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int number, prod, a, b, c;
	
	scanf("%d", &number);
	
	a = number / 100;
	b = number % 100 / 10;
	c = number % 10;
	
	prod = a * b * c;

	printf("%d\n", prod);
	
	return 0;
}

