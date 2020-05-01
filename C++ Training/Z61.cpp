/* 61) Zadana je klasa Tocka:
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
ostream& operator<< (ostream& out, const Tocka& t);*/

#include<iostream>
#include <windows.h> /// POGLEDAJ OVU BIBILOTEKU!
using namespace std;

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
///Kod operatora, raditi sa if() pa nešto, ili kao u 57., bez if()?

int main(){

return 0;
}
