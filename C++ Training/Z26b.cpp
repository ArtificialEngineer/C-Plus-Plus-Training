/* 26) Napišite funkciju kojoj je specifikacija:
string ZamijeniSlova(const string str)
/* Argument str je tipa klase string.
Funkcija vraća string koji je jednak ulaznom argumentu,
ali se mala slova pretvaraju u velika slova i obrnuto.
Primjerice, nakon programskog odsječka:
#include <string>
...
String s = "Hello World!";
cout << ZamijeniSlova(s);
treba biti ispisano: hELLO wORLD!*/


#include <iostream>
#include <stdlib.h>
#include<string>     /* atof */

using namespace std;


string ZamijeniSlova(const string s){

    string z=s;

    for(int i=0; i<z.length(); i++){

        if(islower(z.at(i))){

            z.at(i)=toupper(z.at(i));

        }

        else if(isupper(z.at(i))){

            z.at(i)=tolower(z.at(i));
        }

        else{
            z.at(i)=z.at(i);
        }



    }

   return z;
    }





// '122'
int main(){

string s = "ZaMijenI VELicinu ZnaKo8vA";
cout << ZamijeniSlova(s);



    return 0;}


