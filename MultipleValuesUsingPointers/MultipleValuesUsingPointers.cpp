using namespace std;

#include <iostream>

int numb[5] = { 5,4,-2,29,6 };

int getMin(int numb[], int size) {
	int min = {};
	for (int i = 0; i < size; i++) {
		if (numb[i]<min) {
			min = numb[i];
		}
	}
	return min;
}

int getMax(int numb[], int size) {
	int max = {};
	for (int i = 0; i < size; i++) {
		if (numb[i] > max) {
			max = numb[i];
		}
	}
	return max;
}
void getMinMax(int numb[], int size, int*min, int*max) {
	for (int i = 0; i < size; i++) {
		if (numb[i] > *max) {
			*max = numb[i];
		}
		if (numb[i] < *min) {
			*min = numb[i];
		}
	}
}

int main()
{
	int min = {};
	int max = {};
	//cout<< "The min value is: "<<getMin(numb, 5)<<endl;
	//cout << "The max value is: " << getMax(numb, 5);
	getMinMax(numb, 5, &min, &max);
	cout << "The min is: "<<min << endl;
	cout << "The max is: " << max << endl;
}

