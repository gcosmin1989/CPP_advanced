
#include <iostream>
using namespace std;


int main()
{
    int num = 5;
    cout << "Address of num: " << &num << endl;
    cout << "Value of num: " << num << endl;
   

    int* ptr = &num;
    cout << "Address of ptr: "<<ptr << endl;
    cout << "Value of ptr: " << *ptr << endl;
}
