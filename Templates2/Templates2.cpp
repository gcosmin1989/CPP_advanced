
#include <iostream>
using namespace std;

template <typename T,int N>
class Array {
private:
  T  my_array[N];

public:
    int getSize() {
        return N;
    }
};

int main()
{
    Array<int, 5> array;
    cout << array.getSize() << endl;

    Array<string, 6>array1;
    cout << array1.getSize() << endl;
}

