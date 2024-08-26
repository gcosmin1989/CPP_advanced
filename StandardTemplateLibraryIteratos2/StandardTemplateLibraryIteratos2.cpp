
#include <vector>
#include <iostream>
using namespace std;

int main()
{
	vector<int> v1 = { 1,2,3,4,5 };
	vector<int>::iterator i1 = v1.begin();
	vector<int>::iterator i2 = v1.end();

	cout << "The vector elements are : ";
	for (i1 = v1.begin(); i1 < v1.end(); i1++)
		cout << *i1 << " ";

    vector<int> ar = { 1, 2, 3, 4, 5 };

    vector<int>::iterator ptr = ar.begin();

	cout << endl;
    advance(ptr, 3);

    cout << "The position of iterator after advancing is : ";
    cout << *ptr << " ";
    cout << endl;
    vector<int> ar2 = { 1, 2, 3, 4, 5 };
    vector<int> ar1 = { 10, 20, 30 };


    vector<int>::iterator i3 = ar2.begin();


    advance(i3, 3);


    copy(ar1.begin(), ar1.end(), inserter(ar2, i3));


    cout << "The new vector after inserting elements is : ";
    for (int& x : ar2)
        cout << x << " ";


	return 0;
}
