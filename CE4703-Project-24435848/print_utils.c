
/**
	* @file print_utils.c
	* @brief implementaion of array printing functions
*/

#include <stdio.h>
#include "print_utils.h"
#include "array_utils.h"

/**
	* @brief prints only used elements of the array
*/

//WF7
void printUsed(int arr[], int capacity)
{
	int i;
	int printed = 0;
	printf("{");
	for (i = 0; i < capacity; ++i) {
		if (arr[i] == -1) {
			break;
		}
		if (printed++) {
			printf(", ");
		}
		printf("%d", arr[i]);
	}
	printf("}");
}

/**
	* @brief prints all elements of the array
*/

//WF8
void printAll(int arr[], int capacity)
{
	int i;
	printf("{");
	for (i = 0; i < capacity; i++) {
		if (i > 0) {
			printf(", ");
		}
		printf("%d", arr[i]);
	}
	printf("}");
}