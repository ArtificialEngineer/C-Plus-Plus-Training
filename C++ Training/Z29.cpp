/* 29) string ZamijeniRazmakePodvlakom(const string str)
/* Argument str je tipa klase string.
* Funkcija vraća string koji je jednak ulaznom argumentu ali se
* umjesto jednog ili više uzastopnih znaka razmaka zapisuje znak
* podvlake.
Primjerice, nakon programskog odsječka:
#include <string>
...
string s = " Hello World .";
cout << ZamijeniRazmakePodvlakom(s);
treba biti ispisano:
_Hello_World_.*/


#include <iostream>
#include <stdlib.h>
#include<string>     /* atof */

using namespace std;


/*string ZamijeniRazmakePodvlakom(const string str){
//string temp;
for(int i=0; i<str.length(); i++){
        if(str[i]==' '){//Potrebni su mi jednostruki navodnici.
        str.push_back('_');//Ne pišem str[i]=, jer je u uvjetu određeno
        // da se radi o i-tom mjestu. Naknadno funkcija na i-to mjesto upisuje "_".
                                        }
//U funkciju push_back moramo poslati znak koji stavljamo umjesto onoga
//koji je postavljen u if izjavi. Ako stavim temp[i], Tada se znak ne mijenja.
//Tj. mijenja se istim tim znakom.

else{
        str.push_back(str[i]);
                                            }


return str;
    }


}*/



string ZamijeniRazmakePodvlakom(const string str) {//Može i sa i bez reference.
    string ret; //string koji se vraca
for( unsigned int i = 0 ; i < str.length() ; i++ ) {
//prolazimo kroz cijeli srting tako da pocnemo od prvog
//znaka i idemo do njegovog kraja .size()
if( str[i] == ' ' ) { //provjeravamo prazna mjesta
ret.push_back('_');
// i ako je uvjet zadovoljen tada prazno mjesto mjenjamo podvlakom
} else {
//inace stavljamo znak koji je na mjestu i
ret.push_back( str[i] );
}
}
return ret;
}

// '122'
int main(){

string s=" Potrebno je zamijeniti razmake podvlakom. ";
cout<<ZamijeniRazmakePodvlakom(s);



    return 0;}


