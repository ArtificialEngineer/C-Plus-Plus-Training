#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Pravokutnik {
public:
Pravokutnik ();
Pravokutnik& operator= (const Pravokutnik& p);
int GetSirina();
int GetVisina();
public:
int x1, y1, x2, y2;
};
Pravokutnik::Pravokutnik() {
x1 = y1 = 0;
x2 = y2 = 1;
}
Pravokutnik& Pravokutnik::operator= (const Pravokutnik& p) {
x1 = p.x1;
y1 = p.y1;
x2 = p.x2;
y2 = p.y2;
return *this; // vraæamo *this zbog nadovezivanja
}


int Pravokutnik::GetSirina() { int s=x2 - x1; return s; }
int Pravokutnik::GetVisina() { int w=y2 - y1; return w; }

ostream& operator<< (ostream& s, const Pravokutnik& c1){

s<<"x1= "<<c1.x1<<" x2= "<<c1.x2<<endl;
s<<"y1= "<<c1.y1<<" y2= "<<c1.y2<<endl;

int w,h;
//w=c1.GetSirina();
//h=c1.GetVisina();
s<<"Sirina je: "<<c1.x2-c1.x1<<endl;
s<<"Visina je: "<<c1.y2-c1.y1<<endl;

//s<<"Sirina je: "<<w<<endl;
//s<<"Visina je: "<<h<<endl
return s;


}
int main() {

    Pravokutnik a, b, c, d;
    a.x1=2;
    a.x2=7;
    a.y1=6;
    a.y2=9;
   // cout<<a;
     b.x1=2;
    b.x2=7;
    b.y1=6;
    b.y2=9;

     c.x1=2;
    c.x2=7;
    c.y1=6;
    c.y2=9;

     d.x1=2;
    d.x2=7;
    d.y1=6;
    d.y2=9;






 Pravokutnik Pr[4]={a,b,c,d};

    ofstream dat;
    dat.open("pr.bin", ios::binary);

   // for(int i=0; i<4; i++){

        dat.write((char*) Pr, sizeof(Pravokutnik)*4);


return 0;

}
