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


string ZamijeniSlova(const string str){

    string temp=str;
    for(int i=0; i<temp.length(); i++){
        if (isupper(str[i]))
            temp[i]=tolower(temp[i]);

            else if(islower(temp[i]))
            temp[i]=toupper(temp[i]);



    }
    return temp;

}


// '122'
int main(){

string s = "ZaMijenI VELicinu ZnaKovA.";
cout << s.length()<<endl;
cout << ZamijeniSlova(s);



    return 0;}


