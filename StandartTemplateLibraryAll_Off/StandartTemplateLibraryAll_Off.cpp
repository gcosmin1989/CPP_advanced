#include <iostream>
#include <algorithm>
using namespace std;

void check_all(int arr[], int arr_size) {
	//int x -> verifica fiecare element din array 
	all_of(arr, arr + arr_size, [](int x) {
		return x > 0;
		}) ?
		cout << "All are positive elements" <<endl:
			cout << "All are not positive elements" << endl;
}

int main()
{
	int arr[] = { 3,5,2,6,8,1,7 };
	int size_arr = sizeof(arr) / sizeof(arr[0]);

	check_all(arr, size_arr);

	int arr2[] = { 3,5,2,6,8,1,7,-1 };
	int size_arr2 = sizeof(arr2) / sizeof(arr2[0]);

	check_all(arr2, size_arr2);

	


}
