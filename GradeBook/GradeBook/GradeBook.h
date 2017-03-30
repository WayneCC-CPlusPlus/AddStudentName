#pragma once
#include <iostream>
#include <string>
// This parent class calculates the over all grade of the student
// 

using namespace std;

class GradeBook 
{

private:
	double overallgrade;
public:
	// constructor
	GradeBook();
	//getters
	double getOverallGrade();
	void setOverallGrade(double finalGrade);
};