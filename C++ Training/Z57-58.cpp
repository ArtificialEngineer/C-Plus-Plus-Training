/* 57) Deklarirana je klasa Circle, kojom se bilježi radijus kružnice:
class Circle {
public:
Circle() : m_radius(0) {}
void SetRadius(int r) {m_radius = r;};
int GetRadius() {return m_radius;};
Circle& operator++(); //prefiks
Circle operator++(int unused); //postfiks
protected:
int m_radius;
};
bool operator == (Circle &c1, Circle & c2);
Koristeći ovu deklaraciju:
a) Napišite implementaciju operatora ++ za klasu Circle
b) Napišite implementaciju operatora ==
==================================================================0
58) Napišite implementaciju operatora >> i << za klasu Circle, prema sljedećoj deklaraciji:
ostream & operator << (ostream& s, const Circle& c1);
istream & operator >> (istream& s, Circle& c1);
Ispisuje se (ili unosi) radijus kruga. */
#include <iostream>
using namespace std;
class Circle {
public:
Circle() : m_radius(0) {}

void SetRadius(int r) {m_radius = r;};

int GetRadius() {return m_radius;}

Circle& operator++(); //prefiks

Circle operator++(int unused); //postfiks

Circle(Circle& ob);

friend ostream& operator<<(ostream& s, const Circle& c1);
friend istream& operator>>(istream& s, Circle& c1);

protected:

int m_radius;
};
//bool operator == (Circle &c1, Circle & c2); //Zašto je ovo izvan klase? Jer može biti i unutar i izvan.

Circle::Circle(Circle& ob){
m_radius=ob.m_radius;

}
// prefiks operator (nema argument)
Circle& Circle::operator++() {
m_radius++;  // Sada je radijus već uvećan za 1.
return *this; // this je pokazivač na trenutni objekt. Dereferenciranjem vraćamo trenutni objekt.
}
*/// postfiks operator : argument int unused služi kompajleru
*/// da raspozna da je ovo postfix, a ne prefix operator. Zašto mu taj argument pomaže u raspoznavanju?

/*double Circle::operator++(int unused) {

// služi da privremeno spremimo objekt, tako da nakon inkrementa
// vratimo staro stanje, a ne novo sa inkrementiranim brojačem
Circle temp(*this); ///S ovim zapravo pozivamo kopirni konstruktor.
//temp.m_radius=*this.m_radius; - zašto i ovo ne funkcionira?
// inkrementiraj radijus
++m_radius;
return temp;
/// Sada vraćamo staro stanje.
/// Ako u negdje upotrijebimo inkrement kao postfiks, npr. k1++, u tom trenutku kompajler mu vraća
/// staru vrijednost radijusa. Vrijednost radijusa se uvećava tek kod početka iduće naredbe.
/// U u prefiks funkciji, uvećana vrijednost radijusa se vraća odmah na mjesto gdje je npr. ++k pozvan.
}*/
//bool operator== (Circle &c1, Circle& c2) {


/*ostream& operator << (ostream& s, const Circle& c1){

s<<"Pozvan je operator << ."<<endl;
s<<"Vrijednost radijusa je: "<<endl;
s<<c1.m_radius<<endl;  // Staviti GetRadius() ili friend funkciju?
return s;

}*/




/*istream& operator>>(istream& s, Circle& c1){

    cout<<"Pozvan je operator << ."<<endl;
    cout<<"Upisite vrijednosr radijusa: "<<endl;

    int r;
    s>>r;
    c1.SetRadius(r);
    return s;  //Zašto mi uopće treba povratni tip? Svakako s mogu zamijeniti sa cin.




}*/


class ColoredCircle:public Circle{

public:
    ColoredCircle();
    int m_color;
    ColoredCircle operator=(const ColoredCircle& ob);
};

   ColoredCircle::ColoredCircle(){
   m_color=0;
   m_radius=0;
   }


 ColoredCircle  ColoredCircle::operator=(ColoredCircle& ob){

      m_color=ob.m_color;
      m_radius=ob.m_radius;
      return *this;

   }

int main() {

Circle k1;
float a;
cout<<"Upisi radijus za objekt k1: "<<endl;
cin>>a;

cout<<"Poziv postfiks k1++ preopterecene funkcije: "<<endl;
//k1++;
cout<<"Ispis radijusa nakon postfiks ++: "<<endl;
//cout<<k1;

cout<<"Poziv prefiks ++k1 preopterecene funkcije: "<<endl;
++k1;
cout<<"Ispis radijusa nakon prefiks ++: "<<endl;
//cout<<k1;


return 0;
}


/*
Povratni tip preopterećenog operatora se razlikuje ovisno o svrsi preopterećenja.

Kod prefiks operatora, funkcija ne pirma nikakav argument zbog toga što je ++ unarni operator.
U funkciju se proslijeđuje trenutni objekt, ili implicitno ili od strane kompajlera.

Ove oepratore možemo odraditi i preko prijateljskih funkcija.
cin>>5 - može li ovo?
*/
 /// GREŠKA: expected constructor, destructor, or type conversion before 'Circle'|
 ///expected constructor, destructor, or type conversion before '&' token - greška za << >>
