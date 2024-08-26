#include<iostream>
#include<algorithm> // for partition algorithm
#include<vector> // for vector
using namespace std;
int main()
{
    vector<int> vect = { 2, 1, 5, 6, 8, 7 };

    is_partitioned(vect.begin(), vect.end(), [](int x)
        {
            return x % 2 == 0;

        }) ?

        cout << "Vector is partitioned" :
            cout << "Vector is not partitioned"<< endl;
//Valorile care indeplinesc conditia le pune la inceput
     partition(vect.begin(), vect.end(), [](int x)
         {
             return x % 2 == 0;
         });

    is_partitioned(vect.begin(), vect.end(), [](int x)
        {
            return x % 2 == 0;
        }) ?
        cout << "Now, vector is partitioned after partition operation" << endl :
            cout << "Vector is still not partitioned after partition operation"<<endl;
            cout << "The partitioned vector is : " << endl;
            for (int& x : vect) cout << x << " " << endl;




            vector<int> vect2 = { 2, 1, 5, 6, 8, 7 };


            stable_partition(vect2.begin(), vect2.end(), [](int x)
                {
                    return x % 2 == 0;
                });


            cout << "The partitioned vector is : " << endl;
            for (int& x : vect2) cout << x << " ";
            cout << endl;

   
            vector<int>::iterator it1;

            auto it = partition_point(vect2.begin(), vect2.end(), [](int x)
                {
                    return x % 2 == 0;
                });

            cout << "The vector elements returning true for condition are : " << endl;
            for (it1 = vect2.begin(); it1 != it; it1++)
                cout << *it1 << " ";
            cout << endl;

            return 0;

}