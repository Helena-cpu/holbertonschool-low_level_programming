#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
*/

int main(void)
{
	int a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar (a);
	}
	putchar ('\n');
	return (0);
}
