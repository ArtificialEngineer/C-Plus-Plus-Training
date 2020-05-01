/* 34) Napišite tri verzije funkcije ToString:
string ToString(int x);
string ToString(double x);
string ToString(bool b);
Funkcija vraća string koji predstavlja literarni zapis cjelobrojne vrijednosti,
realne vrijednosti i logičke vrijednosti.*/


#include <iostream>
#include <stdlib.h>
#include<string>     /* atof */

using namespace std;
string ToString(int x){
string s1;
s1=itoa(&x);
return s1;

}

string ToString(double x){
    string s2;
s2=ftoa(x);
return s2;

}
string ToString(bool b){

}

// '122'
int main(){
    int a=9;
    double b=22;
    bool c=true;

    cout<<ToString(a)<<endl;
    cout<<ToString(b)<<endl;
    //cout<<ToString(c)<<endl;


}


