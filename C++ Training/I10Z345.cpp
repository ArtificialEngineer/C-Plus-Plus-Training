#include <iostream>
#include <string>
#include <cstdlib>
#include <stdio.h>
#include<fstream>
#include<list>
using namespace std;


class CImpedancija {
protected:
double m_R, m_I;
public:
CImpedancija();
CImpedancija& operator=(CImpedancija& I);

void SetRe(double r) {m_R = r;}

double GetRe()  {return m_R;}

void SetIm(double i) {m_I = i;}

double GetIm()  {return m_I;}
};

class CFrekvImpedancija : public CImpedancija {
double m_f;  //frekvencija
public:
	CFrekvImpedancija(); // postavlja frekvenciju na 0
CFrekvImpedancija( CFrekvImpedancija& I );

void SetFrekv(double f) {m_f = f;}
double GetFrekv() {return m_f;}

bool IsCapacitive();
//vraæa true ako je imaginarni dio negativan

bool IsInductive();
//vraæa true ako je imaginarni dio pozitivan

double GetKapacitet();
// vraæa 0 ako nije kapacitivna,
// ili vrijednost ekvivalentnog kapaciteta C
// kapacitet izraèunati pomoæu formula m_I = -1/(w*C) i w = 2*PI*m_f

double GetInduktivitet();
// vraæa 0 ako nije induktivna,
// ili vrijednost ekvivalentnog induktiviteta L
// kapacitet izraèunati pomoæu formula m_I = w*L i w = 2*PI*m_f
};


CImpedancija::CImpedancija() {m_R=m_I=0;}

CImpedancija& CImpedancija::operator=(CImpedancija& I){
SetRe(I.GetRe());
SetIm(I.GetIm());
return *this;
}
ostream& operator << (ostream &out, CImpedancija &I){

if(I.GetIm()<0){
    out<<I.GetRe()<<" -j"<<(-1)*I.GetIm();
    return out;
}
else{

     out<<I.GetRe()<<" +j"<<I.GetIm();
     return out;
}
}

CFrekvImpedancija::CFrekvImpedancija( CFrekvImpedancija& I ){
SetRe(I.GetRe());
SetIm(I.GetIm());
//SetFrek(I.GetFrekv());
}

CFrekvImpedancija::CFrekvImpedancija(){m_f=0;}
bool CFrekvImpedancija::IsCapacitive(){
if(GetIm()<0){
        cout<<"Kapacitivnost postoji. ";
    return true;
}

else{ cout<<"Kapacitivnost ne postoji. ";
return false;}
}

bool CFrekvImpedancija::IsInductive(){
if(GetIm()>=0){
        cout<<"Impedancija postoji. ";
    return true;
}
else{
    cout<<"Impedancija ne postoji. ";
    return false;
}
}

double CFrekvImpedancija::GetKapacitet(){
double c;
double w=2*3.14*m_f;
c=-1/(m_I*w);
if(c==0){return 0;}
else{return c;}
}

double CFrekvImpedancija::GetInduktivitet(){
double L;
double w=2*3.14*m_f;
L=m_I/w;
if(L==0){return 0;}
else{return L;}
}



int main(){

    CImpedancija a;
    a.SetRe(5);
    a.SetIm(9);
    cout<<a<<endl;;

     CImpedancija b;
    b.SetRe(45);
    b.SetIm(-21);
    cout<<b<<endl;

    CFrekvImpedancija c, d;


    c.SetRe(44);
    c.SetIm(11);
    c.SetFrekv(214.478);
    cout<<c<<endl;;

    d.SetRe(22);
    d.SetIm(-27);
    d.SetFrekv(-145.22);
    cout<<d<<endl;

    cout<<"GetKap c: "<<c.GetKapacitet()<<endl;
    cout<<"GetInd c: "<<c.GetInduktivitet()<<endl;

    cout<<"ISKap c: "<<c.IsCapacitive()<<endl;
    cout<<"ISInd c: "<<c.IsInductive()<<endl<<endl<<endl;


    CFrekvImpedancija e(c);
    e.SetFrekv(214.478); // Zašto ne mogu frekvenicuju staviti u kopirni?
    cout<<"Aktiviran je kopirni konstruktor e(c)."<<endl;

    cout<<"GetKap e: "<<e.GetKapacitet()<<endl;
    cout<<"GetInd e: "<<e.GetInduktivitet()<<endl;

    cout<<"ISKap e: "<<e.IsCapacitive()<<endl;
    cout<<"ISInd e: "<<e.IsInductive()<<endl<<endl<<endl;

    cout<<"GetKap d: "<<d.GetKapacitet()<<endl;
    cout<<"GetInd d: "<<d.GetInduktivitet()<<endl;

    cout<<"ISKap d: "<<d.IsCapacitive()<<endl;
    cout<<"ISInd d: "<<d.IsInductive()<<endl<<endl<<endl;

    cout<<"Aktiviran je operator =, e=d."<<endl;

    e=d;

    cout<<"GetKap e: "<<e.GetKapacitet()<<endl;
    cout<<"GetInd e: "<<e.GetInduktivitet()<<endl;

    cout<<"ISKap e: "<<e.IsCapacitive()<<endl;
    cout<<"ISInd e: "<<e.IsInductive()<<endl<<endl<<endl;


        list<CFrekvImpedancija> L;
        ifstream dat;

        dat.open("Imped.txt");
        list<CFrekvImpedancija>::iterator it;
            CFrekvImpedancija o;

        while(!dat.eof()){

           //getline(dat,s);
            dat>>o.SetFrekv();
           dat>>o.SetRe();
           dat>>o.SetIm();

           //U listu trebam ubaciti objekte, svaki objekt se sastoji od Real, Imag i Frek.
          L.push_back(o);
        }

        cout<<L.size()<<endl;

    return 0;}
