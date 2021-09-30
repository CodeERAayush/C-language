#include <stdio.h>
#include <stdlib.h>

#include <time.h>
int main()
{
	int x, y, z = 1;
	srand(time(0));
	x = rand() % 100;
	do
	{
		printf("enter a number\n");
		scanf("%d", &y);

		if (y < x)
		{
			printf("enter a higher number\n");
		}
		else if (y > x)
		{
			printf("enter a lower number\n");
		}
		else
		{
			printf("you guessed it in %d times", z);
		}
		z++;

	} while (y != x);
	return 0;
}
