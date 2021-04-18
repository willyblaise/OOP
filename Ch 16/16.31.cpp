#include <iostream>

using namespace std;

class ExceptionOne
{
public:
	ExceptionOne()
	{
		
	}
};

class ExceptionTwo
{
public:
	ExceptionTwo()
	{
		
	}
};

class ExceptionThree
{
public:
	ExceptionThree()
	{
		
	}
};

int main(void)
{
	try
	{
		int n;
		cout << "# 1 2 or 3: ";
		cin >> n;
		switch(n)
		{
			case 1: throw ExceptionOne();
			case 2: throw ExceptionTwo();
			default: throw ExceptionThree();
		}
		
	}
	catch(ExceptionOne &var)
	{
		cout << "1" << endl;
	}
	catch(ExceptionTwo &var)
	{
		cout << "2" << endl;
	}
	catch(ExceptionThree &var)
	{
		cout << "3" << endl;
	}


	return 1;
}