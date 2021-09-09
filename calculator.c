#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 80

int main(int argc, char *argv[])
{
	double firstNumber;
	char operator;
	double secondNumber;
	double ans;
	int again = 1;
	char againChoice;

	while(again)
	{
		printf("Enter equation to be calculated: ");
		scanf("%lf %c %lf", &firstNumber, &operator, &secondNumber);
	
		if (!(firstNumber && operator && secondNumber))
		{
			printf("Error, please input full equation");
			return 0;
		}
	
		switch(operator)
		{
			case '+':
				ans = firstNumber + secondNumber;
				break;
			case '-':
				ans = firstNumber - secondNumber;
				break;
			case '*':
			case 'x':
				ans = firstNumber * secondNumber;
				break;
			case '/':
				ans = firstNumber / secondNumber;
				break;		
		}

		printf("Your answer is %0.2lf\n", ans);
		printf("Would you like to enter another calculation? (y/n): \n");
		scanf("%c", &againChoice);

		if (againChoice != 'y')
		{
			again = 0;
		}
	}

}
