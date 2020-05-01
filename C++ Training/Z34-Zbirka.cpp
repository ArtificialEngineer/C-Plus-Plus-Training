/* 34) Napišite tri verzije funkcije ToString:
string ToString(int x);
string ToString(double x);
string ToString(bool b);
Funkcija vraća string koji predstavlja literarni zapis cjelobrojne vrijednosti,
realne vrijednosti i logičke vrijednosti.*/


#include <iostream>
#include <stdlib.h>
#include<string>     /* atof */
#include<sstream>

using namespace std;
string ToStringa(int x) {
ostringstream ostr; //pretvara broj u string
ostr << x;
string str0 = ostr.str();
return str0;
}
string ToStringb(double x) {
ostringstream ostr; //pretvara broj u string
ostr << x;
string str0 = ostr.str();
return str0;
}
string ToStringc(bool b) {ostringstream ostr; //pretvara bool u string
ostr << b;
string str0 = ostr.str();
return str0;
}

// '122'
int main(){
    int a=9;
    double b=22.5678;
    bool c=true;

    cout<<ToStringa(a)<<endl;
    cout<<ToStringb(b)<<endl;
    cout<<ToStringc(c)<<endl;


}


