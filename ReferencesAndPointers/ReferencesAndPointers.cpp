
#include <iostream>
using namespace std;


int addition1(int n) {
	cout << "Address of n1 in addition1(): " << &n << endl;
	cout << "Value of n1 in addition1():  " << n << endl;

	n += n;
	cout << "Address of n1 in addition1() after addition: " << &n << endl;
	cout << "Value of n1 in addition1() after addition: " << n << endl;

	return n;
}
//Pass by Reference
int addition2(int& n) {
	cout << "Address of n2 in addition2(): " << &n << endl;
	cout << "Value of n2 in addition2():  " << n << endl;

	n += n;
	cout << "Address of n2 in addition2() after addition: " << &n << endl;
	cout << "Value of n2 in addition2() after addition: " << n << endl;

	return n;
}

// Pass by Reference with Pointer 
int addition3(int* n) {
	cout << "Address of n3 in addition3(): " << n << endl;
	cout << "Value of n3 in addition3():  " << *n << endl;

	*n += *n;
	cout << "Address of n3 in addition3() after addition: " << n << endl;
	cout << "Value of n3 in addition3() after addition: " << *n << endl;

	return *n;
}


int main()
{
	cout << "=====Call-by-Value=====" << endl;
	int n1 = 8;
	cout << "address of n1 in main(): " << &n1 << endl;
	cout << "addition1 of n1: " << addition1(n1) << endl;
	cout << "No change in n1: " << n1 << endl<<endl;

	cout << "=====Call-by-Reference=====" << endl;
	int n2 = 10;
	cout << "address of n2 in main(): " << &n2 << endl;
	cout << "addition2 of n2: " << addition2(n2) << endl;
	cout << "No change in n2: " << n2 << endl << endl;

	cout << "=====Call-by-Reference-with-Pointer=====" << endl;
	int n3 = 12;
	cout << "address of n3 in main(): " << &n3 << endl;
	cout << "addition2 of n3: " << addition3(&n3) << endl;
	cout << "No change in n3: " << n3 << endl << endl;
}
