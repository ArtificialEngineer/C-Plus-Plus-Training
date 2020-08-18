/*
69) Napisati program koji sa tipkovnice čita 20 imena u niz varijabli tipa string.
Program potom imena zapisuje u tekstualnu datoteku imena „20imena.txt.“.
Imena se u datoteku zapisuju na način da se svakoj liniji nalazi uneseno ime,
 zatim razmak pa broj slova koje sadrži uneseno ime.
Primjer:
korisnikov unos   sadržaj datoteke
Branimir            Branimir 8
Ivan                 Ivan    4
Goran                Goran   5
... ...

*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main() {
    string imena[5];
    /*for(int i=0; i<5; i++){
        cout<<"Upisi "<<i+1<<". ime: "<<endl;
        cin>>imena[i];

}*/

ofstream obj; //Daj utvrdi to kad je ofstream a kad istream.
string str;
obj.open("5imena.txt");// Otvoren pristup datoteci
for(int j=0; j<5; j++){
         //cout<<"Upisi "<<i+1<<". ime: "<<endl;
        cin>>imena[j];
        str=imena[j];
    obj<<" "<<str<<" "<<str.length()<<endl;

}
obj.close();

return 0;


}








