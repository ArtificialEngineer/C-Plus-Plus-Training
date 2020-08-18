/*93) Napisati definicije funkcije koja vraća listu elemenata tipa int.
Kao argument funkcija prima jednu varijablu tipa string
i zatim svaki znak stringa kopira u listu na način da u
listu kopira njihove ASCII vrijednosti. Deklaracija funkcije je:
list<int> KopirajStringLista(string var);
*/
#include <iostream>
#include <string>
#include <list>
using namespace std;


list<int> KopirajStringLista(string var){

        list <int> l;
        list <int>::iterator it;
        char c;

        for(int i=0; i<var.length(); i++){
            c=var[i];
            l.push_back(c);

        }

        for(it=l.begin(); it!=l.end();it++){
         c=*it;
            cout<<*it<<" "<<c<<endl; //Zasto *it ispisuje broj a c znak?
                                    // Zato jer je *it tipa int, a c tipa char?


        }
      return l;
}

int main(){

    cout<<k<<endl;
    string a;
    cout<<"Upisi string: "<<endl;
    cin>>a;
    KopirajStringLista(a);


return 0;}



