#include "GradeBook.h"
using namespace std;

class Test : public GradeBook 
{

private:
	int numberOfTests;
	double testScore;
	double testScoreTotal;

public:
	// constructor
	Test();
	//workers
	void getNumberOfTests();
	double getTestScore();
	// getters
	int getTestTotal();
	double getTestScoreTotal();
	// deconstructor
	~Test();

};
