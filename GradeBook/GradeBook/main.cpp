// Coded by Jeremiah Stillings as an example for Git Hub introduction
// this is a practical example of classes and subclasses.



#include <iostream>
#include <string>
#include "GradeBook.h"
#include "Quiz.h"
#include "Test.h"



using namespace std;

//prototype functions
void worker();
// there can only be one main or neo
int main() {
	// call your function to get the ball rolling
	worker();
	return 0;
}

void worker()
{
	double quizGrade = 0.0;
	double testGrade = 0.0;
	double finalGrade = 0.0;
	bool doneEntering = false;
	bool quizdone = false;
	bool testdone = false;
	/* this determines what subclass to call, either quiz or test. tests are weighted as 80 percent of your overall grade
	while quizes are 20 Percent weighted.
	*/
	char quizOrTest = ' ';
	cout << "Is this a quiz or a test? Enter Q for Quiz or T for Test. " << endl;
	cin >> quizOrTest;
	// catch something entered other then Q or T	
	while (quizOrTest != 'Q' && quizOrTest != 'q' && quizOrTest != 'T' && quizOrTest != 't')
	{
		cout << "Oh dear, you entered something other then a letter Q or T, TRY AGAIN using a \"Q\" or a \"T\"." << endl;
		// this line resets the cin bool for pass or fail
		cin.clear();
		// this line dumps the stream buffer up to 256 characters and removes line advances.
		cin.ignore(256, '\n');
		//Reget the q or T
		cin >> quizOrTest;
	}

	// create your objects
	GradeBook student1;
	Quiz object1;
	Test object2;

	//Call the proper subclass who is a child of Gradebook
	while (doneEntering == false)
	{
		if (quizOrTest == 'q' || quizOrTest == 'Q')
		{

			object1.getNumberOfQuizes();
			object1.getQuizScore();
			if (testdone == false)
			{
				cout << "Ok got them, now enter your tests." << endl;
				quizOrTest = 'T';
			}
			quizdone = true;


		}
		if (quizOrTest == 't' || quizOrTest == 'T')
		{
			object2.getNumberOfTests();
			object2.getTestScore();
			if (quizdone == false)
			{
				cout << "Ok got them, now enter your quizes." << endl;
				quizOrTest = 'Q';
			}
			testdone = true;


		}
		if (quizdone == true && testdone == true)
		{
			cout << "Ok got them, Calculating Grade now." << endl;
			doneEntering = true;
		}

		
		
		
	}
	quizGrade = (object1.getQuizScoreTotal() / object1.getQuizTotal()) * .20;
	
	testGrade = (object2.getTestScoreTotal() / object2.getTestTotal()) * .80;
	

	finalGrade = quizGrade + testGrade ;
	student1.setOverallGrade(finalGrade);
	cout << "Student 1's quiz weight is: " << quizGrade << endl;
	cout << "Student 1's test weight is: " << testGrade << endl;
	cout << "Student 1's final grade is: " << student1.getOverallGrade() << endl;
	



}
