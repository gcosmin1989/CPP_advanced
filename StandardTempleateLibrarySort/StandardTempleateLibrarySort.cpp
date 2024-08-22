#include <iostream>
#include <algorithm>
using namespace std;

void show(int a[], int array_size) {
	for (int i = 0; i < array_size;i++) {
		cout << "Sort from function " << a[i] << endl;
	}
}


int main()
{
	int arr[] = { 3,5,2,6,8,1,0,7 };
	
	sort(begin(arr), end(arr));

	for (int i : arr) {
		cout << i << endl;
	}
	cout << endl;

	int arr2[] = { 1,5,2,6,4,1,9,7 };
	int arr2_size = sizeof(arr2) / sizeof(arr2[0]);
	cout << sizeof(arr2) << " here " << sizeof(arr2[0]) << endl;
	cout << "inainte de sort" << endl;
	show(arr2, arr2_size);
	cout << "dupa sort" << endl;
	sort(begin(arr2), end(arr2));
	show(arr2, arr2_size);


}
