/* 45) Deklarirana je klasa PointR kojom se bilježi položaj točke u cilindričnom koordinatnom sustavu
(pomoću udaljenosti od ishodišta m_r i kuta m_fi – u radijanima):
class PointR {
public:
PointR();
void SetXYPosition(float x, float y);
void GetXYPosition(float& x, float& y);
float GetAngle() const {return m_fi;}
float GetRadius() const {return m_r;}
private:
float m_r;
float m_fi;
};
 Koristeći ovu deklaraciju
a) Definirajte konstruktor, kojim se ujedno inicijalizira članove m_r (radijus) i m_fi (kut) na vrijednost 0.
b) Definiraj kopirni konstruktor
c) Definiraj funkcije SetXYPosition i GetXYPosition,
kojima se postavlja i dobavlja pozicija točke u Kartezijusovom koordinatnom sustavu iz varijabli x i y.
========================================================================================================================================================================
46) Deklarirana je klasa PointR kojom se bilježi položaj točke u cilindričnom koordinatnom sustavu (
pomoću udaljenosti od ishodišta m_r i kuta m_fi – u radijanima):
class PointR {
public:
PointR();
void SetXYPosition(float x, float y);
void GetXYPosition(float& x, float& y);
float GetAngle() const {return m_fi;}
float GetRadius() const {return m_r;}
private:
float m_r;
float m_fi;
};
a) Definirajte operator = za klasu PointR.
b) Definirajte operator << za klasu ostream i objekt klase PointR.
 Njegovo je djelovanje da se ispiše udaljenost od ishodišta i kut u stupnjevima, a deklaracija funkcije je:
ostream& operator << (ostream& out, const PointR& p);*/


#include <iostream>
#include<string>     /* atof */
#include <cmath>



using namespace std;

class PointR {
public:
    PointR();

void SetXYPosition(float x, float y);
void GetXYPosition(float& x, float& y);
float GetAngle() const {return m_fi;}//Zašto const?
float GetRadius() const {return m_r;}// Zašto const?
PointR(const PointR& kk);
PointR& operator=(PointR &op1);

//ostream& operator << (ostream& out, const PointR& p);


private:
float m_r;
float m_fi;
};




PointR::PointR(const PointR& kk){  // b45) kopirni konstruktor, kojeg sam krivo napisao kao const&...
    m_r=kk.m_r;
    m_fi=kk.m_fi; }

    //return *this;  //KOPIRNI KONSTRUKTOR NEMA POVRATNOG TIPA. DOK OPERATOR = IMA!
    // Kako kopirni konstruktor iskoristiti u programu?


PointR::PointR(){ // a45) Konstruktor

m_r=0.0;
m_fi=0.0;
}


void PointR::SetXYPosition(float x, float y) {// Klasični izračun kuta i radijusa.
m_r = sqrt( x*x + y*y);
m_fi = atan( y/x );
}


void PointR::GetXYPosition(float& x, float& y) {
x = m_r*cos(m_fi);
y = m_r*sin(m_fi);
}

PointR& PointR::operator=(PointR &op1){
PointR op2;
op2.m_fi=op1.m_fi;
op2.m_r=op1.m_r;
return op2;  //U rješenju je rađeno s return *this. Zašto? Kako mogu funkcije upotrijebiti u operatoru =?
}

ostream& operator << (ostream& out, const PointR& p){
      float tfi;
      float trad;

      tfi=p.GetAngle();
      trad=p.GetRadius();

      out<<tfi<<" "<<trad;
      return out;
}



int main ()
{
float xm, ym;
cout<<"Upisi xm i ym: "<<endl;
cin>>xm>>ym;

PointR o;

o.SetXYPosition(xm,ym);
cout<<o.GetAngle()<<endl;
cout<<o.GetRadius()<<endl;

float a,b;
o.GetXYPosition(a,b);//Moramo poslati referencu na dvije varijable koje će funkcija obraditi.
                     // Odnosno, upisati na njih početne vrijednosti koje se ne prepisuju nego ponovno računaju.

cout<<a<<" "<<b<<endl;

cout<<"Ispis objekta o preko << "<<o;



  return 0;
}
