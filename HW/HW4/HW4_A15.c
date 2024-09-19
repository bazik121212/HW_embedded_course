/*
A15-Уравнение прямой
Определить уравнение прямой по координатам двух точек. Уравнение вида y=k*x+b
Формат входных данных: Четыре целых числа через пробел. Координаты X1 Y1 X2 Y2
Формат результата: Два числа K,B в формате "%.2f %.2f"
*/

# include <stdio.h>

int main(int argc, char **argv)
{
	int x1, y1, x2, y2;
	float k, b;

	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

	k = (y1 - y2) * 1. / (x1 - x2);
	b = y1 - k * x1;

	printf("%.2f %.2f\n", k, b);

return 0;
}