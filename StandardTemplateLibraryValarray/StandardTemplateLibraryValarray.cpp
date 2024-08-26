
#include <iostream>
#include <valarray>
using namespace std;

int main()
{
    valarray<int> varr = { 5,12,3,38, 35, 21 };
    valarray <int> varr1;
    varr1 = varr.apply([](int x) {
        return x = x + 5;
        });
    for (int& x : varr1) {
        cout << x << endl;
    }
    cout <<"Sum of varr: " << varr.sum() << endl;
    cout <<"Sum of varr1: "<< varr1.sum() << endl;
    cout << "Max of varr: " << varr.max() << endl;
    cout << "Min of varr1: " << varr1.min() << endl;

    valarray <int> varr2;
    varr2 = varr.shift(2);
    cout << "Shift: " << endl;
    for (int& x : varr2) {
        cout << x << endl;
    };

    varr2 = varr.cshift(-3);
    cout << "Cshift: " << endl;
    for (int& x : varr2) {
        cout << x << endl;
    };

    valarray<int>var_first = { 1,2,3 };
    valarray<int> var_second = { 4,5,6 };

    var_first.swap(var_second);

    for (int& x : var_first) {
        cout << x << " ";
    }
    cout << endl;
    for (int& x : var_second) {
        cout << x << " ";
    }
    cout << endl;
}
