#include<iostream>
#include<cmath>
using namespace std;
class PointR {
public:
PointR();
/*~PointR();*/
void SetXYPosition(float x, float y);
void GetXYPosition(float& x, float& y);
float GetAngle() const { return m_fi; }
float GetRadius() const { return m_r; }
PointR(const PointR& temp); //kopirni konstruktor
private:
float m_r;
float m_fi;
};
PointR::PointR(const PointR& temp) { //kopirni konstruktor
m_r = temp.m_r;
m_fi = temp.m_fi;
}
PointR::PointR() { //konstruktor
m_r = 0.0; m_fi = 0.0;
}
void PointR::GetXYPosition(float& x, float& y) {
x = m_r*cos(m_fi);
y = m_r*sin(m_fi);
}
void PointR::SetXYPosition(float x, float y) {
m_r = sqrt( x*x + y*y);
m_fi = atan( y/x );
}
int main() {
float x, y; //ovo je radijus i kut u radijanima
PointR t;

cout << "udaljenost od ishodista: ";
cin >> x;
cout << "radijus je: ";
cin >> y;
t.SetXYPosition(x, y);
float x1, y1; //ovo su tocke kartezijevog koordinatnog sustava
t.GetXYPosition(x1, y1);//Funkcija ima pristup adresi od varijabli, pa na njihovo mjesto upisuje druge vrijednosti.
cout << x1 << ", " << y1 << endl; //Koja je svrha programa?
return 0;
}
