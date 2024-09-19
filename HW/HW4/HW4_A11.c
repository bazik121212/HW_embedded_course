/*
A11-Сумма максимума и минимума
Напечатать сумму максимума и минимума.
Формат входных данных: Пять целых чисел через пробел
Формат результата: Одно целое число - сумма максимума и минимума
*/

# include <stdio.h>

int main(int argc, char **argv)
{

	int a, b, c, d, e, min, max, sum;
	
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

	max = a > b ? a : b;
	min = a < b ? a : b;
	max = c > max ? c : max;
	min = c < min ? c : min;
	max = d > max ? d : max;
	min = d < min ? d : min;
	max = e > max ? e : max;
	min = e < min ? e : min;

	sum = min + max;

	printf("%d", sum);
	
	return 0;

}
