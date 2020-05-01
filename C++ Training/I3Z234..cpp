#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;



class Loto {
// privatne varijable

int* m_br; // za dinamièku alokaciju polja brojeva
int m_rezervni_broj;
public:
Loto() {
m_br = new int[6]; // alokacija polja brojeva
PostaviBrojeve();
};

~Loto() { delete [] m_br; } // dealokacija polja brojeva

void PostaviBrojeve();

int *DobaviNizBrojeva() const {return m_br;} //Vraæa adresu prvog èlana, pa je int * logièan.

int DobaviRezervniBroj() const {return m_rezervni_broj;}
};

void Loto::PostaviBrojeve() { // nasumièno postavljanje brojeva
for(int i=0 ; i<6 ; i++) {
m_br[i] = rand()%42;
}
m_rezervni_broj = rand()%42;
}

ostream& operator << (ostream& s, const Loto& L) {
int* A; // pokazivaè pomoæu kojeg æemo pristupat polju
A = L.DobaviNizBrojeva(); //Ova funkcija bi trebala vraæati adresu prvog èlana niza.
                        // Pa preko nje, pokazivaè A dobiva pristup nizu.
for( int i = 0 ; i<6 ; i++ ) {
s << A[i] << ", ";
}
s << " (" << L.DobaviRezervniBroj() << ")";
return s;


}

int main() {

    Loto a;
    a.PostaviBrojeve();
    cout<<a;



}
