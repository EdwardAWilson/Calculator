#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 80

int main(int argc, char *argv[])
{
	char calculateString[MAX_LENGTH];

	printf("Enter equation to be calculated: ");
	scanf("%s", calculateString);

	long firstNumber = strtol(strtok(calculateString, " "), NULL, 10);
	char* operator = strtok(calculateString, " ");
	long secondNumber = strtol(strtok(calculateString, " "), NULL, 10);

	if (!(firstNumber && operator && secondNumber))
	{
		printf("Error, please input full equation");
		return 0;
	}
}
