


#include <iostream>
#include<string>     /* atof */

#include <iostream>

using namespace std;

class nadoveza
{
public:
  nadoveza& print1 ()
  {
    cout << "Funkcija 1" << '\n';
    return *this;
  }
  nadoveza& print2 ()
  {
    cout << "Funkcija 2" << '\n';
    return *this;

  }



  nadoveza& print3 ()
  {
    cout << "Funkcija 3" << '\n'; //v ispisuje ime funkcije?
    cout<<"Adresa na koju pokazuje pokazivac this: "<<&*this<<endl;
//   cout<<"Vrijednost sa pokazivaca this, *this: "<<*this<<endl;  // Zašto ne funkcionira? Tj. zašto treba preopteretiti operator?
    return *this;  // this daje adresu, a *this daje vrijednost sa adrese.

  }


  string print4 ()
  {
    string a="String 4"<<endl;
    return a;

  }
  string print5 ()
  {
    string b="String 5"<<endl;
    return b;

  }
};

int main ()
{
  nadoveza o1;
 o1.print1().print3().print2(); // Sa točkom se nadovezujemo na funkcije iz klase.
 //Zašto nam treba *this za nadovezivanje? Možemo li se nadovezivati s bilo kojim povratnim tipom?

 o1.print4().print5;

  return 0;
}

