using namespace std;
#include <iostream>



void doubleArray(int *arr) {
	for (int i = 0; i < 5; i++) {
		arr[i] = arr[i] * 2;
	}
}


int main()
{

	int arr[5] = { 11,22,33,44,55 };
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << endl;
	}
	doubleArray(arr);
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << endl;
	}


}
