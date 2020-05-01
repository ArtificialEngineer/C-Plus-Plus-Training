/* 55) Deklarirana je klasa Point2D kojom se opisuje položaj toèke u 2D prostoru (x,y):
class Point2D {
public:
Point2D();
void SetX(double x);
void SetY(double y);
double GetX();
double GetY();
protected:
double m_x, m_y;
};
Koristeæi ovu deklaraciju:
a) napišite konstruktor, kojim se ujedno inicijalizira položaj toèke u x=0 i y=0
b) Definiraj funkcije Set() i Get()
c) Definiraj kopirni konstruktor klase Point2D
=============================================================================================================
56) Koristeæi klasu Point2D i pravila nasljeđivanja definirajte klasu Point3D,
 pomoæu koje se opisuje položaj tocke u trodimenzionalnom prostoru (x,y,z).
Definirajte:
a) potrebne varijable (osim onih koje se nasljeđuju)
b) potrebne public metode kojima se mijenja i očitava položaj točke.  //Funkcije?
c) člansku funkciju Distance(), koja vraća udaljenost točke od ishodišta.
d) kopirni konstruktor klase Point3D

61) Zadana je klasa Tocka:
class Tocka {
protected:
int m_x;
int m_y;
public:
Tocka();
int GetX() const {return m_x;}
int GetY() const {return m_y;}
void SetX(int x) {m_x = x;}
void SetY(int x) {m_y = y;)
};
a) Definirajte operator==
bool operator== (const Tocka& a, const Tocka& b);
b) Definirajte operator<<
ostream& operator<< (ostream& out, const Tocka& t);
===============================================================
 Deklarirana je klasa PozicioniraniString:
class PozicioniraniString {
public:
PozicioniraniString() : m_tekst(""),m_x(1),m_y(1) {}
void SetTekst(string&);
string& GetTekst();
void SetX(int);
int GetX();
void SetY(int);
int GetY();
private:
int m_x, m_y;
string m_tekst;
};

Zadatak 81 je ukljucen. Operator >>.
*/



#include <iostream>
using namespace std;
#include <stdlib.h>
#include <math.h>

class Point2D {
public:
Point2D();
void SetX(double x);
void SetY(double y);
double GetX();
double GetY();
Point2D( const Point2D& temp );
friend bool operator==(const Point2D& a, const Point2D& b);
friend ostream& operator<< (ostream& out, const Point2D& t);
friend istream& operator>> (istream& in, Point2D& t1);

protected: //Čemu služi protected? Razlika u odnosu na private?
double m_x, m_y;

};

Point2D::Point2D() {
m_x = 0;
m_y = 0;}

void Point2D::SetX( double x ) {
m_x = x;
}
void Point2D::SetY( double y ) {
m_y = y;
}
double Point2D::GetX() {
return m_x;
}
double Point2D::GetY() {
return m_y;
}

//Moram li imati po dvije set i dvije get?

Point2D::Point2D( const Point2D& temp ) {
m_x = temp.m_x;
m_y = temp.m_y;
}


class Point3D: public Point2D {  //Public znači da je sve ono što je javno u klasi 2d, javno i u klasi 3D;
public:
friend bool operator==(const Point3D& a, const Point3D& b);
friend ostream& operator<< (ostream& out, const Point3D& t);
friend istream& operator>> (istream& in,  Point3D& t1);
Point3D() { m_z = 0; } //Konstruktor

void SetZ(double z);
double GetZ();

double Distance();

Point3D( const Point3D& temp ) :Point2D(temp)  {  // Zašto nasljeđivanje moram naglašavati na kopirnom konstruktoru?

 /*m_x=temp.m_x;   Ovo pišemo ukoliko nema :Point2D(temp)
 m_y=temp.m_y; */                              //Zar to nije već učinjeno nasljeđivanjem klasa?
m_z = temp.m_z;                                //  KONSTRUKTORI SE NE NASLJEĐUJU!

//Bez :Point2D(temp) funkcija Distance() radi, kopirni konstruktor za 3D radi ali neispravno.

}




 double m_z;
};

// konstruktori se nasljeđuju i dopunjuju


double Point3D::Distance() {
return sqrt( m_x*m_x + m_y*m_y + m_z+m_z );
}

double Point3D::GetZ() {
return m_z;}

void Point3D::SetZ(double z) { m_z = z; }


