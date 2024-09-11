using namespace std;
#include <memory>
#include <iostream>

int getNumber(int n) {
    return n;
}

int addNumber(int a, int b) {
    return a + b;
}


int main()
{

    cout << "----------------" << endl;
    int(*funcPtr)(int) = getNumber;
    cout << funcPtr(10) << endl;
    cout << getNumber << endl;
    cout << funcPtr << endl;
    cout << getNumber(5) << endl;
    cout << "----------------" << endl;
    int(*funcAddPtr)(int, int) = addNumber;
    cout << funcAddPtr(3, 4) << endl;
    cout << addNumber << endl;
    cout << funcAddPtr << endl;
    cout << "----------------" << endl;
}

