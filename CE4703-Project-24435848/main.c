
/**
	* @file main.c
	* @brief Entry point for Assignment 1
	* 
	* Makes the main menu system for running MF1, MF2 and MF3
	* Displays the options, accepts the users inputs, and runs the program continuously until the program is terminated
	* 
	* @author Colm O Guairim
	* @date 12/11/2025
*/




#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "menu.h"

int main()
{
	int option = 0;

	srand((unsigned int)time(NULL) ^ clock());

	do {
		printf("\n\n1) Perform MF1\n");
		printf("2) Perform MF2\n");
		printf("3) Perform MF3\n");
		printf("4) Exit Application\n");
		printf("Please Enter your Option: ");
		scanf_s("%d", &option);


		switch (option) {
			case 1: performMF1(); break;
			case 2: performMF2(); break;
			case 3: performMF3(); break;
			case 4: printf("Exiting...\n"); break;
			default: printf("Invalid option. Try again\n");
		}
	} while (option != 4);
	return 0;
}