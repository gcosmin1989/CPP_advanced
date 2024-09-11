using namespace std;
#include <iostream>

int luckyNumbers[5] = { 11,2,13,7,5 };

int main()
{
    //cout << luckyNumbers << endl;
    //cout << &luckyNumbers[0] << endl;
    //cout << luckyNumbers[2] << endl;
    //cout << *(luckyNumbers + 2) << endl;
    //cout << &luckyNumbers[2] << endl;
    //cout << (luckyNumbers + 2) << endl;


    for (int i = 0; i < 5; i++) {
        cout << "Number: ";
        cin >> luckyNumbers[i];
    }
    for (int i = 0; i < 5; i++) {
        cout << luckyNumbers + i << endl;
        cout << *(luckyNumbers + i )<< endl;
    }
}
