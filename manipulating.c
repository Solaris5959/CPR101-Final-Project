//MANIPULATING SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "manipulating.h"

int main()//main function to run code
{
	manipulating();//Calls 'manipulating' function
}

/* Version 1 */
void manipulating(void)
{
	printf("*** Start of Concatenating Strings Demo ***\n");//Welcome message
	char	string1[BUFFER_SIZE];//Declares 'string1' with an array size of 80
	char	string2[BUFFER_SIZE];//Declares 'string2' with an array size of 80
	do {
		printf("Type the 1st string (q - to quit): \n");//Prompts user to type a string of characters with 'q' to quit
		fgets(string1, BUFFER_SIZE, stdin);//Gets and stores first string into 'string1'
		string1[strlen(string1) - 1] = '\0';//Gets length of 'string1'
		if (strcmp(string1, "q") != 0) {//Runs code if the user has not entered 'q'
			printf("Type the 2nd string\n");//Prompts user to enter a second string
			fgets(string2, BUFFER_SIZE, stdin);//Gets and stores first string into 'string2'
			string2[strlen(string2) - 1] = '\0';//Gets length of 'string2'
			strcat(string1, string2);//Concatenates both 'string1' and 'string2' into one string
			printf("Concatenated string is \'%s\' \n", string1);//Prints concatenated string here

		}

	} while (strcmp(string1, "q") != 0);//Runs program until user chooses to exit with 'q'
	printf("*** End of Concatenating Strings Demo ***\n\n");//End of program message

/* Version 2 */
	printf("*** Start of Comparing Strings Demo ***\n");//Welcome message
	char compare1[BUFFER_SIZE];
	char compare2[BUFFER_SIZE];
	int result;
	do {
		printf("Type the 1st string to compare (q - to quit):\n");
		fgets(compare1, BUFFER_SIZE, stdin);//Gets input for first string 
		compare1[strlen(compare1) - 1] = '\0';//Gets length of 'compare1' until reaches '\0'
		if (strcmp(compare1, "q") != 0) {//If 'compare1' is not equal to 'q' then continue
			printf("Type the 2nd string to compare:\n");
			fgets(compare2, BUFFER_SIZE, stdin);//Gets input for the second string
			compare2[strlen(compare2) - 1] = '\0';//Gets length of 'compare2'
			result = strcmp(compare1, compare2);//Compares 'compare1' and 'compare2' and stores result 
			if (result < 0)//if result is less than 0 prints statement
				printf("\'%s\' string is less than \'%s\'\n", compare1, compare2);
			else if (result == 0)//else if both are equal prints statement
				printf("\'%s\' is equal to \'%s\'\n", compare1, compare2);
			else//else result is more than 0 prints statement
				printf("\'%s\' string is greater than \'%s\'\n", compare1, compare2);
		}
	} while (strcmp(compare1, "q") != 0);//runs code until 'q' is entered
	printf("*** End of Comparing Strings Demo ***\n\n");

	/* Version 3 */
	//>> insert here

}
