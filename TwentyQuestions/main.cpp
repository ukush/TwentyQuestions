#include <iostream>
#include <crtdbg.h>
#include "Addition.h"
#include "Subtraction.h"

int main()
{
#ifdef _DEBUG
	// _CrtSetBreakAlloc(87);
	_onexit(_CrtDumpMemoryLeaks);
#endif

	cout << "Welcome to Twenty Questions" << endl;
	cout << "===========================" << endl;
	cout << "Twenty random addition or subtraction questions with operands between 1 and 20" << endl;
	cout << "How many can you get right?" << endl;

	//seed random numbers
	srand(time(nullptr));

	const int NUMBER_OF_Qs = 20;
	Question* questions[NUMBER_OF_Qs];
	int correctAnswers = 0;

	for (int i = 0; i < NUMBER_OF_Qs; i++)
	{
		// create random questions
		if (rand() <= (RAND_MAX / 2))
			questions[i] = new Addition();
		else
			questions[i] = new Subtraction();
	

		// Ask question
		cout << "Question " << i+1 << ": ";
		questions[i]->displayQuestion();
		questions[i]->getUserAnswer();

		// check if answer is right
		if (questions[i]->isCorrect())
		{
			++correctAnswers;
		}
	}

	// Display Score
	cout << "You scored " << correctAnswers << " out of " << NUMBER_OF_Qs << endl;

	
	// free memory
	for (int i = 0; i < NUMBER_OF_Qs; i++)
	{
		delete questions[i];
	}

	return 0;
}