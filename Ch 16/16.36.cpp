#include <iostream>

using namespace std;

void FunctionFour(void)
{
	cout << "Function Four Start" << endl
		<< "Function Four Throwing" << endl;
	throw 2;
}

void FunctionThree(void)
{
	cout << "Function Three Start" << endl;
	FunctionFour();
}

void FunctionTwo(void)
{
	cout << "Function Two Start" << endl;
	FunctionThree();
}

void FunctionOne(void)
{
	cout << "Function One Start" << endl;
	try
	{
		FunctionTwo();
	}
	catch(int q)
	{
		cout << "Caught" << endl;
	}
}

int main(void)
{
	void FunctionOne(void);

	FunctionOne();

	return 1;
}