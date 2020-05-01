

#include <iostream>
using namespace std;


/*40) Deklarirana je klasa Razlomak,
kojom se definira objekt razlomka određen cjelobrojnim brojnikom i nazivnikom:


// mutatori
void Brojnik(int br); //definiraj
void Nazivnik(int naz) { m_nazivnik = naz; }
};
// operacije s razlomcima
Razlomak operator* (const Razlomak& r, const Razlomak& s) {
int a = r.Brojnik();
int b = r.Nazivnik();
int c = s.Brojnik();
int d = s.Nazivnik();
return Razlomak(a*c, b*d);
}
Razlomak operator + (const Razlomak& r, const Razlomak& s);
Razlomak operator - (const Razlomak& r, const Razlomak& s);
Koristeći ovu deklaraciju klase Razlomak,
a) Definiraj funkcije Brojnik, kojima se postavlja i dobavlja vrijednost brojnika.
b) Definiraj operator+ i operator- za klasu Razlomak.
c) Napišite program u kojem su definirani razlomci:
Razlomak r1(3,4); Razlomak r2(7,3);
Razlomak zbroj, razlika;
a program računa i ispisuje zbroj i razliku razlomaka r1 i r2. Operacije zbrajanja i oduzimanja treba izvršiti pomoću prethodno definiranih operatora + i -. */





class Razlomak {

int m_brojnik;
int m_nazivnik;

public:

Razlomak(): m_brojnik(0), m_nazivnik(1) {}

Razlomak(int brojnik, int nazivnik = 1)
{ m_brojnik = brojnik;
m_nazivnik = nazivnik; }

// pristupnici
int Brojnik() const ; //definiraj

int Nazivnik() const {
     return m_nazivnik; }

// mutatori
void Brojnik(int br); //definiraj

void Nazivnik(int naz) {
    m_nazivnik = naz; }



};



// operacije s razlomcima
Razlomak operator* (const Razlomak& r, const Razlomak& s) {
int a = r.Brojnik();
int b = r.Nazivnik();
int c = s.Brojnik();
int d = s.Nazivnik();
return Razlomak(a*c, b*d);
}
Razlomak operator + (const Razlomak& r, const Razlomak& s);
Razlomak operator - (const Razlomak& r, const Razlomak& s);





int main(){





    return 0;
}

