#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of all diagonal characters
 * @a: the 2d array
 * @size: the size of the array
 */

void print_diagsums(int *a, int size)
{
	int i;

	unsigned int sum1 = 0;
	unsigned int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[(size * i) + i];/* The primary diagonal */
		sum2 += a[(size * (i + 1)) - (i + 1)];/* The secondary diagonal */
	}
	printf("%d, %d\n", sum1, sum2);
}
/** 
 * Explanation is that if we want to find the diagonal structure with i
 * we want to start with 0, 4, 7. I starts at 0 already so we multiply it by
 *  size and then add i to it. since i is 0 the answer is 0.
 *  when i is 1 it becomes 3 * 1 + 1 which is the four we need.
 *  when i becomes 2 it is 3 * 2 + 2 which is the 7 we need...
 *
 *  on the contrary when we print the secondary diagonal so:
 *  on a [3][3] array nr: 2, 4, 6.. Firstly we always want to do the 
 *  first instance in our head, when the I is 0, we want to answer 2.
 *  So if u look at our first sum the answer is 0.. what if we added
 *  1 to the i.. 3 * 1 + 1 this isnt it... it answers 4. but what if
 *  we took away the + 1 and replaced it with a - 1.. 3 * 1 -1 is 2..
 *  Buut we gotta test it with the others. i = 1;; 3 * 2 - 2;; does indeed
 *  answer 4... cool! What about the last one??
 *  3 * 3 - 3 is 6.. BINGO!! thats the logic.
