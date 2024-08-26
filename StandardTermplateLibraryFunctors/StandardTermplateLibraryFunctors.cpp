
#include <iostream>
#include <algorithm>

using namespace std;

int increment(int x) { return (x + 1); }
int main()
{
    int arr[] = { 1,2,3,4,5 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    int arr2[5];

   transform(arr, arr+ arr_size,arr2, increment);

   for (int i = 0; i < 5; i++) {
       cout << arr2[i] << endl;
   }

   for (int i = 0; i < arr_size; i++) {
       cout << arr[i] << endl;
   }
}
