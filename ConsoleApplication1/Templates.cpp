
#include <iostream>
using namespace std;


template<typename T> 
void print(T value) {
    cout << value << endl;

}

template <typename T ,typename U>
U add(T value, U value_s) {
    return value + value_s;
}

int main()
{

    print(5);
    print("string");
    print(5.1);
    print(5.2f);

    cout << add(20, 29.5) << endl;
}
