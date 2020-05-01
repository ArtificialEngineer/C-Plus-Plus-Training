/* 59) Deklarirana je klasa HorLine kojom se bilježi obojana horizontalna linija:
class HorLine {
public:
HorLine() : m_HorLine (0), m_color (0){}
void SetHorLine (double d);
double GetHorLine();
void SetColor (COLORREF c);
COLORREF GetColor();
HorLine& operator++(); // prefiks
HorLine operator++(int unused); // postfiks
HorLine& operator=(const HorLine& d);

protected:
double m_HorLine; // duljina linije
COLORREF m_color; // boja linije
};
Koristeći ovu deklaraciju:
a) Napišite implementaciju za prefiks i postfiks operator++ za klasu HorLine (uvećava duljinu linije za 1.0).
b) Napišite implementaciju za operator =
=============================================================================================================================0
60) Napravite slijedeće:
a) Za klasu HorLine iz prethodnog zadatka napišite funkcije SetColor i GetColor,
 te SetHorLine i GetHorLine
b) Napišite klasu PosHorLine, koja predstavlja pozicioniranu horizontalnu liniju.
Za definiciju kase koristite nasljeđivanje od klase HorLine.
Klasa PosHorLine neka ima definiranu poziciju i to kao dvije privatne varijable m_x i m_y, tipa double
c) Nadopunite konstruktor naslijeđene klase tako da postavlja obje koordinate na nulu.*/

#include<iostream>
#include <windows.h> /// POGLEDAJ OVU BIBILOTEKU!
using namespace std;

class HorLine {
public:
HorLine() : m_HorLine (0), m_color (0){}
void SetHorLine (double d);
double GetHorLine();
void SetColor (COLORREF c);
COLORREF GetColor(); /// COLORREF je nekakva klasa, povratni tip ove funkcije treba biti COLORREF.
HorLine& operator++(); // prefiks
HorLine operator++(int unused); // postfiks
HorLine& operator=(const HorLine& d);

protected:
double m_HorLine; // duljina linije
COLORREF m_color; // boja linije
};

HorLine& HorLine::operator=(const HorLine& obj) {
m_HorLine = obj.m_HorLine;
m_color = obj.m_color;
return *this;
}
HorLine& HorLine::operator++() // prefiks operator
{
++m_HorLine; // inkrementiraj brojač
return *this; // vrati njegovu referencu
}
// postfiks operator; int unused služi kompajleru da raspozna da je
// ovo postfix, a ne prefix operator
HorLine HorLine::operator++(int unused) {
// služi da privremeno spremimo objekt, tako da nakon inkrementa
// vratimo staro stanje a ne novo sa inkrementiranim brojačem
HorLine temp(*this);  ///this je pokazivač, *this je "vrijednost". Pa je ovo ekvivalentno: HorLine temp=*this.
// inkrementiraj brojač
++m_HorLine;
return temp;
}


void HorLine::SetColor(COLORREF c){

m_color=c;
}

COLORREF HorLine::GetColor(){
return m_color;
}

void HorLine::SetHorLine(double d){
m_HorLine=d;

}


class PosHorline:public HorLine{


private:
    double m_x, m_y;
public:
    PosHorLine() { m_x = 0.0; m_y = 0.0; }


};

double HorLine::GetHorLine(){
return m_HorLine;}

int main(){
HorLine a;
a.SetColor(255);
a.SetHorLine(100);
cout<<a.GetColor()<<endl;
cout<<a.GetHorLine()<<endl;



return 0;
}
