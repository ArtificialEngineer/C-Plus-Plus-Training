/* 25) Napišite funkciju PromptRange kojoj je prototip:
int PromptRange(string poruka, int low, int high)
// pre: low <= high
// post: dobavlja vrijednost iz intervala [low.. high]

Funkcija prvo ispisuje poruku, a zatim korisnik unosi vrijednost.
Ako je ta vrijednost iz intervala [low.. high] funkcija završava i
vraća unesenu vrijednost.
Ako ta vrijednost nije iz intervala [low.. high] ponovo se ispisuje poruka i čeka unos.
Ako se primjerice funkcija pozove sa sljedećim argumentima:
int dan = PromptRange("Unesi broj dana u mjesecu", l, 31);
cout << "Unesena vrijednost je:" << dan << endl;*/


#include <iostream>
#include <stdlib.h>
#include<string>     /* atof */

using namespace std;



int PromptRange(string poruka, int low, int high){
    POCETAK:cout<<poruka<<endl;
    int br;// koliki je doseg i vrijeme trajanja?
    cin>>br;
    if((br<low)||(br>high)){
        goto POCETAK;

    }
    else{

            return br;


    }
}

// '122'
int main(){

string s="Koji kurac? Unesi neki broj.";
int lowm=10; int highm=20;
cout<<"Unesena vrijednost je: "<<PromptRange(s,lowm,highm)<<endl;


    return 0;}


