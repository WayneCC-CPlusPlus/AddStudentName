#include "GradeBook.h"


GradeBook::GradeBook()
{
	// intialize the grade to zero
	overallgrade = 0.0;
}
// getters
double GradeBook::getOverallGrade()
{	
	return overallgrade;
}
// setters
void GradeBook::setOverallGrade(double finalGrade)
{
	overallgrade = finalGrade;

}
