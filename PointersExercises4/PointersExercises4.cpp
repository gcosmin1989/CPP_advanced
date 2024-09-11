using namespace std;

#include <iostream>
#include <string>

int main()
{
	int n = 5;
	cout << &n << endl;
	int* address = &n;
	cout << address << endl;
	cout << *address << endl;
	*address = 20;
	cout << *address << endl;
	cout << n << endl;
	
}

