#include <stdio.h>


void enzan1(int x)
{
	x = 13 + 17;
	printf("x = %d", x);

}

void enzan2(void)
{
	printf("%d", 13 * 17);

}

void enzan3(int x)
{

	x = 7;

	x *= 3;

	printf("x = %d\n", x);

	x /= 2;

	printf("x = %d\n", x);

}

void enzan4(int x, int y, int z)
{
	x = 19;

	y = 23;

	z = x * y;

	printf("%d", z);

}

void enzan5(int x, int y)
{
	//scanf_s("%dX�ɐ������L�����Ă��������B", &x);

	while (y <= 4)
	{
		y = 2;

		x = 2;
		
		printf("X��2�{��%d�ł��B\n", x*y);

		y++;
	}

}