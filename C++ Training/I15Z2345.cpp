#include <iostream>
#include <string>
#include <cctype>
#include <fstream>
#include <vector>
using namespace std;



 class ckvadrat{



 public:
         float m_sirina;
    float x,y;

    ckvadrat(){x=0.0; y=0.0; m_sirina=0.0;}
    virtual float GetPovrsina(){return m_sirina*m_sirina;}
   friend ostream& operator<<(ostream& s, const ckvadrat& c1);

     void SetSirina(float s);
      float GetSirina();

     virtual void SetVisina(float a)=0;  //Moram imati ÈVF, inaèe program en radi. Zašto?

 };

 void ckvadrat::SetSirina(float s){

 m_sirina=s;

 }

 float ckvadrat::GetSirina(){
 return m_sirina;
 }

 ostream& operator<<(ostream& s, const ckvadrat& c1){


 cout<<"Poziv operatora << klase ckvadrat."<<endl;
 s<<"X je: "<<c1.m_sirina<<endl; //Koliki ce biti x? Da li bih trebao pozvati m_sirina?
 /*s<<"Povrsina je: "<<c1.GetPovrsina()<<endl;
 s<<"Sirina je: "<<c1.GetSirina()<<endl;*/

 return s;
 }


 /// //////////////////////////////////////////////////

 class cpravokutnik:public ckvadrat{
public:
     float m_visina;
     cpravokutnik(){ x=0; y=0;}

void SetVisina (float a);
float GetVisina();
float GetPovrsina(){ return m_sirina*m_visina;}
friend ostream& operator<<(ostream& s, const cpravokutnik& c1);

 };

  void cpravokutnik::SetVisina(float a){

m_visina=a;
}


float cpravokutnik::GetVisina(){
return m_visina;}

ostream& operator<<(ostream& s, const cpravokutnik& c1){

 cout<<"Poziv operatora << klase cpravokutnik."<<endl;
 s<<"X je: "<<c1.m_sirina<<endl<<"Y je: "<<c1.m_visina<<endl;
}


/// ////////////////////////////////////////////////////////


cpravokutnik najveci( vector<cpravokutnik>& Pr){

int i; int t=0;
ckvadrat* pPravt;
ckvadrat* pPravi;
for(i=t+1; i<Pr.size(); i++){

    pPravt=&Pr[t];
    pPravi=&Pr[i];

    if(pPravt->GetPovrsina() < pPravi->GetPovrsina()){

        t=i; }
    }

    return Pr[t];

}







/// ////////////////////////////////////////////
	int main(){

//    ckvadrat ok1;
  //  ok1.SetSirina(5);
   // cout<<ok1<<endl;

 cpravokutnik op1;
 op1.SetSirina(4);
 op1.SetVisina(6);
 cout<<op1<<endl;

 cpravokutnik op2;
 ckvadrat* pPrav=&op2;


pPrav->SetSirina(6);
pPrav->SetVisina(7);
 cout<<"Ispis povrsine 2: "<<pPrav->GetPovrsina()<<endl;


vector<cpravokutnik> Pr;
cpravokutnik o4;
cpravokutnik o5;
cpravokutnik o6;

o4.SetSirina(6);
o4.SetVisina(9);
o5.SetSirina(8);
o5.SetVisina(11);
o6.SetSirina(33);
o6.SetVisina(5);

Pr.push_back(o4);
Pr.push_back(o5);
Pr.push_back(o6);

ofstream dat;
dat.open("9zadatak.txt");

for(int i=0; i<Pr.size(); i++){

dat<<Pr[i].m_sirina<<" "<<Pr[i].m_visina<<endl; //Kako dat reagira na "cout" iz operatora <<?


}
dat.close();

cout<<"Najveca povrsina je:"<<endl;
cout<<najveci(Pr).GetPovrsina()<<endl;


return 0;
	}



