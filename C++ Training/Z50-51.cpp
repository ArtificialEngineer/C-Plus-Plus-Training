/*50) Zadana je klasa:
class Prekidac {
bool m_iskljucen;
public:
Prekidac();
void Ukljuci();
void Iskljuci();
bool Ukljucen();
};
a) Definirajte konstruktor klase, kojim se stanje m_iskljucen prekida�a postavlja u true.
b) Definirajte funkcije:
void Ukljuci(); - postavlja prekida� u stanje da nije isklju�en
void Iskljuci(); - postavlja prekida� u stanje da je isklju�en
bool Ukljucen(); - vra�a true ako je prekida� uklju�en, ina�e vra�a false
===================================================================================================
51) Koriste�i deklaraciju klase Prekidac iz prethodnog zadatka:
a) Definiraj operator== za klasu Prekidac.
b) Definiraj kopirni konstruktor klase Prekidac
c) Definirajte operator << za klasu ostream i objekt klase Prekidac. Njegovo je djelovanje da se ispi�e ukljucen ili iskljucen ovisno o tome dali je prekida� uklju�en ili isklju�en.
ostream& operator << (ostream& out, const Prekidac& s);
52) Napi�ite klasu Loto na na�in da se niz brojeva alocira dinami�ki. Alokaciju izvr�ite u konstruktoru. Definirajte i pripadni destruktor klase, u kojem se osloba�a alocirana memorija. Koristite slijede�u shemu klase:
class Loto {
int *m_br;
int m_rezervni_broj;
public:
Loto() {
/*Alociraj niz m_br
PostaviBrojeve();
}
~Loto() {/*Dealociraj niz m_br}
void PostaviBrojeve(); // postavi brojeve na
// nasumi�ne vrijednosti
int *DobaviNizBrojeva() const; // vrati pokaziva� na niz
int DobaviRezervniBroj() const; // vrati rezervni broj
// const iza funkcije zna�i da ove dvije funkcije ne mijenjaju
// �lanske varijable klase
};
*/

#include <iostream>
using namespace std;
#include <math.h>

class Prekidac {
bool m_iskljucen;
public:
Prekidac();
void Ukljuci();
void Iskljuci();
bool Ukljucen();

bool operator==(Prekidac &op);//Jednostavno, samo radim sa bool kao povratnim tipom.
Prekidac(const Prekidac& kk);
friend ostream& operator << (ostream& out, const Prekidac& s);
//Ne moze bez "friend". Kako onda operator << moze biti clanska funkcija klase?
//ostream& operator << (ostream& out); Pokusaj preko *this, kao kod operatora = ili ==. Ne moze.

};

Prekidac::Prekidac() {
m_iskljucen = true;
}
void Prekidac::Ukljuci() {
m_iskljucen = false; //Na kraju ispi�e 0 za false. Ispi�e 1 za true.
}
void Prekidac::Iskljuci() {
m_iskljucen = true;
}
bool Prekidac::Ukljucen() {
//return !m_iskljucen;

if(m_iskljucen==false){
    return true;
}
else{return false;}
}

bool Prekidac::operator==(Prekidac& op){//Funkcija prima objekt, ali vra�a bool vrijednost. �emu return ako imamo &?
    if(m_iskljucen==op.m_iskljucen){ //Za�to je u zbirci uvjet druga�ije zapisan?
        return true;
    }
    else{
            return false; }

}

Prekidac::Prekidac(const Prekidac& kk){
m_iskljucen=kk.m_iskljucen;
//nema povratnog tipa.
}

 ostream& operator << (ostream& out, const Prekidac& s){

out<<"Pozvan je operator << . "<<endl;
//out<<"Poziva se funkcija bool ukljucen(), koja vraca stanje prekidaca."<<endl;

//out<<s.Ukljucen()<<endl;  NE MO�E, ZA�TO?

if( !s.m_iskljucen ) {
out << "Stanje objekta je: ukljucen";
} else {
out << "Stanje objekta je: iskljucen";
}

return out;

}



int main(){
    Prekidac p;
    Prekidac p1;


    cout<<p.Ukljucen()<<endl;

    //Iskoristi nekako p==p1

    if(p==p1){
        cout<<"Operator radi."<<endl;
    }

    cout<<p;



return 0;}
