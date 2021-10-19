#pragma once
#include <iostream>

using namespace std;

class Question
{
private:

	// all member variables go here
	int op1;
	int op2;
	const int MIN_NUMBER = 1;
	const int MAX_NUMBER = 10;
	int userAnswer;




protected:
	
	// Allow derrived classes to access some member variables
	int getOp1();
	int getOp2();
	int returnAnswer();




public:

	// constructor
	Question();

	// desructor
	virtual ~Question();

	// pure virtual or abstract class -> allow addition/subraction class to have their own implementation of this method
	virtual void displayQuestion() = 0;

	void getUserAnswer();

	virtual bool isCorrect() = 0;


};

