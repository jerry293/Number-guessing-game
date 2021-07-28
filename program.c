#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int number, guess, guesscount=1;
	srand(time(0));

	// Generates a random number between 1 and 100
	number = rand()%100 + 1;
	
	// printf("The number is %d\n", number);
	// Keep running the loop
	// until the number is guessed
	do
	{
		printf("Guess the number between 1 to 100\n");
		scanf("%d", &guess);
		if(guess>number)
		{
			printf("Your guessed number is greater than the correct number\n");
		}
		else if(guess<number)
		{
			printf("you guessed too low\n");
		}
		else
		{
			printf("Your guessed number is lower than the correct number");
			printf(" of attempts : %d\n", guesscount);
		}
		guesscount++;
	} while(guess!=number);
	
	return 0;
}
