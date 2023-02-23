#include "main.h"
/**
 * positive_or_negetive - check for positive or negetive number
 *
 * @i: the number to be checked
 *
 * Return: always 0
 */

void positive_or_negetive(int i)
{
	if (i < 0)
		printf("%d is negetive\n", i);
	else
		printf("%d is positive\n", i);
}
