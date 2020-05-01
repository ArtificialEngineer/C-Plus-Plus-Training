/* 54) Deklarirana je klasa SimpleCircle:
class SimpleCircle {
public:
SimpleCircle();
void SetRadius(int);
int GetRadius();
private:
int m_radius;
};
Koristeæi ovu deklaraciju:
a) napišite konstruktor, kojim se ujedno inicijalizira èlan m_radius na vrijednost 5
b) Definiraj operator= za klasu SimpleCircle
c) Definiraj kopirni konstruktor klase SimpleCircle
d) Definiraj funkcije SetRadius i GetRadius kojima se postavlja i dobavlja vrijednost
*/

#include <iostream>
using namespace std;
#include <stdlib.h>
class SimpleCircle {
public:
SimpleCircle();
void SetRadius(int);
int GetRadius();
private:
int m_radius;
SimpleCircle & operator=(const SimpleCircle& temp);
SimpleCircle(const SimpleCircle& temp);
};

SimpleCircle::SimpleCircle() {
m_radius = 5;
}

SimpleCircle::SimpleCircle(const SimpleCircle& temp) {
m_radius = temp.m_radius;
}

SimpleCircle& SimpleCircle::operator=(const SimpleCircle& temp) {
m_radius = temp.m_radius;
return *this; // radi nadovezivanja
}

void SimpleCircle::SetRadius(int temp) {
m_radius = temp;
}

int SimpleCircle::GetRadius() {
return m_radius;
}
int main(){
SimpleCircle ob;
ob.SetRadius(11);
cout<<ob.GetRadius()<<endl;

return 0;
}
