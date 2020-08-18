/* 84) Standardna klasa vector<T> služi kao spremnik za objekte tipa T.
a) Napišite funkciju slijedećeg prototipa:
template <class T> int PronadjiElement(const vector<T> V, T x)
kojom se u spremniku V traži element x. Funkcija neka vraća indeks na kojem je pronađen element x, ili -1 ako nije pronađen.
b) Napišite funkciju slijedećeg prototipa:
template <class T> vector<T> SortirajVektor (const vector<T> V)
koja vraća sortirani vektor od vektora V, koji je argument funkcije.*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;


template <class T> int PronadjiElement(const vector<T> v, T x){

    string s;

for(int i=0; i<v.size(); i++){
      s=v[i];
    if(s==x){

        return i;
        break;}
    }
  return -1;
}

template <class T> vector<T> SortirajVektor (const vector<T> v){

string k;
string m;
string h;                              //  0   1    2   3   4
for(int i=0; i<v.size();i+){          // Ajmo se kupati u mooru
    k=v[i]; //k==Ajmo                 //   4   2    6   1   5
    for{int j=i+1; j<v.size(); j++}{
        m=v[j]; //se
        if(k.length()<m.length()){ // (0 1): 4<2 - ne vrijedi ;(0 2): 4<6 - vrijedi
            h=v[j+1]; //Sačuvao sam npr. "u"
            v[j+1]=k;    //  Ajmo se kupati Ajmo mooru
            v[i]="";     //   "" se kupati Ajmo mooru
        }

        else


    }





}



}


int main(){

vector<string> vm;
string xm=("u");

vm.push_back("Ajmo");
vm.push_back("se");
vm.push_back("kupati");
vm.push_back("u");
vm.push_back("mooru");

cout<<"Ukoliko element nije pronadjen, ispisat ce se -1"<<endl;
cout<<"U suprotnom, ispisat ce se indeks na kojem se element nalazi"<<endl;
cout<<PronadjiElement(vm,xm);


//Sortirati vektor znači poredati ga po nekom redu. Ovdje ćemo po duljini stringa.

SortirajVektor(vm);


return 0;}

