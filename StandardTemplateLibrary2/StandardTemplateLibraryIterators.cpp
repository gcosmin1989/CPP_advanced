using namespace std;
#include <iostream>
#include <vector>

int main()
{
	vector<int> v1 = { 1,2,3,4,5 };
	vector <int>::iterator i1;

	cout << "Fara iterator: ";
	for (int j = 0; j < v1.size(); j++) {
		cout << v1[j] << " ";
	}


	cout << endl;
	vector<int>::iterator k;
	cout << "Cu iterator: ";
	for (k = v1.begin(); k != v1.end(); k++) {
		cout << *k << " ";
		if (k == v1.begin() + 1) {
			k = v1.insert(k, 5);
		}
		cout << *k << " ";
	}
	cout << endl;

	for (k = v1.begin(); k != v1.end(); k++) {
		if (k == v1.begin() + 1) {
			k = v1.insert(k, 5);
		}
		cout << *k << " ";
	}
}