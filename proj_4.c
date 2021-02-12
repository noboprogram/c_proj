#include <stdio.h>
void main4(void)
{
	int age;

	age = 5;

	printf("%d歳です", age);

	return 0;


}

void shusei(int year, int month, int day)
{
	year = 1997;
	month = 11;
	day = 18;

	printf("私の生年月日は、%d年%d月%d日です。\n", year, month, day);

	return 0;
}

void hensu(int x)
{
	x = 11;
	
	printf("x=%d", x);

}

void hensu2(int x, int y, int z)
{
	x = 3;
	y = 7;

	z = x;
	x = y;
	y = z;



	printf("x = %d\ny = %d", x, y);

}

void hensu3(int x)
{
	(void)scanf_s("%d", &x);

	printf("x=%d", x);

}