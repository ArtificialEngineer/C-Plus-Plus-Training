#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/*
77) Deklarirana je klasa Circle, kojom se bilježi radijus kružnice:

class Circle {
public:
Circle() : m_radius(0) {}
void SetRadius(int r) {m_radius = r;};
int GetRadius() {return m_radius;};
protected:
int m_radius;
};
Napišite klasu ColoredCircle koja pored radijusa kružnice sadrži
podatak o boji kružnice m_color tipa int.
U definiranju klase ColoredCircle obvezno koristite mehanizam nasljeðivanja,
tako da klasa ColoredCircle nasljeðuje klasu Circle.
Za klasu ColoredCircle definirajte operator =. */


class ColoredCircle:public Circle{

public:
    ColoredCircle();
    int m_color;
    ColoredCircle operator=(const ColoredCircle& ob);
};

   ColoredCircle::ColoredCircle(){
   m_color=0;
   m_radius=0;
   }


 ColoredCircle  ColoredCircle::operator=(ColoredCircle& ob){

      m_color=ob.m_color;
      m_radius=ob.m_radius;
      return *this;

   }
int main(){

    ifstream in;
    ofstream out;


    in.open("novain.txt");
    out.open("novaout.txt");
    char c;
    int ascii;

    while(in.get(c)){

       //in.get(c);

       if(  (c>='a' && c<='z') || ((c>='A' && c<='Z'))     ) {
        ascii=c;
        out<<ascii<<" ";


       }

        else{

            out<<c<<" ";

        }
    }

   return 0;
}
