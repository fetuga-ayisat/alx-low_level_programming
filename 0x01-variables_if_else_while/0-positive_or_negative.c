#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
/* 
 * assign a random number to the variable
 * it will be executed
 * check whether the number is stored in positive or negative
 */
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