bool operator==(const Point2D& a, const Point2D& b){

if(a.m_x==b.m_x && a.m_y==b.m_y){


    return true;
}

else{ return false;}

}

bool operator==(const Point3D& a, const Point3D& b){
if(a.m_x==b.m_x && a.m_y==b.m_y && a.m_z==b.m_z){


    return true;
}

else{ return false;}


}

ostream& operator<< (ostream& out, const Point2D& t){


cout<<"Pozvan je operator << klase Point2D "<<endl;
out<<"x je : "<<t.m_x<<", y je : "<<t.m_y<<endl;

}

ostream& operator<< (ostream& out, const Point3D& t){


cout<<"Pozvan je operator << klase Point3D "<<endl;
out<<"x je: "<<t.m_x<<", y je : "<<t.m_y<<", z je :"<<t.m_z<<endl;

}


class PozicioniraniString : Point2D {
public:
PozicioniraniString() : m_tekst(""),m_x(1),m_y(1) {}
void SetTekst(string& t);
string& GetTekst();
//void SetX(int);  Nasljeđeno
//int GetX();      Nasljeđeno
//void SetY(int);  Nasljeđeno
//int GetY();      Nasljeđeno
private:
int m_x, m_y;
string m_tekst; };

void PozicioniraniString::SetTekst(string& t){

m_tekst=t;
}

string& PozicioniraniString::GetTekst(){
return m_tekst;
}

istream& operator>>(istream& in,  Point2D& t1){

double a;
double b;
in>>a;
in>>b;
t1.SetX(a);
t1.SetY(b);

return in;

}

istream& operator>> (istream& in,  Point3D& t1){

double a;
double b;
double c;
in>>a;
in>>b;
in>>c;
t1.SetX(a);
t1.SetY(b);
t1.SetZ(c);

return in;
}




int main() {
Point2D o1;
cout<<"Postavi x i y za objekt Point2D o1: "<<endl;
double xm;
cin>>xm;
double ym;
cin>>ym;
o1.SetX(xm);
o1.SetY(ym);

cout<<endl<<endl;
cout<<"Ispis upisanih vrijednosti nakon upotrebe kopirnog konstruktora."<<endl;
Point2D o2(o1);
cout<<o2.GetX()<<" i "<<o2.GetY()<<endl;

cout<<"Kreiranje objekta Point3D"<<endl;
Point3D o3;
cout<<" Postavi x, y, i z za objekt Point3D o3 : "<<endl;

cin>>xm;

cin>>ym;
double zm;
cin>>zm;
o3.SetX(xm);
o3.SetY(ym);
o3.SetZ(zm);
cout<<endl<<endl;

cout<<"Ispis upisanih vrijednosti nakon upotrebe kopirnog konstruktora klase Point3D."<<endl;
Point3D o4(o3);
cout<<o4.GetX()<<" , "<<o4.GetY()<<" i "<<o4.GetZ()<<endl;
cout<<"Poziv funkcije Distance()"<<endl;
cout<<o4.Distance()<<endl;

cout<<"Poziv funkcije == za Point2D:"<<endl;
if(o1==o2){
    cout<<"Objekti o1 i o2 su jednaki"<<endl<<endl;

}
else{ cout<<"Objekti o1 i o2 nisu jednaki"<<endl;}

cout<<"Poziv funkcije == za Point3D:"<<endl<<endl;
if(o1==o2){
    cout<<"Objekti o3 i o4 su jednaki"<<endl<<endl;

}
else{ cout<<"Objekti o3 i o4 nisu jednaki"<<endl<<endl;}

cout<<"Poziv funkcije << za Point2D: "<<endl;
cout<<o1<<endl;
cout<<"Poziv funkcije << za Point3D: "<<endl;
cout<<o3<<endl<<endl<<endl;


cout<<"Pozvan je preoptereceni operator >> za Point2D."<<endl;
cout<<"Postavi vrijednosti x i y objekta o5. "<<endl;
Point2D o5;
cin>>o5;

cout<<endl<<endl;

cout<<"Pozvan je preoptereceni operator >> za Point3D."<<endl;
cout<<"Postavi vrijednosti x , y i z, objekta o6. "<<endl;
Point3D o6;
cin>>o6;


cout<<"Ispis objekta o5: <<"<<endl;
cout<<o5<<endl<<endl;

cout<<"Ispis objekta o6: <<"<<endl;
cout<<o6<<endl<<endl;
return 0;
}
