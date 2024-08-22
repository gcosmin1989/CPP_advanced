
#include <vector>
#include <set>
#include <iostream>
using namespace std;

int main()
{
    vector<int> vec{ 1,2,3 };
    vector<int>::iterator it = vec.begin();

    while (it != vec.end()) {
        cout << *it << endl;
        it++;
    }

    for (auto it = vec.begin(); it != vec.end(); it++) {
        cout << *it<<endl;
    }

    set<char> suits{ 'A','B','C','D' };
    auto it2 = suits.begin();

    while (it2 != suits.end()) {
        cout << *it2 << " " << endl;
        it2++;
    }
}
