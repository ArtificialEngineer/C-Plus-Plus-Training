/*42) Zadana je klasa Student:
class Student {
public:
string m_broj; // maticni broj
string m_ime; // ime
string m_prezime; // prezime
Student() { }
Student(string& mb, string& ime, string& pr)
: m_broj(mb), m_ime(ime), m_prezime(pr), { }
};
Napišite implementaciju slijedećih operatora:
ostream& operator << (ostream &out, const Student& s)
{...}
Student& operator = (const Student& d)
{...} */


#include <iostream>
#include <sstream>
#include <string>
using namespace std;


class Student {
public:
string m_broj; // maticni broj
string m_ime; // ime
string m_prezime; // prezime
Student() { }
Student(string& mb, string& ime, string& pr) ;

};
Student::Student(string& mb, string& ime, string& pr){

 m_broj=mb; m_ime=ime; m_prezime=pr;
}

ostream& operator << (ostream &out, const Student& s){

out<<s.m_broj<<" "<<s.m_ime<<" "<<s.m_prezime;
return out;


}

int main() {

    string br, im, pr;
    cout<<"Upisite tri stringa, broj, ime i prezime."<<endl;
    cin>>br;
    cin>>im;
    cin>>pr;
    Student o1(br, im, pr);

    cout<<"Ispis o1 pomocu operatora <<: "<<endl;
    cout<<o1<<endl;

    Student o2;
    cout<<"Operator =, o2=o1"<<endl;
    o2=o1;
    cout<<"Ispis o2 pomocu operatora <<: "<<endl;
    cout<<o2<<endl;




}
