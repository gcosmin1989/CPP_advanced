
#include <iostream>
#include <string>
using namespace std;

template<typename T>

void sort(T a, T b, T c, T d) {
    if (a > b) {
        swap(a, b);
    }
    if (a > c) {
        swap(a, c);
    }
    if (a > d) {
        swap(a, d);
    }
    if (b > c) {
          swap(b,c);
    }
    if (b > d) {
        swap(b, d);
    }
    if (c > d) {
        swap(c, d);
    }
    cout << a << endl << b << endl << c << endl << d << endl;

}

int main()
{
    cout << "Int" << endl;
    sort(5, 2, 4, 1);
    cout << "Double" << endl;
    sort(2.3, 2.5, 2.9, 2.1);
    cout << "Char" << endl;
    sort('d', 'a', 'c', 'b');
    cout << "String" << endl;
    sort(string("Daiana"), string("Aria"), string("Cosmin"), string("Ben"));
   
}

