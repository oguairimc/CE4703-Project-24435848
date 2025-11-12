
/**
	* @file menu.c
	* @brief Excecutution of MF1, MF2 and MF3
	* Each function performs a test scenario using the Working Functions as described in the assignment
*/

#include <stdio.h>
#include "array_utils.h"
#include "print_utils.h"
#include "stats.h"
#include "random_utils.h"

#define MF1_Capacity 10
#define MF2_Capacity 20
#define MF2_Used 15
#define MF3_Capacity 100


/**
	* @brief Performs the actions needed for MF1
	* Demonstrates generating random numbers, sorting, clearing, and printing arrays
*/

void performMF1()
{
	//Implementation

	printf("\n\n");
	printf("Perform MF1:\n");

	int arr[MF1_Capacity];
	WF4_clearArray(arr, MF1_Capacity);

	WF3_fillRandom(arr, 7, MF1_Capacity, 10, 20);
	printf("array (used only)    = ");
	WF7_printUsed(arr, MF1_Capacity); printf("\n");
	printf("array (all elements) = ");
	WF8_printAll(arr, MF1_Capacity);  printf("\n");

	WF4_clearArray(arr, MF1_Capacity);
	printf("array (used only)    = ");
	WF7_printUsed(arr, MF1_Capacity); printf("\n");
	printf("array (all elements) = ");
	WF8_printAll(arr, MF1_Capacity);  printf("\n");

	WF3_fillRandom(arr, 5, MF1_Capacity, 20, 30);
	WF5_sortArray(arr, MF1_Capacity);
	printf("array (all elements) = ");
	WF8_printAll(arr, MF1_Capacity); printf("\n");

	printf("Minimum: %d\n", WF9_getMin(arr, 10));
	printf("Maximum: %d\n", WF10_getMax(arr, 10));

	printf("\n\n");
}

/**
	* @brief Performs the actions needed for MF2
	* Demonstrates filling an array with random numbers, sorting, randomizing, and displays all elements 
*/

void performMF2()
{
	//Implementation

	printf("\n\n");
	printf("Perform MF2:\n");

	const int min = 10;
	const int max = 20;
	int arr[20];

	WF3_fillRandom(arr, MF2_Used, MF2_Capacity, min, max);
	printf("array with random (all) = ");
	WF8_printAll(arr, MF2_Capacity); printf("\n");

	WF5_sortArray(arr, MF2_Capacity);
	printf("sorted array (all)      = ");
	WF8_printAll(arr, MF2_Capacity); printf("\n");

	WF6_randomizeArray(arr, MF2_Capacity);
	printf("randomized array(all)   = ");
	WF8_printAll(arr, MF2_Capacity); printf("\n");
}

/**
	* @brief Performs actions needed for MF3
	* Prompts the user to input integers, displays the array of entered numbers, calculates min, max, average, median, variance, and standard deviation
*/

void performMF3()
{
	//Implementation

	printf("\n\n");
	printf("Perform MF3:\n");

	int arr[MF3_Capacity];

	WF4_clearArray(arr, MF3_Capacity);

	WF2_fillFromKeyboard(arr, MF3_Capacity);
	printf("\n");

	printf("Array = ");
	WF7_printUsed(arr, MF3_Capacity);
	printf("\n");

	printf("Minimum: %d\n", WF9_getMin(arr, MF3_Capacity));
	printf("Maximum: %d\n", WF10_getMax(arr, MF3_Capacity));

	double avg = WF11_getAverage(arr, MF3_Capacity);
	double median = WF12_getMedian(arr, MF3_Capacity);
	printf("Array has average value %.2f and median value %.2f\n", avg, median);

	int used = WF15_countUsed(arr, MF3_Capacity);
	double variance = WF13_getVariance(arr, MF3_Capacity);
	double stddev = WF14_getStdDev(arr, MF3_Capacity);
	printf("Array with %d used elements has variance %.2f and standard deviation %.2f\n", used, variance, stddev);
	printf("\n\n");
}