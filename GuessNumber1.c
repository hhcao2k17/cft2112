#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_RANGE 10

int main(int argc, const char** argv)
{
	srand(time(NULL));

	int guessedNumber;
	int hiddenNumber = rand()%MAX_RANGE + 1;

	fprintf(stdout, "Enter a number between 1 to %d: ", MAX_RANGE);

	while(guessedNumber != hiddenNumber)
	{

		if(guessedNumber == hiddenNumber)
		{
			fprintf(stdout, "Your guessed correctly.\n");
			return 0;
		}
		else if(guessedNumber < hiddenNumber)
		{
			fprintf(stdout, "Your guess is too small.\n");
			fscanf(stdin, "%d", &guessedNumber);
			return 0;
		}
		else
		{
			fprintf(stdout, "Your guess is too big.\n");
			fscanf(stdin, "%d", &guessedNumber);
			return 0;
		}
	}
	return 0;
}
