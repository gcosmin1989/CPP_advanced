using namespace std;
#include <iostream>
#include <memory>


class MyClass
{
public:
    MyClass() {
        cout << "Cosntructor Invoked" << endl;
    }

    ~MyClass() {
        cout << "Destructor invoked" << endl;
    }
};




int main()
{
    //shared_ptr<MyClass>shPtr1 = make_shared<MyClass>();
    //
    //cout << "Shared count: " << shPtr1.use_count() << endl;
    //{
    //    shared_ptr<MyClass>shPtr2 = shPtr1;

    //    cout << "Shared count: " << shPtr1.use_count() << endl;
    //}

    //cout << "Shared count: " << shPtr1.use_count() << endl;

    weak_ptr<int>wePtr1;
    {
        shared_ptr<int>shPtr1 = make_shared<int>(25);
        wePtr1 = shPtr1;

    }
    system("pause>nul");

}

