#include <iostream>

using namespace std;

class ExceptionOne
{
public:
	ExceptionOne()
	{
		
	}
};

void Function(void) throw(int)
{
	try
	{
		throw ExceptionOne();
		cout << "Not Caught" << endl;
	}
	catch (int q)
	{
		cout << "Caught1" << endl;
	}
}

int main(void)
{
	Function();

	return 1;
}