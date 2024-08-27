#include <iostream>
#include <stdexcept>
using namespace std;

void function() {
    try {
        throw runtime_error("Error in func"); 
    }
    catch (const runtime_error& e) {
        cout << "Func Catch: " << e.what() << endl;
        throw; 
    }
}

int main() {
    try {
        function();
    }
    catch (const runtime_error& e) {
        cout << "Main Catch: " << e.what() << endl;
    }

    return 0;
}
