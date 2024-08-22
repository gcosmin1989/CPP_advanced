
#include <iostream>
using namespace std;

template <typename T, int N>
class MyVector {
private:
    T  my_vector[N];
    int size = 0;

public:

    int getSize() {
        return size;

    }
    int getVectorSize() {
        return N;
    }

    void add_to_vector(T value) {
        if (size < N) {
            my_vector[size] = value;
            size++;
        }
        else {
            cout << "FULL" << endl;
        }
    }
};

int main() {
    MyVector<int, 5> vec1;
    cout << vec1.getSize() << endl;
    cout << vec1.getVectorSize() << endl;
    vec1.add_to_vector(1);
    vec1.add_to_vector(2);
    vec1.add_to_vector(3);
    vec1.add_to_vector(4);
    vec1.add_to_vector(5);
    vec1.add_to_vector(52);
    cout << vec1.getSize() << endl;
    cout << vec1.getVectorSize() << endl;


}


