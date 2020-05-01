/*50) Zadana je klasa:
class Prekidac {
bool m_iskljucen;
public:
Prekidac();
void Ukljuci();
void Iskljuci();
bool Ukljucen();
};
a) Definirajte konstruktor klase, kojim se stanje m_iskljucen prekidaèa postavlja u true.
b) Definirajte funkcije:
void Ukljuci(); - postavlja prekidaè u stanje da nije iskljuèen
void Iskljuci(); - postavlja prekidaè u stanje da je iskljuèen
bool Ukljucen(); - vraæa true ako je prekidaè ukljuèen, inaèe vraæa false
===================================================================================================
51) Koristeæi deklaraciju klase Prekidac iz prethodnog zadatka:
a) Definiraj operator== za klasu Prekidac.
b) Definiraj kopirni konstruktor klase Prekidac
c) Definirajte operator << za klasu ostream i objekt klase Prekidac. Njegovo je djelovanje da se ispiše ukljucen ili iskljucen ovisno o tome dali je prekidaè ukljuèen ili iskljuèen.
ostream& operator << (ostream& out, const Prekidac& s);
52) Napišite klasu Loto na naèin da se niz brojeva alocira dinamièki. Alokaciju izvršite u konstruktoru. Definirajte i pripadni destruktor klase, u kojem se oslobaða alocirana memorija. Koristite slijedeæu shemu klase:
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
// nasumiène vrijednosti
int *DobaviNizBrojeva() const; // vrati pokazivaè na niz
int DobaviRezervniBroj() const; // vrati rezervni broj
// const iza funkcije znaèi da ove dvije funkcije ne mijenjaju
// èlanske varijable klase
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
m_iskljucen = false; //Na kraju ispiše 0 za false. Ispiše 1 za true.
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

bool Prekidac::operator==(Prekidac& op){//Funkcija prima objekt, ali vraæa bool vrijednost. Èemu return ako imamo &?
    if(m_iskljucen==op.m_iskljucen){ //Zašto je u zbirci uvjet drugaèije zapisan?
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

//out<<s.Ukljucen()<<endl;  NE MOŽE, ZAŠTO?

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
