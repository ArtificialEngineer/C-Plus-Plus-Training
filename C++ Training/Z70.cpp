/* 70) Podaci o studentima su zapisani u datoteci "student.txt"
u obliku teksta koji sadrži podatke o matičnom broju,
imenu i prezimenu studenta, primjerice:
110497339001 Ivo Banac
120397347001 Jure Topic
030497431001 Miljenko Vukas
011297432001 Ivan Tadin

Podatke za pojedinog studenta možemo prikazati klasom Student :
class Student {
public:
string m_broj; // maticni broj
string m_ime; // ime
string m_prezime; // prezime
Student() { }
Student(string& mb, string& ime, string& pr)
: m_broj(mb), m_ime(ime), m_prezime(pr), { };
};

Napišite funkciju CitajStudDatoteku kojom se učitavaju podaci o
studentima iz toka input u strukturu koja je vektor objekata tipa Student.
Prototip funkcije CitajStudDatoteku je:
void CitajStudDatoteku (ifstream& input, vector<Student>& spisak)
// PRED: datoteka otvorena za čitanje pomoću toka input
// POST: pročitani svi podaci u vektor spisak
Pazi: iz svake linije datoteke treba učitati tri stringa. */

#include <iostream>
#include <stdlib.h>
#include<string>     /* atof */
#include <fstream>
#include <vector>

using namespace std;


class Student {
public:
string m_broj; // maticni broj
string m_ime; // ime
string m_prezime; // prezime

Student() ;
Student(string& mb, string& ime, string& pr): m_broj(mb), m_ime(ime), m_prezime(pr) { };

void CitajStudDatoteku (ifstream& input, vector<Student>& spisak);
};

void Student::CitajStudDatoteku(ifstream& input, vector<Student>& spisak){



 input.open("student.txt");
  while(!(input.eof())){

    //Očitavaj mi znakove do razmaka. Upiši ih u varijablu. Varijablu stavi u vektor.
    //Zabilježi mjesto znaka " ". Zatim od tog mjesta pa dalje, očitavaj znakove
    //i spremi ih u variajblu. Varijablu spremi u vektor. Opet zabilježi mjesto znaka " ".
    //Zatim opet od tog mjesta očitavaj znakove i upiši ih u zadnju varijablu. Varijablu spremi u vektor.
    //Ponovno radi isto nakon znaka /n.

       char a;
       if( get(a)==" "){
            int pos=a;
       m_broj=getline(0,pos);
       m_ime=getline(pos+1;)

       }

        /*m_broj=input.getline();
        m_ime=input.getline();
        m_prezime=input.getline();*/
        ///ili >> ili getline, nema smisla oboje istodobno

        /*tok>>spisak.push_back(m_broj)>>spisak.push_back(m_ime);
        tok>>spisak.push_back(m_prezime);*/
        ///Greška, trebaš spremiti objekt a ne članove objekta pojedinačno.

        }


}
int main(){
  Student a;
    ifstream tok;
     vector v<Student>;
  a.CitajStudDatoteku(tok,v);




  }





    return 0;
}

