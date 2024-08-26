#include <iostream>
#include <algorithm>
#include <numeric>//pt iota
using namespace std;

void check_all(int arr[], int arr_size) {
	//int x -> verifica fiecare element din array 
	all_of(arr, arr + arr_size, [](int x) {
		return x > 0;
		}) ?
		cout << "All are positive elements" <<endl:
			cout << "All are not positive elements" << endl;
}
void check_of(int arr[], int arr_size) {
	//int x -> cand prima conditie se valideaza iterarea prin array se opreste
	any_of(arr, arr + arr_size, [](int x) {
		return x < 0;
		
	})?
		cout << "A negative element is present" << endl :
				cout << "All element are positive" << endl;
	}

void check_noneOf(int arr[], int arr_size) {
	none_of(arr, arr + arr_size, [](int x) {
		return x < 0;
		})?
		cout << "No negative elements" << endl :
			cout << "There are negative elements" << endl;

}
void copy_array(int arr[], int arr_size, int copy_arr[]) {
	copy_n(arr, arr_size, copy_arr);
	for (int i = 0; i < arr_size; i++) {
		cout << "Copy_arr:" << copy_arr[i] << endl;
	}
}
void assign_value_array(int arr[], int arr_size, int new_value) {
	iota(arr, arr+arr_size, new_value);
	for (int i = 0; i < arr_size; i++) {
		cout << arr[i] << " ";
	}
}
int main()
{
	int arr[] = { 3,5,2,6,8,1,7 };
	int size_arr = sizeof(arr) / sizeof(arr[0]);



	int arr2[] = { 3,5,2,6,8,1,7,-1 };
	int size_arr2 = sizeof(arr2) / sizeof(arr2[0]);

	int copy_arr[7];

	int blank_array[7] = {};
	int size_blank_array = sizeof(blank_array) / sizeof(blank_array[0]);
	int new_element = 10;

	cout << "CHECK_ALL" << endl;
	check_all(arr, size_arr);
	check_all(arr2, size_arr2);
	cout << "CHECK_OF" << endl;
	check_of(arr, size_arr);
	check_of(arr2, size_arr2);
	cout << "CHECK_NONEOF" << endl;
	check_noneOf(arr, size_arr);
	check_noneOf(arr2, size_arr2);
	cout << "COPY ARRAY" << endl;
	copy_array(arr, size_arr, copy_arr);
	cout << "IOTA" << endl;
	assign_value_array(blank_array, size_blank_array, new_element);


	


}
