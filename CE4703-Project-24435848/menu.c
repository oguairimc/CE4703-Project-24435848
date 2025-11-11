
/*
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


/*
	* @brief Performs the actions needed for MF1
	* Demonstrates generating random numbers, sorting, clearing, and printing arrays
*/

void performMF1()
{
	//Implementation

	printf("\n\n");
	printf("Perform MF1:\n");

	int arr[MF1_Capacity];
	clearArray(arr, MF1_Capacity);

	fillRandom(arr, 7, MF1_Capacity, 10, 20);
	printf("array (used only)    = ");
	printUsed(arr, MF1_Capacity); printf("\n");
	printf("array (all elements) = ");
	printAll(arr, MF1_Capacity);  printf("\n");

	clearArray(arr, MF1_Capacity);
	printf("array (used only)    = ");
	printUsed(arr, MF1_Capacity); printf("\n");
	printf("array (all elements) = ");
	printAll(arr, MF1_Capacity);  printf("\n");

	fillRandom(arr, 5, MF1_Capacity, 10, 30);
	sortArray(arr, MF1_Capacity);
	printf("array (all elements) = ");
	printAll(arr, MF1_Capacity); printf("\n");

	printf("Minimum: %d\n", getMin(arr, 10));
	printf("Maximum: %d\n", getMax(arr, 10));

	printf("\n\n");
}

/*
	* @brief Performs the actions needed for MF2
	* Demonstrates filling an array with random numbers, sorting, randomizing, and displays all elements 
*/

void performMF2()
{
	//Implementation

	printf("\n\n");
	printf("Perform MF2:\n");

	const int capacity = 20;
	const int min = 10;
	const int max = 20;
	int arr[20];

	fillRandom(arr, capacity, capacity, min, max);
	printf("array with random (all) = ");
	printAll(arr, capacity); printf("\n");

	sortArray(arr, capacity);
	printf("sorted array (all)      = ");
	printAll(arr, capacity); printf("\n");

	randomizeArray(arr, capacity);
	printf("randomized array(all)   = ");
	printAll(arr, capacity); printf("\n");
}

/*
	* @brief Performs actions needed for MF3
	* Prompts the user to input integers, displays the array of entered numbers, calculates min, max, average, median, variance, and standard deviation
*/

void performMF3()
{
	//Implementation

	printf("\n\n");
	printf("Perform MF3:\n");

	int arr[MF3_Capacity];

	clearArray(arr, MF3_Capacity);

	fillFromKeyboard(arr, MF3_Capacity);
	printf("\n");

	printf("Array = ");
	printUsed(arr, MF3_Capacity);
	printf("\n");

	printf("Minimum: %d\n", getMin(arr, MF3_Capacity));
	printf("Maximum: %d\n", getMax(arr, MF3_Capacity));

	double avg = getAverage(arr, MF3_Capacity);
	double median = getMedian(arr, MF3_Capacity);
	printf("Array has average value %.2f and median value %.2f\n", avg, median);

	int used = countUsed(arr, MF3_Capacity);
	double variance = getVariance(arr, MF3_Capacity);
	double stddev = getStdDev(arr, MF3_Capacity);
	printf("Array with %d used elements has variance %.2f and standard deviation %.2f\n", used, variance, stddev);
	printf("\n\n");
}