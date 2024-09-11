#include <iostream>
using namespace std;

int* findMax(int* arr, int size) {
    int* maxPtr = arr; 
    for (int i = 1; i < size; i++) {
        if (arr[i] > *maxPtr) {
            maxPtr = &arr[i];
        }
    }
    return maxPtr;
}

int main() {
    int arr[5] = { 10, 30, 20, 50, 40 };

    int* maxPtr = findMax(arr, 5);

    cout << "Cel mai mare element: " << *maxPtr << endl;
    cout << "Adresa celui mai mare element: " << maxPtr << endl;

    return 0;
}
