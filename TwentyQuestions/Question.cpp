#include "Question.h"
#include <stdlib.h>


// constructor
Question::Question()
{
	op1 = MIN_NUMBER + (rand() % (MAX_NUMBER - MIN_NUMBER + 1));
	op2 = MIN_NUMBER + (rand() % (MAX_NUMBER - MIN_NUMBER + 1));
}

// desructor
Question::~Question()
{

}

int Question::getOp1() {
	return op1;
}

int Question:: getOp2() {
	return op2;
}

void Question::getUserAnswer() {
	cin >> userAnswer;
}

int Question::returnAnswer()
{
	return userAnswer;
}


