#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_RANGE 20

int main(int argc, const char** argv)
{
	int End = 1;
	int total = 0;
   	int guessedNumber;
        int hiddenNumber = rand()%MAX_RANGE + 1;

	while (End != 5)
	{
		srand(time(NULL));

		fprintf (stdout, "Enter a number from 1 and %d: ", MAX_RANGE);
		fscanf (stdin, "%d", &guessedNumber);

		if(guessedNumber == hiddenNumber)
		{
			fprintf (stdout, "You guess is correct.\n");
			total = total + 1;
			fprintf (stdout, "Your total amount of guesses is %d. \n", total);
			End = 5;
		}
		else
		{
                        fprintf (stdout, "Better luck next time.\n");
                        if (guessedNumber > hiddenNumber)
                        {
                               fprintf(stdout, "Your guess was greater than the hidden number\n\n");
                        }
                        else if (guessedNumber < hiddenNumber)
                        {
                               fprintf(stdout, "Your guess was lower than the hidden number\n\n");
                        }
                        total = total + 1;
                        End = End+1;
			if (End == 5)
			{
				fprintf(stdout, "Your have reached the total amount of guesses\n");
			}
                }
        }
        return 0;
}
