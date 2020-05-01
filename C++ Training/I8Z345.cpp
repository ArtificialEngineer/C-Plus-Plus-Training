#include <iostream>
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



class CKolokvij{
public:
    int m_ocjena[3];

};

class CStudent:public CUcenik, CKolokvij{

CKolokvij m_kolokvij;

public:
    CStudent();
    void SetOcjenaKolokvija(int brojKolokvija, int ocjena);
    int GetOcjenaKolokvija(int brojKolokvija);

};


// konstruktor
CUcenik::CUcenik() {
m_ime = "";
m_ocjena = 0;
}

void CUcenik::SetIme(string ime){
    m_ime=ime;

}

void CUcenik::SetOcjena(int ocjena){
    m_ocjena=ocjena;

}

int CUcenik::GetOcjena(){
return m_ocjena;}


string CUcenik::GetIme(){

return m_ime;}



// definiranje operatora za upis ocjene i imena u jednom redu
istream& operator >> (istream &in, CUcenik &u) {
string ime;
int ocjena;
/*if (in >> ime >> ocjena) {
u.SetIme(ime);
u.SetOcjena(ocjena);
}
return in; */
in>>ime;
in>>ocjena;
u.SetIme(ime);
u.SetOcjena(ocjena);
return in;
}

istream& operator >> (istream &in, CStudent &s) {
int k;
 for(int i=0; i<3; i++){
        cout<<"Upisi "<<i+1<<". ocjenu klase CStudent."<<endl;
 in>>k;
 if(k<6 && k > -1) {
        s.SetOcjenaKolokvija(i,k);
 }
 else{cout<<"Takva ocjena ne postoji"<<endl;
 break; }
 }
}






CStudent::CStudent(){
SetIme("");

for (int i=0; i< 3;i++){

    m_kolokvij.m_ocjena[i]=0;
    SetOcjenaKolokvija(i,0);

}

}

void CStudent::SetOcjenaKolokvija(int brojKolokvija, int ocjena){
 m_kolokvij.m_ocjena[brojKolokvija]=ocjena;


}
    int CStudent::GetOcjenaKolokvija(int brojKolokvija){

        return m_kolokvij.m_ocjena[brojKolokvija];

    }

ostream& operator << (ostream& out, CStudent &s) {
out<<s.GetIme()<<endl;
float sum=0;
for(int i=0; i<3; i++){
    out<<s.GetOcjenaKolokvija(i)<<" , ";
    sum=sum+s.GetOcjenaKolokvija(i);

}
out<<endl<<"Konacna ocjena je:"<<sum/3<<endl;
return out;
}

int main() {

 CUcenik a;

 cout<<"Upisi objekt, tj. ime i ocjenu za klasu CUcenik. "<<endl;
 cin>>a;


 CStudent s;
 cin>>s;
 cout<<s;


return 0;

}
