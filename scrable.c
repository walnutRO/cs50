
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};



int compute_score(char word[]);
int compare_score(int score[]);

int main(void)
{
// Get input words from both players
		char word[256];
		printf("Player 1: ");
		gets(word);
		int score[2];
		score[0] = compute_score(word);
	   printf("Player 2: ");
   gets(word);	   
        score[1] = compute_score(word);


// TODO: Print the winner
printf("Win player %i\n", compare_score(score));
printf("Score player 1 %i\n", score[0]);
		printf("Score player 2 %i\n", score[1]);
}

int compute_score(char word[])
{
	int scoreword = 0;
	int capitalletterfirst = 64;
// TODO: Compute and return score for string
for (int i=0; i<strlen(word);i++)
{
	int scorechar = word[i];

	if (capitalletterfirst < scorechar && scorechar < capitalletterfirst+27)
			{
			printf("Capital letter: %c %i %i\n", word[i], scorechar, POINTS[scorechar-(capitalletterfirst+1)]);
				scoreword = scoreword+POINTS[scorechar-(capitalletterfirst+1)];
			}
	else if (capitalletterfirst+32 < scorechar && scorechar < capitalletterfirst+27+32)
	{
		printf("Uppercase letter: %c %i %i\n", word[i], scorechar, POINTS[scorechar-(capitalletterfirst+32+1)]);
		scoreword = scoreword+POINTS[scorechar-(capitalletterfirst+32+1)];
	}
	else
	{
printf("Ignore char: %c\n", word[i]);
	}

}
return scoreword;
}

int compare_score (int score[])
{
	int m=0;
if (score[0] > score[1])
{
	m=1;
}
else 
{
	m=2;
}
return m;
}
