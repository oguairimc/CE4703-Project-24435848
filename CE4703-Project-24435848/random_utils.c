
/**
	* @file random_utils.c
	* @brief generates random numbers
*/

#include <stdlib.h>
#include "random_utils.h"



/**
	* @brief returns a random integer between lower and upper parameters (inclusive)
	* @param lower: the lowest value
	* @param upper: the highest value
	* @return a random integer in the range [lower, upper]
*/

int WF1_getRandom(int lower, int upper)
{
	return rand() % (upper - lower + 1) + lower;
}