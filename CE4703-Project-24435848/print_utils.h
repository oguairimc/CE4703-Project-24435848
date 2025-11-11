
/*
	* @file print_utils.h
	* @brief declares array printing functions
*/

#ifndef PRINT_UTILS_H
#define PRINT_UTILS_H

#ifdef _cplusplus
extern "C" {
#endif

	/*
		* @brief prints only the used elements of an array
		* @param arr: array of integers
		* @param capacity: capacity of the array
	*/
	void printUsed(int arr[], int capacity);

	/*
		* @brief prints all elements of the array 
		* @param arr: array of integers
		* @param capacity: capacity of the array
	*/
	void printAll(int arr[], int capacity);

#ifdef __cplusplus
}
#endif

#endif