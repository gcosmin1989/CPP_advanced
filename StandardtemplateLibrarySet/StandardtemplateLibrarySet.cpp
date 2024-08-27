#include <set>
#include <iostream>
using namespace std;


int main()
{
	set<char> set1;
	set1.insert('A');
	set1.insert('B');
	set1.insert('C');
	set1.insert('D');
	
	for (auto& character : set1) {
		cout << character << endl;
	}

	set <int, greater<int>> set2;
	set2.insert(4);
	set2.insert(12);
	set2.insert(6);
	set2.insert(23);
	set2.insert(1);

	for (auto i : set2) {
		cout << i << endl;
	}

	set <int, less<int>> set3;
	set3.insert(4);
	set3.insert(12);
	set3.insert(6);
	set3.insert(23);
	set3.insert(1);

	for (auto i : set3) {
		cout << i << endl;
	}

}
