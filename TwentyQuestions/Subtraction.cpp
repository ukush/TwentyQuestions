#include "Subtraction.h"


Subtraction::Subtraction() {

}

Subtraction::~Subtraction() {

}

void Subtraction::displayQuestion() {
	cout << getOp1() << " - " << getOp2() << endl;
}

bool Subtraction::isCorrect() {
	if (returnAnswer() == getOp1() - getOp2())
		return true;
	else
		return false;
}
