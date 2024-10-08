/* C11 - НОД
Составить функцию, которая определяет наибольший общий делитель двух натуральных и привести пример ее использования. 
int nod(int a, int b)

Формат входных данных : Два целых положительных числа
Формат результата : Одно целое число - наибольший общий делитель.
*/

#include <stdio.h>

int nod(int a, int b)
{
    int max, min;
    
    a >= b ? (max = a, min = b) : (max = b, min = a);


    int ost = max % min;
        
    while (ost > 0)
    {
        ost = max % min;
        max = min;
        min = ost;
    }
        
    return max;

}

int main()
{
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    printf("%d", nod(a, b));

    return 0;
}
