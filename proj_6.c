#include <stdio.h>

void ihu(int num)
{
	//num = 10;

	scanf_s("%d", &num);

	if (num <= 10) {

		printf("good");

	}

	else {

		printf("false");

	}

}

void wairu(int num)
{
	//num = 1;

	while (num <= 10) {

		scanf_s("%d", &num);

		printf("%d\n", num);

		++num;
	}
}

void wairudo(int num)
{
	//num = 10;
	scanf_s("%d", &num);

	do {

		printf("%d\n", num);

		++num;

	} while (num <= 20);
}

void swit(int num) {

	scanf_s("%d", &num);

	switch (num) {
		case 1:
			printf("%dが記述されました。\n", num);
			break;

		case 2:
			printf("%dが記述されました。\n", num);
			break;

		case 3:
			printf("%dが記述されました。\n", num);
			break;

		default:
			printf("失敗しました。\n");
	}

	printf("終了しました。\n");

}

void foo(int n, int i)
{
	for (n = 0; n <= 5; n++) {

		for (i = 0; i <= 10; i++) {
			printf("*");
		}

		printf("\n");
	}
}

