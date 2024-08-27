
#include <iostream>
using namespace std;


struct Vector3 {
    float x, y, z;
    Vector3() :x(10), y(20), z(30) {};
};


int main()
{
    //Stack : Memoria alocata automat pentru variabile locale si apeluri de functii. Este rapida, dar limitata in dimensiune.   
    int value = 5; 
    int array[5];
    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    array[3] = 4;
    array[4] = 5;
    Vector3 vector;

    //Heap: Memoria alocata dinamic folosind operatorii new si delete. Este mai flexibila, dar gestionarea corecta este cruciala pentru a evita scurgeri de memorie.
    int* hvalue = new int; 
    *hvalue = 5;
    int* harray = new int[5];
    harray[0] = 1;
    harray[1] = 2;
    harray[2] = 3;
    harray[3] = 4;
    harray[4] = 5;

    Vector3* hvector = new Vector3;
  




}   
