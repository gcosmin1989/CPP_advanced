#include <iostream>
using namespace std;

int main()
{
	int arr[3] = { 10, 20, 30 };

	int* ptr;
	ptr = arr;

	cout << "The address of the Array ptr is: " << ptr << endl;
	cout << "The address of the Array arr is: " << &arr << endl;

	for (int i = 0; i < 3; i++) {
		cout << "Adress of elements in ptr: " << ptr << endl;
		cout << "Value of element in ptr:" << ptr[i] << endl;
		ptr++;
	}
}
