#include "Addition.h"



Addition::Addition() {
	
}

Addition::~Addition() {

}


void Addition::displayQuestion()
{
	cout << getOp1() << " + " << getOp2() << endl;
}

bool Addition::isCorrect()
{
	if (returnAnswer() == getOp1() + getOp2())
		return true;
	else
	return false;
}
