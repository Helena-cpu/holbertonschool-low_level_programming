#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
/*mostrar el abecedario en minusculas y mayusculas seguido de una nueva linea*/
/*solo se puede usar la funcion putchar, y ademas solo dos veces*/
int main(void)
{
	char a;
	char b;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	for (b = 'A'; b <= 'Z'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	
	return (0);
}
