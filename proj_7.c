#include <stdio.h>

void kozo()
{

	typedef char String[1024];

	typedef struct
	{
		String name;
		int hp;
		int attack;
	} Monster;

	Monster seiryu = { "����", 80, 15 };

	printf(seiryu.name);

}

