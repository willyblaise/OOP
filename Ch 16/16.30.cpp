#include <iostream>

using namespace std;

class AAAA
{
	public:
	AAAA()
	{
		cout << "Construct A" << endl;
	}
	~AAAA()
	{
		cout << "Destruct A" << endl;
	}
};

class BBBB : public AAAA
{
public:
	BBBB() : AAAA()
	{
		cout << "Construct B" << endl;
	}
	~BBBB()
	{
		cout << "Destruct B" << endl;
	}
};

class CCCC : public BBBB
{
public:
	int a;
	CCCC(int a) : BBBB()
	{
		this->a = a;
		cout << "Construct C-" << a << endl;
	}
	~CCCC()
	{
		cout << "Destruct C-" << a << endl;
	}
};

int main(void)
{
	try
	{
		cout << "Trying" << endl;
		CCCC blah(1);
		throw 1;
		CCCC blah2(2);
	}

	catch (int q)
	{
		cout << "Caught" << endl;
	}

	return 1;
}