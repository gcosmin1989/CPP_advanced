#include <string>
#include <iostream>
using namespace std;


class Person {
private:
    string first;
    string last;

public:


    Person(string firstName, string lastName) : first(firstName), last(lastName) {};


    void setFirstName(string firstName) {
        first = firstName;
   }
    void setlasttName(string lastName) {
        last = lastName;
    }

    string getName() {
        return first + "<- From getName -> " + last;
    }

    void printFullName() {
        cout << first << " " << last << endl;
    }
};


int main()
{
    Person p1("This", "name");


    p1.printFullName();
    cout << p1.getName() << endl;

    Person p2("1","2");


    p2.printFullName();
 
    //class- structura
    //obiectul - exemplu de structura sau instanta
    //instantiere - crearea unui obiect din clasa
    //members - variabile
    //metode - functii definite in interiorul clasei


    //Abstractie - un concept unde faci ceva usor ascunzand lucrurile complicate
    //Encapsulare - acces la date private doar prin interfete publice
    //Mostenire - putem sa creeam clase derivate (copii) care mostenesc propietati de la clasele parinte
    //Polimorfism - putem sa folosim differite obiecte ca obiecte de baza

}
