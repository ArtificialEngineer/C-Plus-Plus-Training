/* class Pravokutnik {
public:
Pravokutnik ();
Pravokutnik& operator= (const Pravokutnik& p);
int GetSirina();
int GetVisina();
public:
int x1, y1, x2 , y2;

Koristeći ovu deklaraciju:
a) napišite konstruktor, kojim se ujedno inicijaliziraju članovi: x1=y1=0 i x2=y2=1 .
b) definiraj operator= za klasu Pravokutnik.
c) definiraj funkcije GetSirina() i GetVisina(), koje vraćaju širinu i visinu pravokutnika.
==========================================================================================================
44) Napišite implementaciju operatora >> klasu Pravokutnik iz prethodnog zadatka, prema sljedećoj deklaraciji:
istream& operator >> (istream& s, Pravokutnik& c1);
x1
y1
x2
y2

Operator >> unosi koordinate pravokutnika x1, y1, x2 i y2 u objekt klase Pravokutnik.*/


#include <iostream>
#include<string>     /* atof */

using namespace std;

class Pravokutnik {
public:
Pravokutnik ();
Pravokutnik& operator= (const Pravokutnik& p);
int GetSirina();
int GetVisina();
public:
int x1, y1, x2 , y2;


};

Pravokutnik::Pravokutnik(){ //a) napišite konstruktor, kojim se ujedno inicijaliziraju članovi: x1=y1=0 i x2=y2=1
x1=y1=0 ; x2=y2=1;
}

Pravokutnik& Pravokutnik::operator=(const Pravokutnik& p){ //b) definiraj operator= za klasu Pravokutnik.
   // Pravokutnik p1;
    x1=p.x1;
    x2=p.x2;
    y1=p.y1;
    y2=p.y2;
    return *this;  // *this je referenca na objekt. Koji objekt? Koristi se sa nadovezivanje: http://www.cplusplus.com/forum/general/195508/

    //Objekt p je referenca na objekt o1. Zato vrijednosti p.x1, p.x2, p.y1, p.y2 stavljamo s desne strane.
    //Jer s desne strane ide ono što se pridjeljuje a s lijeve ono čemu se pridjeljuje.
    //Zašto ne vrijedi pisati npr. p1.x1=p.x1?

   // return p1; //Zašto ovo radi, ako bi trebali vraćati referencu?
   /* stackoverflow. com:
      Watch out that if you try to use return *this;
      on a function whose return type is Type and not Type&,
       C++ will try to make a copy of the object and then immediately call the destructor,
       usually not the intended behaviour.
       So the return type should be a reference as in your example. */

}

int Pravokutnik::GetSirina(){
    return x2-x1;

}

int Pravokutnik::GetVisina(){
return y2-y1;
}

/*istream& Pravokutnik::operator >> (istream& s, Pravokutnik& c1){

s>>c1.x1>>c1.x2>>c1.y1>>c1.y2;
return s;

} */

istream& operator>> (istream& s, Pravokutnik& c1) {
int tempX1, tempY1, tempX2, tempY2;
// ukoliko čitanje ne uspije "s >>" vraća false
// pa se vrijednosti koordinata ne mijenjaju
if( s >> tempX1 >> tempY1 >> tempX2 >> tempY2 ) {
c1.x1 = tempX1;
c1.y1 = tempY1;
c1.x2 = tempX2;
c1.y2 = tempY2;
} }

int main(){
Pravokutnik o1;
o1.x1=5;   // Može li o1(5,8,9,11)?
o1.x2=8;
o1.y1=9;
o1.y2=11;

cout<<"Sirina pravokutnika je: "<<o1.GetSirina()<<endl;
cout<<"Visina pravokutnika je: "<< o1.GetVisina()<<endl;

Pravokutnik o2;
o2=o1;// Vrijednosti objekta o1 pridjeljujemo objektu o2.



cout<<"Operator = : "<<o2.x1<<endl; //Ispisuje se broj 5, jer smo pomoću operatora =
                                    // pridijelili  vrijednosti objekta o1 ka o2;

  // Koja je svrha ovoga, ako u jednoj klasi mogu imati beskonačno funkcija i varijabli,
  // pa tako sve članove klase mogu pozivati pomoću jednog objekta. Što će mi dva ista?


  /* *this
  this means pointer to the object,
  so *this is an object.
  So you are returning an object ie,
  *this returns a reference to the object.

  Usporedba:
  int* a;
  a je u daljnjem kodu pokazivač na adresu, tj. neku varijablu na toj adresi.
  *a je vrijednost na koju pokazuje pokazivač.
  */

  cout<<"Upisi vrijednosti objekta o1 "<<endl;
  cin>>o1;

  cout<<"Ispis sirine i visine: "<<endl;
 cout<<"Sirina pravokutnika je: "<<o1.GetSirina()<<endl;
cout<<"Visina pravokutnika je: "<< o1.GetVisina()<<endl;


    return 0;
}


