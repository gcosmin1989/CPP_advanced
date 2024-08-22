#include <algorithm>
#include <iostream>
using namespace std;

void show(int a[], int array_size) {
	for (int i = 0; i < array_size; i++) {
		cout << a[i] << endl;
	}
}

int main()
{
	int a[] = {9, 7, 5, 3, 1, 2, 4, 6, 8};
	int size_a = sizeof(a) / sizeof(a[0]);
	int search_no;

	cout << "The array as it is" << endl;
	show(a, size_a);
	cout << "Input the number you want to search:" << endl;
	cin >> search_no;

	//Note to self -> Inainte de a cauta trebuie sortat!!!! 
	sort(begin(a), end(a));
	bool searchResulf= binary_search(begin(a), end(a), search_no);
	if (searchResulf) {
		cout << "The number " << search_no << " is in the array";
	}
	else {
		cout << "The number " << search_no << " is NOT in the array";
	}
	
}

