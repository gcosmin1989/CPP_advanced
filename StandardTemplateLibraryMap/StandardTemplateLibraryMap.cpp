
#include <map>
#include <string>
#include <iostream>
using namespace std;


int main()
{
	map<string, int> mp;
	mp["Carte Unu"] = 1;
	mp["Carte Doi"] = 2;
	mp["Carte Trei"] = 3;
	mp["Carte Patru"] = 4;
	
	//Inserare
	mp.insert(pair<string,int>("Cartea Cinci",5));
	mp["Cartea Sase"] = 6;
	map<string, int>::iterator it = mp.begin();
	while (it != mp.end()) {
		cout << "Key: " << it->first << " Value: " << it->second << endl;
		++it;
	}
	cout << "Marime: " << mp.size() << " carti" << endl;
	//Search
	string search_book;
	cout << "Cauta carte: " << endl;
	getline(cin, search_book);
	if (mp.find(search_book) != mp.end()) {
		cout <<search_book << " a fost gasita" << endl;
	}
	else {
		cout << search_book << " nu a fost gasita";
	}


}
