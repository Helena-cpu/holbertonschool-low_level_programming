#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	printf("%d this is number positive\n", n);
	else if (n == 0)
	{
		printf("%d this is a number zero\n", n);
	}
	else
	{
		printf("%d this is a number negative\n", n);
	}
	return (0);
}
