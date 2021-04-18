#include <iostream>
#include <new>

#define ARRAY_SIZE	50000000

using namespace std;

void Function(void)
{
	cerr << "new Error Function Called";
}

int main(void)
{
	void Function(void);

	set_new_handler(Function);

	int *pointers[50];
	for(int i=0;i<50;i++)
	{
		cout << i + 1 << ". " << ARRAY_SIZE << " Lines Allocating" << endl;
		pointers[i] = new int[ARRAY_SIZE];
		cout << i + 1 << ". " << ARRAY_SIZE << " Lines Allocated" << endl << endl;
	}

	return 1;
}