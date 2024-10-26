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

	printf("Введите значение Y:\n");
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
	printf("Результат: %lf\n", y);

	
//3
	int xw, p = 0,o = 0;
	int yw, t = 0;
	printf("Введите заначение часов(0-12):\n");
	scanf_s("%d", &xw);
	printf("Введите заначение минут:\n");
	scanf_s("%d", &yw);

	if (yw != 60) {
		p = 60 - yw;
		t = xw * 5;
		yw = 60;
		if (yw == 60) {
			if (xw == 12||xw==0) {
				p += 5;
				o += 1;
			}
			xw += 1;
		}
	}
	if (o == 1) {
		printf("\nОтвет: %d", p);
	}
	else (o == 0);
	{
		printf("\nОтвет: %d", t + p);
	}
	return 0;
}