#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Poligon{
protected:

int sirina, visina;

public:
void init(int a, int b) {
sirina=a; visina=b;
}
int Sirina() {return sirina;}
int Visina() {return visina;}
virtual int Povrsina()=0;
    ///Ovu funkciju moramo definirati u glavnoj klasi,
    ///Kako bi pomocu Poligon* pokazivaca mogli pristupati
    ///èlanovima klasa Trokut i Pravokutnik.
    ///PITANJE: Ako sa this možemo pristupiti funkciji površina,
    ///zašto ne možemo sa Poligon*? Kako znati koji je objekt trenutni?
    ///ODGOVOR: Funkciji površina ovdje možemo pristupiti isto zato jer
    /// je iznad definirana kao virtualna funkcija.



void PrintPovrsina(void) {
     cout<< this->Povrsina() << endl;}

///pitanje: kako pozvati virtualnu funkciju iz DRUGE ÈLANSKE FUNKCIJE TEMELJNE KLASE?
///U funkciji temeljne klase se pristup virtualnoj funkciji vrši pomoæu this pokazivaèa.
/// This pokazuje na aktivni objekt. Kako znamo koji je to aktivni objekt?

};

class Pravokutnik: public Poligon{
public:
int Povrsina (void) {
return(sirina * visina);
}
};

class Trokut: public Poligon{
public:
int Povrsina (void) {
return(sirina * visina / 2);
}
};




voidIspisDimenzija(Poligon& p) {
cout<< "sirina= "<< p.Sirina() << endl;
cout<< "visina= "<< p.Visina() << endl;
}




int main () {
Pravokutnik pr;
Trokut tr;

//Poligon* testni;
//testni.Povrsina();

Poligon* pPravokutnik=&pr;
Poligon* pTrokut=&tr;

/*pr.init(4,5);
tr.init(4,5);*/

pPravokutnik->init(9,8);
pTrokut->init(9,8);

cout<<"Ispis povrsine preko: Poligon* pPravokutnik=&pr; i "<<endl;
cout<<"pPravokutnik->PrintPovrsina();"<<endl;
pPravokutnik->PrintPovrsina();
cout<<endl<<endl;
//cout<<pPravokutnik<<endl<<endl; //Ne može *Pravokutnik, a ovako ispise adresu.


cout<<"Ispis povrsine preko: Poligon* pTrokut=&tr; i "<<endl;
cout<<"pTrokut->PrintPovrsina();"<<endl;

//cout<<pTrokut<<endl<<endl; //Ne može

pTrokut->PrintPovrsina();

cout<<endl<<endl;

cout<<"Ispis povrsine preko: pPravokutnik->povrsina() "<<endl;
cout<<pPravokutnik->Povrsina()<<endl<<endl;

cout<<"Ispis povrsine preko: pTrokut->povrsina() "<<endl;
cout<<pTrokut->Povrsina()<<endl;

cout<<"Zakljucak: mozemo izravno koristiti virtualnu funkciju Povrsina(), "<<endl;
cout<<"A mozemo koristiti funkciju PrintPovrsina, koja u sebi poziva funkciju povrsina kao this->Povrsina()."<<endl;
cout<<"U cemu je razlika?"<<endl<<endl;


/*cout<< "Pravokutnik:"<< endl;
//IspisDimenzija(pr);
cout<< "Povrsina, klasican poziv: "<< pr.Povrsina() <<endl<<endl;


cout<< "Trokut:"<< endl;
//IspisDimenzija(tr);
cout<< "Povrsina, klasican poziv: "<< tr.Povrsina() << endl;*/

/// OVO SA "NEW" NE RADI!

/*
vector<Poligon*> vec;
vec.push_back(new Trokut(4, 5));  // Poligon* vec[0]=new Trokut(4,5)?
vec.push_back(new Pravokutnik(4, 5));
vec.push_back(new Trokut(4, 5));
vec.push_back(new Trokut(4, 5));
vec.push_back(new Pravokutnik(4, 5));

for(autoi : vec) {i->PrintPovrsina();}*/

///OVO RADI:
    Pravokutnik pra1;
    Pravokutnik pra2;
    Trokut tro1;
    Trokut tro2;

pra1.init(5,3);
pra2.init(9,3);
tro1.init(3,4);
tro2.init(8,7);
vector<Poligon*> vec;
vec.push_back(&pra1);
vec.push_back(&tro1);
vec.push_back(&pra2);
vec.push_back(&tro2);

//cout<<vec[0].Povrsina()<<endl;
//for(auto i : vec) {i->PrintPovrsina();}
                                            /// Ne može bez "auto", jer
                                            ///razlièiti objekti imaju
                                            ///razlièitu formulu za površinu?
/*for(int i=0; i<vec.size(); i++){

    cout<<"Povrsina na vec["<<i<<"] je: "<<Poligon->PrintPovrsina()<<endl; ///?


}*/







return 0;
}







