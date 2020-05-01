/* 52) Napišite klasu Loto na nacin da se niz brojeva alocira dinamički.
 Alokaciju izvršite u konstruktoru. Definirajte i pripadni destruktor klase,
 u kojem se oslobaða alocirana memorija. Koristite slijedeæu shemu klase:
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
======================================================================================
53) Napišite definiciju za operator << kojim se ispisuje sadržaj objekta klase Loto
u obliku liste 6 brojeva odvojenih zarezom, a kraju se u zagradama ispisuje rezervni broj.
Primjer ispisa:
22, 37, 2, 3, 6, 12 (4)
Deklaracija operatora je:
ostream& operator << (ostream& s, const Loto& L)
Primijetite da su èlanske funkcije klase Loto privatne.
*/

#include <iostream>
#include<stdlib.h>
using namespace std;



class Loto {
int *m_br;
int m_rezervni_broj;

public:
Loto();
~Loto() ;//fali ti []
void PostaviBrojeve();
int *DobaviNizBrojeva() const{return m_br;} // vrati pokazivač na niz
int DobaviRezervniBroj() const{return m_rezervni_broj;} // vrati rezervni broj
// const iza funkcije znaèi da ove dvije funkcije ne mijenjaju
// èlanske varijable klase

};

Loto::Loto(){
m_br=new int[5];
PostaviBrojeve();//Poziv funkcije
//new int a[6]; Ne može ovako. Nièim nisi povezao pokazivaè s novim intom.

}
Loto::~Loto(){
delete [] m_br;
}

ostream& operator<<(ostream& out, const Loto& a){
      int* A;
        A=a.DobaviNizBrojeva();
    cout<<"Namjesteni brojevi su: "<<endl;
for(int i=0; i<5; i++){
    out<<" "<<A[i]<<" , ";
}
out<<endl<<"Dopunski broj je: "<<a.DobaviRezervniBroj();
return out;
}

void Loto::PostaviBrojeve(){
for(int i=0; i<5; i++){

    m_br[i]=rand()%42; //42  označava raspon brojeva.
}
m_rezervni_broj=rand()%42;
}


int main(){

Loto o; //Kreiranjem objekta se izvuku brojevi u konstruktoru.
    cout<<o<<endl;

return 0;
}



