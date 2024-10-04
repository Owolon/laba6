#define CRT_NO_SECURE_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//1
int main()
{
	setlocale(LC_CTYPE, "RUS");
	int yes;
	
	printf("Введите год:\n");
	scanf_s("%i",&yes);
	int ost = yes % 4;
	if (yes % 4 == 0 && yes%100 != 0)
	{
		printf("Год %i високосный\n", yes);
	}
	else
	{
		printf("Год %i не високосный\n", yes);
	}
//2
	//x=2 y=1/8
	double x;
	double y;

	scanf_s("%lf", &x);
	y = x <= 1 ? 0 : 1 / (x + 6);
	/*if (x <= 1)
	{
		y = 0;
	}
	else (x > 1);
	{
		y = 1 / (x + 6);
	}
	*/
	printf("Результат: %lf", y);

	return 0;
//3
	int xx;
	int yy;

	scanf_s("%lf", &xx);
	scanf_s("%lf", &yy);

}