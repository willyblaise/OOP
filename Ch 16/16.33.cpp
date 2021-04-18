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
	CCCC() : BBBB()
	{
		cout << "Construct C-Before Throw" << endl;
		throw 1;
		cout << "Construct C-After Throw" << endl;
	}
	~CCCC()
	{
		cout << "Destruct C" << endl;
	}
};

int main(void)
{
	try
	{
		cout << "Trying" << endl;
		CCCC blah;
	}

	catch (int q)
	{
		cout << "Caught" << endl;
	}

	return 1;
}