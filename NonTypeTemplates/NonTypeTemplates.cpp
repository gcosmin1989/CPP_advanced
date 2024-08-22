#include <iostream>
using namespace std;

template <int N> 
void print()
{
   cout << N << endl;
}


template <char N>
void printC()
{
    cout << N << endl;
}



int main()
{
    print<5>();  
    printC<'c'>();

    return 0;
}