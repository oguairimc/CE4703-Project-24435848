
/**
	* @file stats.h
	* @brief statistical analysis function for arrays
*/

#ifndef STATS_H
#define STATS_H

#ifdef __cplusplus
extern "C" {
#endif

	/**
		* @brief returns the minimum used element in the array
	*/
	int getMin(int arr[], int capacity);

	/**
		* @brief returns the maximum used element in the array
	*/
	int getMax(int arr[], int capacity);

	/**
		* @brief calculates the average value of the array
	*/
	double getAverage(int arr[], int capacity);

	/**
		* @brief calculates the median value of the array
	*/
	double getMedian(int arr[], int capacity);

	/**
		* @brief calculates the variance of all the used elements in the array
	*/
	double getVariance(int arr[], int capacity);

	/**
		* @brief calculates the standard deviation of all used elements in the array
	*/
	double getStdDev(int arr[], int capacity);

	/**
		* @brief counts the number of used elements in the array
	*/
	int countUsed(int arr[], int capacity);

#ifdef __cplusplus
}
#endif

#endif