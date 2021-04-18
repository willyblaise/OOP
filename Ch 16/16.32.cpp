#include <iostream>

using namespace std;

class ExceptionOne
{
public:
	ExceptionOne()
	{
		
	}
};

int main(void)
{
	try
	{
		throw 1;
	}
	catch(ExceptionOne &one)
	{
		cout << "1" << endl;
	}
	catch(int q)
	{
		cout << "2" << endl;
	}
	catch(float q)
	{
		cout << "3" << endl;
	}


	try
	{
		throw 2.0f;
	}
	catch(ExceptionOne &one)
	{
		cout << "1" << endl;
	}
	catch(int q)
	{
		cout << "2" << endl;
	}
	catch(float q)
	{
		cout << "3" << endl;
	}


	try
	{
		throw ExceptionOne();
	}

	catch(ExceptionOne &one)
	{
		cout << "1" << endl;
	}
	catch(int q)
	{
		cout << "2" << endl;
	}
	catch(float q)
	{
		cout << "3" << endl;
	}


	return 1;
}