#include <iostream>

using namespace std;

void Function(void)
{
	try
	{
		cout << "Function Throw" << endl;
		throw 1;
	}
	catch(int q)
	{
		cout << "Function Catch" << endl
			<< "Function Throw" << endl;
		throw;
	}
}

int main(void)
{
	try
	{
		cout << "Main Call Function" << endl;
		Function();
	}
	catch(int q)
	{
		cout << "Main Catch" << endl;
	}

	return 1;
}