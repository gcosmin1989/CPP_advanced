using namespace std;
#include <iostream>

int x = 10;
int* ptr = &x;

int arr[3] = { 10, 20, 30 };
int* ptrArr = arr;

int sum(int a, int b) {
    return a + b;
}

int (*funcPtr)(int, int) = sum;

int main()
{
    cout <<"Valoarea pointerului: " << *ptr << endl;
    cout <<"Adresa pointerului: " << ptr << endl;
    cout <<"Addresa lui X prin referint: "<<&x << endl;
    cout << "Valoarea lui X: " << x << endl << endl;

    cout << "Adresa ptrArr: " << ptrArr << endl;
    cout << "Valoarea ptrArr: " << *ptrArr << endl;
    ptrArr++;
    cout << "Valoarea ptrArr++: " << *ptrArr << endl;
    cout << "Valoarea returnata din funct: "<<funcPtr(2, 3) << endl;
    
}
