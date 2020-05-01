/*48) Zadana je klasa Complex, pomoæu koje se manipulira kompleksnim brojem;
class Complex {
public:
double real;
double imag;
Complex(): real(0), imag(0) {};
Complex(const Complex&);
double Mag() const;
double Phase() const;
};
a) Definirajte kopirni konstruktor klase,
 koji služi za deklariranje kompleksnog broja pomoæu postojeæeg objekta tipa Complex:
Complex a;
Complex b(a); tj. b=a; Objekt a kopiramo na b.
b) Definirajte funkcije:
double Complex::Mag() const
// vraæa magnitudu polarnog prikaza kompleksnog broja.
double Complex::Phase()const
// vraæa fazu polarnog prikaza kompleksnog broja.
==========================================================================================================
49) Koristeæi deklaraciju klase Complex iz prethodnog zadatka:
a) Definirajte operator = za klasu Complex.
b) Definirajte operator << za klasu ostream i objekt klase Complex.
ostream& operator << (ostream& out, const Complex& x);
Njegovo je djelovanje da se ispiše kompleksni broj u obliku:
18
(realni dio) ± j (imaginarni dio)
*/

#include <iostream>
using namespace std;
#include <math.h>
#include <fstream>
#include <string>
#include <stdlib.h>

class Complex {
public:
double real;
double imag;
Complex() {
    real=0;
    imag=0;

}; //Konstruktor, drugaciji nacin zapisa. Complex(): real(0), imag(0)
Complex(const Complex& kk);
double Mag() const;
double Phase() const;
Complex& operator=(const Complex& op1);
};

Complex::Complex(const Complex& kk){
    real=kk.real;
    imag=kk.imag;

}

Complex& Complex::operator=(const Complex& op1){
    real=op1.real;
    imag=op1.imag;
    return *this;  //Koristiti *this ili drugi objekt?

}

ostream& operator << (ostream& out, const Complex& x){

    if(x.imag<0){
   out<<x.real<<" - "<<"j "<<(-1)*x.imag<<endl;;
   return out;}
   else{
    out<<x.real<<" + "<<"j "<<x.imag<<endl;;

   }

}

int main(){
Complex a;
float rem, imm;
cout<<"Upisi vrijednosti realnog i imaginarnog dijela."<<endl;
cin>>rem;
cin>>imm;

a.real=rem;
a.imag=imm;
/*Complex b;
b=a; //Koji kurac? Kako operator = funkcionira a nisam ga definirao? Definiran ej samo kopirni konstruktor.*/

Complex b(a); // Ovo je isto što i b=a? Zašto?

cout<<b.real<<endl; //Na objekt b su se kopirale vrijednosti iz objekta a.
cout<<b.imag<<endl;

cout<<"Ispis pomocu preopterecenja operatora: "<<a<<endl;


Complex A[50];

for(int i=0; i<50; i++){

    A[i].real=rand()%50 + (-100);

    A[i].imag=rand()%50 + (-10);
}
  ofstream ob;

  ob.open("kbrojevi.txt");

  for(int i=0; i<50; i++){
    //ob<<A[i].real<<" "<<A[i].imag<<"j"<<endl;
    ob<<A[i];


  }

  ob.close();


    return 0;


return 0;}
