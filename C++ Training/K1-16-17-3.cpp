#include <iostream>
using namespace std;

class tekuci{
float *m_tran;
int m_broj_tran;

public:
    float poc_stanje;
    tekuci(int n);
    tekuci(float f);
    void setTran(int n, float f);
    float getTran(int n);
    float stanje();
tekuci(const tekuci& temp);
~tekuci();


};

void tekuci::setTran(int n, float f){  //Funkcija

if(n>=0 && n<=m_broj_tran){
    if(f>=-1000.00 && f<=1000.00){
        m_tran[n]=f;

    }

    else{ cout<<"Greska sa f."<<endl;}
}

else{ cout<<"Greska sa n."<<endl;}



   }

   float tekuci::getTran(int n){  //Funkcija

       if(n>=0 && n<=m_broj_tran){
            return m_tran[n];

   }

   else{ cout<<"Greska sa n."<<endl;}
   }


	tekuci::tekuci(const tekuci& temp){

	    float* a;
	    int brtr;

        brtr=temp.m_broj_tran;
        a=new float[brtr];



	for(int i=0; i<brtr; i++){

            a[i]=temp.m_tran[i];

       // m_tran[i]=temp.m_tran[i];
	}
	}


	tekuci::tekuci(int n){

	if(n>0){

	m_broj_tran=n;
	m_tran= new float[m_broj_tran];}

	else{ cout<<"Broj transakcija ne moze biti negativan"<<endl;}

	for(int i=0; i<m_broj_tran; i++){
    m_tran[i]=0;
}

poc_stanje=0;

	}

	tekuci::~tekuci(){ //Destruktor
	delete [] m_tran;
	}




	int main(){

	    int tr;
        cout<<"Unesite zeljeni broj transakcija."<<endl;
        cin>>tr;
    tekuci a(tr);
    float t;
    for(int i=0; i<tr; i++){


        cout<<"Unesite "<<i+1<<". transakciju."<<endl;
        cin>>t;
        a.setTran(i, t);

    }
    cout<<endl<<"Unijeli ste transakcije: "<<endl;
     for(int i=0; i<tr; i++){

        cout<<i+1<<". Transakcija: "<<a.getTran(i)<<endl;


    }




    tekuci b(a);

    cout<<endl<<"Pozvan je kopirni konstruktor. "<<endl;
    cout<<"Ispisane transakcije bi trebale biti jednake prethodnima."<<endl;
     for(int i=0; i<tr; i++){

        cout<<i+1<<". Transakcija: "<<a.getTran(i)<<endl;


    }



    return 0;
}
