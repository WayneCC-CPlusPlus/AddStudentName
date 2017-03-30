#include "Test.h"

Test::Test()
{
	// initialize fields
	numberOfTests = 0;
	testScore = 0;
	testScoreTotal = 0;
}
// workers
void Test::getNumberOfTests()
{
	cout << " How many tests do you have to enter for this student?" << endl;
	cin >> numberOfTests;
	// catch something entered other a number	
	while (cin.fail())
	{
		cout << "Oh dear, you entered something other then a number, TRY AGAIN." << endl;
		// this line resets the cin bool for pass or fail
		cin.clear();
		// this line dumps the stream buffer up to 256 characters and removes line advances.
		cin.ignore(256, '\n');
		//Reget the number of tests
		cin >> numberOfTests;
	}


}



double Test::getTestScore()
{
	for (int i = 0; i < numberOfTests; i++)
	{
		cout << "Enter the grade the student achieved on the test number " << i << " : " << endl;
		cin >> testScore;
		// catch something entered other a number	
		while (cin.fail())
		{
			cout << "Oh dear, you entered something other then a number, TRY AGAIN." << endl;
			// this line resets the cin bool for pass or fail
			cin.clear();
			// this line dumps the stream buffer up to 256 characters and removes line advances.
			cin.ignore(256, '\n');
			//Reget test score
			cin >> testScore;
		}
		testScoreTotal = testScoreTotal + testScore;

		
	}
	return testScoreTotal;
}
// getters
int Test::getTestTotal()
{
	return numberOfTests;
}
double Test::getTestScoreTotal()
{
	return testScoreTotal;
}
// deconstructor
Test::~Test()
{
}

