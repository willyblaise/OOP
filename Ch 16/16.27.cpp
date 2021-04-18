#include <iostream>

using namespace std;

int main(void)
{
	int n;
	cout << "Input 1-float 0-int: ";
	cin >> n;

	try
	{
		throw (n ? (int)17 : (double)5);
	}

	catch(int num)
	{
		cout << "Int " << num;
	}
	catch(double num)
	{
		cout << "Double " << num;
	}

	cout << endl;

	return 1;
}