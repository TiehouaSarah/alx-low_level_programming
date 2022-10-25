#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - function that gives string length
 *
 * @str : character to give length
 *
 *Return: void
 */

void puts_half(char *str)
{
	size_t diSize = strlen(str);
	int halfSize;
	char seeen[] = {'\0'};

	if (diSize % 2 == 0)
	{
		halfSize = diSize / 2;
	}
	else
	{
		halfSize = (diSize - 1) / 2;
	}

	strncpy(seeen, str, halfSize);
	printf("%s\n", seeen);
/*	printf("%d\n",halfSize);
*/
}
