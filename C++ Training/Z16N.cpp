#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>

using namespace std;
/*16) Napišite funkciju FormirajPismo èiji je prototip:
void FormirajPismo(string ime, string magazin, int godina, int mjesec, string& pismo);
// POST: formirano pismo se vraæa pomoæu stringa pismo
// Argumenti: ime - ime korisnika kojem se šalje pismo
// magazin - ime èasopisa kojem prestaje pretplata
// godina - u kojoj prestaje preplata
// mjesec - u kojem prestaje preplata
Primjerice, nakon poziva funkcije s argumentima:
FormirajPismo("Jure", "Nacional", 2003, 6, p):
u varijabli p treba biti pohranjen slijedeæi tekst:
Dragi IME, upozoravamo Vas da vasa preplata na magazin MAGAZIN prestaje vrijediti u mjesecu:
MJESEC, GODINA. Molimo, obnovite preplatu!*/

/*void FormirajPismo(string ime, string magazin, int godina, int mjesec, string& pismo);
cout<<"Dragi "<<ime<<", upozoravamo Vas da vasa pretplata na magazin "<<magazin<<endl<<" prestaje vrijediti u mjesecu: "<<mjesec<<" , "<<godina<<". Molimo, obnovite pretplatu!"<<endl;
string a=Dragi, b=
}*/ //IMA LI OVO SMISLA?


void FormirajPismo(string ime, string magazin, int godina, int mjesec, string& pismo){


string mjesecif[12]{ "Sijecanj", "Veljaca", "Ozujak", "Travanj", "Svibanj", "Lipanj","Srpanj", "Kolovoz", "Rujan", "Listopad", "Studeni", "Prosinac"};
//cout<<"Dragi "<< ime <<" upozoravamo Vas da vasa pretplata za magazin "<< magazin<<endl<<" istjece u mjesecu: "<< mjesecif[mjesec]<<" molimo Vas, obnovite pretplatu."<<endl;

pismo="Dragi "+ ime +" ,upozoravamo Vas da vasa pretplata za magazin "+ magazin+" istjece u mjesecu: " + mjesecif[mjesec]+"godine" + to_string(godina) + ". ,molimo Vas, obnovite pretplatu.";
}

int main()
{
string imem, magazinm, pismom;
int godinam, mjesecm;
cout<<"Upisi podatke potrebne za pismo: "<<endl;
cout<<"Upisi Ime: "<<endl;
cin>>imem;
cout<<"Upisi magazin: "<<endl;
cin>>magazinm;
cout<<"Upisi  broj mjeseca: "<<endl;
cin>>mjesecm;
cout<<"Upisi godinu: "<<endl;
cin>>godinam;


FormirajPismo(imem, magazinm, godinam, mjesecm,pismom);
cout<<pismom;

    return 0;
}



