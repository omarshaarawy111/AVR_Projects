#include <stdio.h>
#define NUM_SEASONS  4
#define NUM_MONTHS_PER_SEASON  3
#define NUM_MONTHS_PER_YEAR  (NUM_SEASONS  * NUM_MONTHS_PER_SEASON )
int main(void)
{

	printf ("The number of month in a year is %d months", NUM_MONTHS_PER_YEAR );
	return 0;
}
