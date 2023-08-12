#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: positive or negative number
 *
 * Return : 0 (success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
  if (n > 0)
  {
    printf("The number is positive\n");
  }
    else if (n == 0)
    {
    printf("The number is zero\n");
  }
  else
  {
    printf("The number is negative\n");
  }
	return (0);
}
