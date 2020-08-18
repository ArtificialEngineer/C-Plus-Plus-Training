/* 85) Napišite generičku funkciju:
typedef list<double> LIST;
void Pomnozi_elemente_liste( LIST& L, double mulitplikator )
kojom se svi elementi liste L množe s vrijednošću parametra multiplikator.*/

#include <iostream>
#include <string>
#include <list>

using namespace std;

typedef list<double> LIST;
void Pomnozi_elemente_liste( LIST& L, double multiplikator ){
  //Zašto ne može it<l.end()?
    LIST::iterator it;

    for(it=L.begin(); it!=L.end();it++){

        *it=*it*multiplikator;
        cout<<*it<<endl;

    }


}








int main(){

list <double> a;
a.push_back(2);
a.push_back(3);
a.push_back(33);
a.push_back(-4);
a.push_back(-11);

int b=3;

Pomnozi_elemente_liste(a,b);


return 0;}

