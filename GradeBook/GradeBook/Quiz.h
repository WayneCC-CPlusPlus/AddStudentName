#include "GradeBook.h"
using namespace std;

class Quiz : public GradeBook 
{

private:
	int numberOfQuizes;
	double quizScore;
	double quizScoreTotal;

public:
	// constructor
	Quiz();
	//workers
	void getNumberOfQuizes();
	void getQuizScore();
	// getters
	int getQuizTotal();
	double getQuizScoreTotal();
	
	// deconstructor
	~Quiz();

};
