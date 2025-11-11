
/**
	* @file random_utils_h
	* @brief random number generation
	* generates random integer values between spcified parameters
*/

#ifndef RANDOM_UTILS_H
#define RANDOM_UTILS_H

#ifdef __cplusplus
extern "C" {
#endif


	/**
		* @brief returns a random integer between parameters
		* @param lower: the lowest value
		* @param upper: the highest value
		* @return a random integer in the range [lower, upper]
		* @note Call srand(time(NULL)) once in main() before using this function
	*/
	int getRandom(int lower, int upper);

#ifdef __cplusplus
}
#endif

#endif