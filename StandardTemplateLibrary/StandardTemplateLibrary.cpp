#include <string>
#include <iostream>
using namespace std;

template <typename T>
T minim(T a, T b) {
    return (a < b) ? a : b;
}

template<typename T, typename T2>
void minim2(T a, T2 b) {
    cout << ((a < b) ? a : b) << endl;
}

template <typename T1, typename T2>
void func(T1 a, T2 b) {
    cout << a << "---" << b << endl;
}



int main()
{

    cout << minim(2, 3) << endl;
    cout << minim(2.2,2.1) << endl;
    cout << minim('Z', 'X') << endl;
    minim2(2.3, 3);

    func<int, double>(10, 20.4);
    func(10, 20);
    func(10.2, 32);
    func('A', 2);
    func(20.5, string{ "Cosmin" });
}

