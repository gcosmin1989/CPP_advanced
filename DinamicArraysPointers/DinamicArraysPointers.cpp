using namespace std;

#include <iostream>

int main()
{
    int size;
    cout << "Enter the size of the Array: ";
    cin >> size;
    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        cout << "Array[" << i << "]";
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++) {

        cout << arr[i]<<" ";
    }
    delete[]arr;
    arr = NULL;
}

