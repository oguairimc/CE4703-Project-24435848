
/*
	* @file random_utils.c
	* @brief generates random numbers
*/

#include <stdlib.h>
#include "random_utils.h"

//WF1

/*
	* @brief returns a random integer between lower and upper parameters (inclusive)
	* @param lower: the lowest value
	* @param upper: the highest value
	* @return a random integer in the range [lower, upper]
*/

int getRandom(int lower, int upper)
{
	return rand() % (upper - lower + 1) + lower;
}