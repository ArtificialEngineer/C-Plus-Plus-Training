/* 74) Deklarirana je klasa PointR kojom se bilježi položaj točke u cilindričnom koordinatnom sustavu (pomoću udaljenosti od ishodišta m_r i kuta m_fi – u radijanima):


U tekstualnoj datoteci imena „tocke.txt“ su upisane koordinate točaka u Kartezijevom
koordinatnom sustavu – u svakom retku koordinata x i koordinata y razdvojene znakom
razmaka. Napišite program kojim se iz te datoteke učitavaju koordinate u objekt tipa PointR i
na ekranu se ispisuje za svaku točku udaljenost od ishodišta i kut u stupnjevima.
*/

#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
using namespace std;

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
PointR o;
    ifstream d;
    d.open("tocke.txt");
    while(!d.eof()){

       d>>x>>y;
       cout<<"Ucitane vrijednosti x i y: "<<x<<" "<<y<<endl;
       o.SetXYPosition(x,y);
      cout<<"Vrijednosti kuta i polumjera: "<<o.GetAngle()<<" "<<o.GetRadius()<<endl<<endl;

    }
    d.close();
return 0;
}

