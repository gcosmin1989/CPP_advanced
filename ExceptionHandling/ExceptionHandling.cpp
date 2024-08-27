
#include <iostream>
using namespace std;


int main()
{
	int num;
	int divisor;
	double result;

	cout << "Enter a number: ";
	cin >> num;
	cout << "Enter a divisor: ";
	cin >> divisor;
	cout << "BEFORE TRY" << endl;

	try {
		cout << "INSIDE TRY" << endl;
		if (divisor == 0) {
			cout << "BEFORE TROW" << endl;
			throw runtime_error("Division by 0 not allowed");
			cout << "AFTER TROW2 (never executed)" << endl;
		}
		result = static_cast<double>(num) / divisor;
		cout << "The result after division is: " << result << endl;
	}
	catch (const exception e) {
		cout << "Exception " << e.what() << endl;

	}

	cout << "AFTER CATCH (Will be executed)" << endl;
}
