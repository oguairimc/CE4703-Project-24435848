
/**
	* @file array_utils.c
	* @brief implementaion of aray manipulation functions
	* contains helper functions to populate, sort, clear, and randomize arrays
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "array_utils.h"
#include "random_utils.h"

/**
	* @brief counts used elements in an array
	* @param arr: integer array
	* @param capacity: capacity of the array
	* @return Number of used elements
*/
static int count_used_local(const int arr[], int capacity)
{
	int count = 0;
	for (int i = 0; i < capacity; i++) {
		if (arr[i] == UNUSED) {
			break;
		}
		count++;
	}
	return count;
}

/**
	* @brief fills the array with integers entered by the user
*/

//WF2
void fillFromKeyboard(int arr[], int capacity)
{
	int i, value;
	if (capacity <= 0) {
		return;
	}

	printf("Enter Positive Integer:\n");

	for (i = 0; i < capacity; i++) {

		printf("Value %d: ", i + 1);

		if (scanf_s("%d", &value) != 1) {
			printf("Invalid Input.\n");
			while (getchar() != '\n');
			break;
		}
		if (value < 0) {
			break;
		}
		arr[i] = value;
	}

	for (; i < capacity; i++) {
		arr[i] = UNUSED;
	}
}

/**
	* @brief fills the array with random numbers
*/

//WF3
void fillRandom(int arr[], int size, int capacity, int min, int max)
{
	int i;
	if (capacity <= 0) {
		return;
	}

	for (i = 0; i < size && i < capacity; i++) {
		arr[i] = getRandom(min, max);
	}

	for (; i < capacity; i++) {
		arr[i] = UNUSED;
	}
}

/**
	* @brief sets values in the array to UNUSED
*/

//WF4
void clearArray(int arr[], int capacity)
{
	int i;
	for (i = 0; i < capacity; i++) {
		arr[i] = UNUSED;
	}
}

/**
	* @brief sorts used elements in ascending order
*/

//WF5
void sortArray(int arr[], int capacity)
{
	int used = count_used_local(arr, capacity);
	int i, j;

	for (i = 0; i < used - 1; ++i) {
		for (j = i + 1; j < used; ++j) {
			if (arr[i] > arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

/**
	* @brief randomizes used elements
*/

//WF6
void randomizeArray(int arr[], int capacity)
{
	int used = count_used_local(arr, capacity);
	int i, j;

	for (i = used - 1; i > 0; --i) {
		j = getRandom(0, i);
		if (j != i) {
			SWAP(arr[i], arr[j]);
		}
	}
}