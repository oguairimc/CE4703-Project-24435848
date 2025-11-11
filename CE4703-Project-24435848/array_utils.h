
/**
	* @file array_utils.h
	* contains helper functions to populate, sort, clear, and randomize arrays
*/

#ifndef ARRAY_UTILS_H
#define ARRAY_UTILS_H

#define SWAP(a,b) do {int tmp = (a); (a) = (b); (b) = tmp;} while (0)

#ifdef __cplusplus
extern "C" {
#endif

	/**
		* @brief fills array with numbers entered from keyboard
		* stops when a negative number is inputted or array capacity is reached
		* @param arr: the array to fill
		* @param capacity: max number of elements that can be stored
	*/
	void fillFromKeyboard(int arr[], int capacity);

	/**
		* @brief fills an array with random integers
		* @param arr: the array to fill
		* @param size: number of elements to fill
		* @param capacity: capacity of the array
		* @param min: minimum random value
		* @param max: maximum random value
	*/
	void fillRandom(int arr[], int size, int capacity, int min, int max);

	/**
		* @brief marks all the elements as UNUSED
		* @param arr: the array to clear
		* @param capacity: capacity of the array
	*/
	void clearArray(int arr[], int capacity);

	/**
		* @brief sorts used elements in array in ascending order
		* unused elements remain at the end of the array
		* @param arr: the array to sort
		* @param capacity: capacity of the array
	*/
	void sortArray(int arr[], int capacity);

	/**
		* @brief randomizes the elements of the array
		* unused elements remain at the end are not changed
		* @param arr: the array to randomize
		* @param capacity: capacity of the array
	*/
	void randomizeArray(int arr[], int capacity);

#ifdef __cplusplus
}
#endif

#endif