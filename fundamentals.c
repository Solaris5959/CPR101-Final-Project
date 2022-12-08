// FUNDAMENTALS MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80		// buffer size is 80 chars long for buffer1
#define NUM_INPUT_SIZE 10	// buffer size is 10 chars long for numInput

#include "fundamentals.h"

/*	Purpose:	This function will get the user to input a 
				string and an integer, then will return the 
				character in the string at the index of the 
				integer

	Entirely Self Contained.
*/
void fundamentals() {
	/* Version 1 */
	printf("*** Start of Indexing Strings Demo ***\n");
	char buffer1[BUFFER_SIZE];		// two char arrays (strings) the first being the string to be searched, 
	char numInput[NUM_INPUT_SIZE];  // the latter being to get the specific character position to read
	size_t position;				// var to convert numInput into, used to get the specific char

	do {
		printf("Type not empty string (q - to quit):\n");
		fgets(buffer1, BUFFER_SIZE, stdin);		// get the string to search through
		buffer1[strlen(buffer1) - 1] = '\0';	// append a null termination char at the end of the input string (overwriting anything that may be there)

		if (strcmp(buffer1, "q") != 0) {	// assuming the input string was not the letter 'q' indicating quit, we continue
			printf("Type the character position whithin the string:\n");
			fgets(numInput, NUM_INPUT_SIZE, stdin);	// get the input for the character index of the desired char
			numInput[strlen(numInput) - 1] = '\0';	// as before, append a null termination char to the end of the input string (overwriting anything that may be there)

			position = atoi(numInput);	// convert the string input into an integer and store in the 'position' variable (size_t is just an unsigned int)

			if (position >= strlen(buffer1)) {	// if the chosen index is outside the range of the string, print error message and print the final character in string
				position = strlen(buffer1) - 1;	// the chosen index will always be a positive value (inc. 0) and as such do not need to check for below bounds
				printf("Too big... Position reduced to max. availbale\n");
			}
			printf("There character found at %d position is \'%c\'\n",	// print the character at index 'position'
				(int)position, buffer1[position]);
		}
	} while (strcmp(buffer1, "q") != 0);	// this will loop as long as the initially input string is not "q"
	printf("*** End of Indexing Strings Demo ***\n\n");	// print exit message, END OF PROGRAM


	/* Version 2 */
	printf("*** Start of Measuring Strings Demo ***\n");
	char buffer2[BUFFER_SIZE];		// new char array identical to the buffer1 found in version 1
	do {					
		printf("Type a string (q - to quit):\n");	// get the string to measure
		fgets(buffer2, BUFFER_SIZE, stdin);
		buffer2[strlen(buffer2) - 1] = '\0';		// append a null termination char again to the end of the string again
		if (strcmp(buffer2, "q") != 0)				// if the input string was not a quit command
			printf("The length of \'%s\' is %d characters\n",
				buffer2, (int)strlen(buffer2));		// print the length of the string
	} while (strcmp(buffer2, "q") != 0);			// loop until a quit command is input
	printf("*** End of Measuring Strings Demo ***\n\n");


	/* Version 3 */
	//>> insert here


}