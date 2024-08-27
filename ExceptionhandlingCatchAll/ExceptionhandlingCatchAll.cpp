#include <iostream>
using namespace std;

int main() {
    try {
        int optiune = 2.12; 

        if (optiune == 1) {
            throw 10; 
        }
        else if (optiune == 2) {
            throw "Type error string"; 
        }
        else {
            throw 3.14; 
        }

    }
    catch (int e) {
        cout << "Catch error int: " << e << endl;
    }
    catch (const char* e) {
        cout << "Catch error string: " << e << endl;
    }
    catch (...) {
   
        cout << "Catch Unknown error" << endl;
    }

    return 0;
}
