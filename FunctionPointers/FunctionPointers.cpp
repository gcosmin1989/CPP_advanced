using namespace std;
#include <iostream>


int sum(int a, int b) {
    return a + b;
}

int main()
{
    int(*sumPtr)(int, int) = sum;
    int result = sumPtr(5,10);
    cout << "The sum of ptr is: " << result << endl;
    cout << "The address of sumPtr is: " << sumPtr << endl;
    cout << "The address of sum is: " << &sum << endl;
    return 0;
}

