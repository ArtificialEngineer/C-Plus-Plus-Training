#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class sklopke{

//bool m_stanje[7];

bool *m_stanje;
int m_broj_sklopki;

public:
   // sklopke();
    void ukljuci(int n);
    void ukljuciSve(int n);
    void iskljuci(int n);
    void iskljuciSve();
    bool ukljucen(int n);
    void postavi(int n, bool b);

    sklopke& operator=(const sklopke& j);

///////////////////////////////77
    sklopke(int );
    sklopke(sklopke &s);
    ~sklopke();

};

/*sklopke::sklopke(){
for(int i=0; i<7; i++){
m_stanje[i]=true;
    }
}*/

void sklopke::ukljuci(int n){
if(n<7 && n>=0){
    m_stanje[n]=true;
    }

    else{cout<<"Sklopka ne postoji."<<endl;}
}

void sklopke::iskljuci(int n){
if(n<7 && n>=0){
    m_stanje[n]=false;
}

else{cout<<"Sklopka ne postoji."<<endl;}
}

	bool sklopke::ukljucen(int n){

	if(n<7 && n>=0){
    return m_stanje[n];
}

else{cout<<"Sklopka ne postoji."<<endl;}
}


sklopke& sklopke::operator=(const sklopke& j){

for(int i=0; i<7; i++){
    m_stanje[i]=j.m_stanje[i];}
    return *this;
}

//////////////////////////////////////

sklopke::sklopke(int n=7){
m_broj_sklopki=n;
m_stanje=new bool[m_broj_sklopki];
}

sklopke::~sklopke(){

delete [] m_stanje;}

sklopke::sklopke(sklopke& s){

for(int i=0; i<7; i++){
    m_stanje[i]=s.m_stanje[i];
}

}




	int main(){

	   /* sklopke a;

	    cout<<a.ukljucen(4)<<endl;
	    a.iskljuci(4);


	   cout<<a.ukljucen(4)<<endl;

	   sklopke b;
	   b=a;

	   cout<<b.ukljucen(4)<<endl<<endl;


	   sklopke o1; //Sve su true

	   o1.iskljuci(0); //Postavi u false
	    cout<<"o1 upravo iskljuen na mejstu 0: "<<o1.ukljucen(0)<<endl;
         o1.iskljuci(3); //Postavi u false
         o1.iskljuci(6); //Postavi u false

          o1.ukljuci(0); //Postavi u true

          sklopke o2;
          o2=o1; //operator =
          cout<<"Poziv operatora =, o2=o1."<<endl;
        cout<<"o2  na mjestu 0: "<<o2.ukljucen(0)<<endl;*/


        sklopke o;
      // o.ukljuciSve();
       o.iskljuci(5);
       cout<<o.ukljucen(5)<<endl;





	return 0;



	}



