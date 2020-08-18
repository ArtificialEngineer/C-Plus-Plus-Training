#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/*
79) Deklarirane su klase Tocka i Krug:
class Tocka
{
int m_x, m_y;
public:
Tocka() { m_x= 0; m_y=0;};
void SetX(int);
int GetX();
void SetY(int);
int GetY();
};
class Krug
{
int m_radius, m_x, m_y;
public:
Krug ();
void SetRadius(int);
int GetRadius();
void SetX(int);
int GetX();
void SetY(int);
int GetY();
};

Definirajte klasu Krug1 koristeæi mehanizam nasljeðivanja od klase Tocka, ali tako da na ima istu funkcionalnost kao klasa Krug.
class Krug1 : public Tocka {
public:
// odredite potrebne javne èlanove
private:
// odredite privatne èlanove
};
80) Deklarirane su klase Pravokutnik i Tocka:
class Pravokutnik {
public:
Pravokutnik ();
void SetSirina(int);
int GetSirina();
void SetVisina(int);
int GetVisina();
int Povrsina();
void SetX(int x) {m_x = x;};
void SetY(int y) {m_y = y;};
int GetX() {return m_x; };
int GetY() {return m_y; };
private:
int m_sirina;
int m_visina;
int m_x, m_y;
};
class Tocka {
public:
Tocka (int x = 0, int y = 0): m_x(x), m_y(y) {};
void SetX(int x) { m_x = x; };
void SetY(int y) { m_y = y; };

int GetX() { return m_x; };
int GetY() { return m_y; };
protected:
int m_x, m_y;
};
a) Napišite klasu Pravokutnik tako da ona za opisivanje položaja pravokutnika koristi klasu Tocka (Promišljaj: Pravokutnik "has a" Tocka).
b) Napišite klasu Pravokutnik tako da ona za opisivanje položaja pravokutnika nasljeðuje klasu Tocka (Promišljaj: Pravokutnik "is a" Tocka).
 */


class PravokutnikHasATocka{
public:
PravokutnikHasATocka ();

void SetSirina(int sirina) {m_sirina = sirina;};
void SetVisina(int visina) {m_visina = visina;};
int GetSirina() {return m_sirina;};
int GetVisina() {return m_visina;};
int Povrsina();
void SetX(int x) {m_p.SetX(x);};
void SetY(int y) {m_p.SetY(y);};
int GetX() {return m_p.GetX(); };
int GetY() {return m_p.GetY(); };
private:
int m_sirina;
int m_visina;
Tocka m_p;
};
PravokutnikHasATocka::PravokutnikHasATocka() {
m_sirina = 1;
m_visina = 1;
m_p.SetX(0);
m_p.SetY(0);
}



class PravokutnikIsATocka : public Tocka {
public:
PravokutnikIsATocka();
void SetSirina(int sirina) {m_sirina = sirina;};
void SetVisina(int visina) {m_visina = visina;};
int GetSirina() {return m_sirina;};
int GetVisina() {return m_visina;};
int Povrsina();
void SetX(int x) {m_x = x;};
void SetY(int y) {m_y = y;};
int GetX() {return m_x; };
int GetY() {return m_y; };
private:
int m_sirina;
int m_visina;
};



int main(){



   return 0;
}
