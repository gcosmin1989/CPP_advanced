
#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Item {
private:
    string name;
    T value;
public:
    Item(string name, T value) {
        this->name = name;
        this->value = value;
    }
    string get_name() {
        return name;
    }
    T get_value() {
        return value;
    }
};
int main()
{
    Item <int>item1("Cosmin",4);
    cout << item1.get_name() << endl;
    cout << item1.get_value() << endl;
    Item<double>item2("Cosmin2", 2.3);
    cout << item2.get_value() << endl;
    Item<string>item3("Cosmin2","String2");
    cout << item3.get_value() << endl;

}

