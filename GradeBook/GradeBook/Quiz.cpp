#include "Quiz.h"

Quiz::Quiz()
{
	// initialize fields
	numberOfQuizes = 0 ;
	quizScore = 0;
	quizScoreTotal =0;
}
// workers
void Quiz::getNumberOfQuizes()
{
	cout << " How many quizes do you have to enter for this student?" << endl;
	cin >> numberOfQuizes;
	// catch something entered other a number	
	while (cin.fail())
	{
		cout << "Oh dear, you entered something other then a number, TRY AGAIN." << endl;
		// this line resets the cin bool for pass or fail
		cin.clear();
		// this line dumps the stream buffer up to 256 characters and removes line advances.
		cin.ignore(256, '\n');
		//Reget the number of quizes
		cin >> numberOfQuizes;
	}

	
}



void Quiz::getQuizScore()
{
	for (int i = 0; i < numberOfQuizes; i++)
	{
		cout << "Enter the grade the student achieved on the quiz number " << i << " : " << endl;
		cin >> quizScore;
		// catch something entered other a number	
		while (cin.fail())
		{
			cout << "Oh dear, you entered something other then a number, TRY AGAIN." << endl;
			// this line resets the cin bool for pass or fail
			cin.clear();
			// this line dumps the stream buffer up to 256 characters and removes line advances.
			cin.ignore(256, '\n');
			//Reget quiz score
			cin >> quizScore;
		}
		quizScoreTotal = quizScoreTotal + quizScore;

		
	}
	
}
// getters
int Quiz::getQuizTotal()
{
	return numberOfQuizes;
}
double Quiz::getQuizScoreTotal()
{
	return quizScoreTotal;
}
// deconstructor
Quiz::~Quiz()
{
}
