#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*more headers goes there */

/* betty style doc for fuction main goes there */
int main(void)
{

int n;
srand (time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
	printf("%d is positive\n", n);
else if (n == 0)
	printf("%d is zero\n", n);
else (n < 0)
	printf("%d is negative\n", n);

return (0);
}
