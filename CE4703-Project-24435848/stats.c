
/*
	* @file stats.c
	* @brief Implementaion of the statistical analysis functions
*/

#include <math.h>
#include "stats.h"
#include "array_utils.h"
#include "array_utils.h"

/*
	* @brief returns the minimum used element in the array
*/

//WF9
int getMin(int arr[], int capacity)
{
	int found = 0;
	int min = 0;

	for (int i = 0; i < capacity; ++i) {
		if (arr[i] == -1) {
			break;
		}
		if (!found || arr[i] < min) {
			min = arr[i];
			found = -1;
		}
	}
	return found ? min : -1;
}

/*
	* @brief returns the maximum used element in the array
*/

//WF10
int getMax(int arr[], int capacity)
{
	int found = 0;
	int max = 0;

	for (int i = 0; i < capacity; ++i) {
		if (arr[i] == -1) {
			break;
		}
		if (!found || arr[i] > max) {
			max = arr[i];
			found = -1;
		}
	}
	return found ? max : -1;
}
/*
	* @brief calculates the average value of the array
*/

//WF11
double getAverage(int arr[], int capacity)
{
	double sum = 0.0;
	int count = 0;

	for (int i = 0; i < capacity; ++i) {
		if (arr[i] == -1) {
			break;
		}
		sum += arr[i];
		count++;
	}
	return (count > 0) ? sum / count : 0.0;
}

/*
	* @brief calculates the median value of the array
*/

//WF12
double getMedian(int arr[], int capacity)
{
	int used = 0;

	for (int i = 0; i < capacity; ++i) {
		if (arr[i] == -1) {
			break;
		}
		used++;
	}
	if (used == 0) {
		return 0.0;
	}

	int temp[100];
	for (int i = 0; i < used; ++i) {
		temp[i] = arr[i];
	}

	for (int i = 0; i < used - 1; ++i) {
		for (int j = i + 1; j < used; ++j) {
			if (temp[i] > temp[j]) {
				int tmp = temp[i];
				temp[i] = temp[j];
				temp[j] = tmp;
			}
		}
	}
	if (used % 2 == 1) {
		return temp[used / 2];
	} else {
		return (temp[used / 2 - 1] + temp[used / 2]) / 2.0;
	}
}

/*
	* @brief calculates the variance of all the used elements in the array
*/

//WF13
double getVariance(int arr[], int capacity)
{
	double avg = getAverage(arr, capacity);
	double sumSq = 0.0;
	int count = 0;

	for (int i = 0; i < capacity; ++i) {
		if (arr[i] == -1) {
			break;
		}
		sumSq += (arr[i] - avg) * (arr[i] - avg);
		count++;
	}
	return (count > 0) ? sumSq / count : 0.0;
}

/*
	* @brief calculates the standard deviation of all used elements in the array
*/

//WF14
double getStdDev(int arr[], int capacity)
{
	double var = getVariance(arr, capacity);
	return sqrt(var);
}

/*
	* @brief counts the number of used elements in the array
*/

//WF15
int countUsed(int arr[], int capacity)
{
	int i;
	for (i = 0; i < capacity; i++) {
		if (arr[i] == -1) {
			break;
		}
	}
	return i;
}