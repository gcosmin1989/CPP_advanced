using namespace std;

#include <iostream>

void printNumber(int* ptr) {
	cout << *ptr << " The value of num" << endl;
}

void pritnLetter(char* ptr) {
	cout << *ptr << " The value of letter" << endl;
}

void print(void* ptr,char type) {
	switch (type)
	{
	case 'i':
		cout << *((int*)ptr) << endl;
		break;
	case 'c':
		cout << *((char*)ptr) << endl;
		break;
	};
}

int main()
{
	int num = 5;
	char letter = 'a';

	//printNumber(&num);
	//pritnLetter(&letter);

	print(&num, 'i');
	print(&letter, 'c');

}

