
/*
A7 - Наибольшее из чисел
Ввести два числа и вывести их в порядке возрастания.
Формат входных данных: два целых числа
Формат результата: два целых числа
*/

# include <stdio.h>

int main(int argc, char **argv)
{
	int a, b;

	scanf("%d %d", &a, &b);

	if (a > b)
	{
		printf("%d %d", b, a);
	}
	else
	{
		printf("%d %d", a, b);
	}
	return 0;
}
