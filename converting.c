#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "converting.h"

/* Version 1 */
// CONVERTING MODULE SOURCE
int main(void) {
	converting();
}
	void converting(void) {
		printf("*** Start of Converting Strings to int Demo ***\n");
		char intString[BUFFER_SIZE];	//create virable to storage user input
		int  intNumber;  //creat virable to output the result
		do {
			printf("Type an int numeric string (q - to quit):\n");
			fgets(intString, BUFFER_SIZE, stdin);	//get user input
			intString[strlen(intString) - 1] = '\0';	//make sure char string end with '\0'
			if (strcmp(intString, "q") != 0) {	//compare two string,when string not equal to "q" transfer the char to int
				intNumber = atoi(intString);	//transfer char to int, if the result is invalid return 0
				printf("Converted number is %d\n", intNumber);	//print out the result
			}
		} while (strcmp(intString, "q") != 0); // do the transfer until string equal to "q"
				printf("*** End of Converting Strings to int Demo ***\n\n");

/* Version 2 */

		printf("*** Start of Converting Strings to double Demo ***\n");
		char doubleString[BUFFER_SIZE];  //create virable to storage user input
		double doubleNumber;   //creat virable to output the result
		do {
			printf("Type the double numeric string (q - to quit):\n");
			fgets(doubleString, BUFFER_SIZE, stdin);		//get user input
			doubleString[strlen(doubleString) - 1] = '\0';	//make sure char string end with '\0'
			if ((strcmp(doubleString, "q") != 0)) {		//compare two string,when string not equal to "q" transfer the char to int
				doubleNumber = atof(doubleString);		//transfer char to double, if the result is invalid return 0
				printf("Converted number is %f\n", doubleNumber);	//print out the result
			}
		} while (strcmp(doubleString, "q") != 0);		// do the transfer until string equal to "q"
		printf("*** End of Converting Strings to double Demo ***inin");		// print final sentence
	
/* Version 3 */
		printf("*** Start of Converting Strings to long Demo ***\n");
		char longString[BUFFER_SIZE];  //create virable to storage user input
		long longNumber;  //creat virable to output the result
		do {
			printf("Type the long numeric string (q - to quit):\n");
			fgets(longString, BUFFER_SIZE, stdin);    //get user input
			longString[strlen(longString) - 1] = '\0';   //make sure char string end with '\0'
			if ((strcmp(longString, "q") != 0)) {    //compare two string,when string not equal to "q" transfer the char to int
				longNumber = atol(longString);       //transfer char to long, if the result is invalid return 0
				printf("Converted number is %ld\n", longNumber);   //print out the result
			}
			} while (strcmp(longString, "q") != 0);    // do the transfer until string equal to "q"
			printf("*** End of Converting Strings to long Demo ***\n\n");    // print final sentence
	
	}




