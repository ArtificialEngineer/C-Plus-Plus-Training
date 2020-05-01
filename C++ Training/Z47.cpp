/* 47)
class CUcenik {
string m_ime; // ime i prezime
int m_ocjena; // ocjena

public:
CUcenik();
int GetOcjena();
string GetIme();
void SetOcjena(int ocjena);
void SetIme(string ime);
};
Napišite:
- konstruktor, koji ime postavlja na prazan string, a ocjenu na 0
- implementaciju operatora >> koji sa toka in čita najprije string m_ime, a potom cijeli broj m_ocjena:
istream& operator >> (istream& in, CUcenik& u)
{...}*/


#include <iostream>
#include <sstream>
#include <string>
using namespace std;


class CUcenik {
string m_ime; // ime i prezime
int m_ocjena; // ocjena
public:
CUcenik();
int GetOcjena();
string GetIme();
void SetOcjena(int ocjena);
void SetIme(string ime);
};

CUcenik::CUcenik(){
    m_ime="";
    m_ocjena=0;
}

istream& operator >> (istream& in, CUcenik& u){

string ime;
int ocj;
cout<<"Pozvan je operator >>, upisite ime i ocjenu."<<endl;
cin>>ime;
cin>>ocj;

u.SetIme(ime);
u.SetOcjena(ocj);




}

void CUcenik::SetIme(string ime){
m_ime=ime;

}

void CUcenik::SetOcjena(int ocjena){
m_ocjena=ocjena;

}

string CUcenik::GetIme(){
return m_ime;

}

int CUcenik::GetOcjena(){

return m_ocjena;
}


int main() {

    string im;
    int oc;

    cout<<"Poziva se operator >>."<<endl;
    /*cin>>im;
    cin>>oc;*/
    CUcenik o1;
    cin>>o1;

    cout<<"Ispis upisanog:"<<endl;
    cout<<o1.GetIme()<<endl;
     cout<<o1.GetOcjena()<<endl;












}
