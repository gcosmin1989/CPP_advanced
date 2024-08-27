#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int exitProgram(int a, int b) {
    cout << "Exit" << endl;
    return 0;
}


void executeOperation(int x, int y, int (*operation)(int, int)) {
    int result = operation(x, y);
    cout << "Result: " << result << endl;
}

int main() {
    int a = 10, b = 5;
    int choice;

    do {
        cout << "Select operation:\n";
        cout << "1. Add\n";
        cout << "2. Substract\n";
        cout << "3. Exit\n";
        cout << "Insert option: ";
        cin >> choice;

        switch (choice) {
        case 1:
            executeOperation(a, b, add);  
            break;
        case 2:
            executeOperation(a, b, subtract);  
            break;
        case 3:
            executeOperation(a, b, exitProgram);
            break;
        default:
            cout << "Invalid Option!" << endl;
        }

    } while (choice != 3);

    return 0;
}
