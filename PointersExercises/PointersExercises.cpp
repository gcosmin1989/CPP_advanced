using namespace std;

#include <iostream>



void swapValues(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 10;
    int z = 20;

    cout << "Valoarea inainte de swap: " << x << " " << z << endl;
    swapValues(&x, &z);
    cout << "Valoarea dupa swap: " << x << " " << z << endl;
}

