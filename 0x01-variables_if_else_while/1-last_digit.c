#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n, lastdigitof;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigitof = n % 10;
	if (lastdigitof > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, lastdigitof);
	else if (lastdigitof == 5)
		printf("Last digit of %d is %d and is 0\n", n, lastdigitof);
	else
		printf("las digit %d is %d and is less than 6 and not 0\n", n, lastdigitof);
	return (0);
}
