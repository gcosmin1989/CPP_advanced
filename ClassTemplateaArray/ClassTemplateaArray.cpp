#include <iostream>
#include <string>
using namespace std;

template <int N, typename T>
class Array {
private:
    T values[N];  // Array to hold N values

public:
    Array() = default;

    Array(T init_val) {
        for (auto& item : values) {
            item = init_val;
        }
    }

    void fill(T val) {
        for (auto& item : values) {
            item = val;
        }
    }

    int get_size() const {
        return N;
    }

    // Overload operator<< to print the array contents (Habar n-am ce se intampla aici)
    //TODO de verificat ce face aceasta parte din cod
    friend ostream& operator<<(ostream& os, const Array<N, T>& arr) {
        os << "[ ";
        for (const auto& item : arr.values) {
            os << item << " ";
        }
        os << "]";
        return os;
    }
};

int main() {
    Array<5, int> myarray;

    cout << "size: " << myarray.get_size() << endl;

    myarray.fill(8);

    cout << myarray << endl;

    Array<100, string> myarray2;


    cout << "size: " << myarray2.get_size() << endl;

    myarray2.fill("Cosmin");


    cout << myarray2 << endl;

    return 0;
}
