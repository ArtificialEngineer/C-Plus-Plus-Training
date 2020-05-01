#include <iostream>
using namespace std;

class Prekidac {
//bool m_iskljucen;
public:
    bool m_iskljucen;
Prekidac();
void Ukljuci();
void Iskljuci();
bool Ukljucen();
Prekidac& operator=(const Prekidac& t);
//friend operator<<(ostream &out; const Prekidac &s);


};

Prekidac::Prekidac() {
m_iskljucen = true;
}
void Prekidac::Ukljuci() {
m_iskljucen = false;
}
void Prekidac::Iskljuci() {
m_iskljucen = true;
}

bool Prekidac::Ukljucen() {
//return !m_iskljucen;
if(m_iskljucen==true){
    return true;
}

 else{
    return false;
}
}


/*Prekidac::Prekidac(const Prekidac& temp) {
m_iskljucen = temp.m_iskljucen;
}
// ovo je relacijksi operator, a ne operator pridjele vrijednosti!
/*bool operator== (const Prekidac& temp, const Prekidac& temp1) {
if( temp.m_iskljucen == temp1.m_iskljucen) {
return true;
} else {
return false;
}
}*/


// dodati kao friend funkciju u deklaraciju klase!
/* friend ostream& operator << (ostream& out, const Prekidac& s) {
if( !s.m_iskljucen ) {
out << "ukljucen";
} else {
out << "iskljucen";
}
return out;
}*/


// alternativno riješenje - kao èlanska funkcija klase
ostream& operator << (ostream &out, const Prekidac& s) {
if( !s.m_iskljucen ) {
out << "ukljucen";
} else {
out << "iskljucen";
}
return out;
}

Prekidac& Prekidac::operator=(const Prekidac& t) {
m_iskljucen = t.m_iskljucen;
return *this;}

int main() {

    Prekidac a;
    a.Ukljuci();
    cout<<a.Ukljucen()<<endl;

    Prekidac b;
    b=a;
    cout<<b;





return 0;

}
