#include <iostream>
using namespace std;

class tekuci{
float m_tran[5];

public:
    float poc_stanje;
    tekuci();
    tekuci(float f);
    void setTran(int n, float f);
    float getTran(int n);
    float stanje();
tekuci(const tekuci& temp);


};

tekuci::tekuci(){

for(int i=0; i<5; i++){
    m_tran[i]=0;



}

poc_stanje=0;


}

void tekuci::setTran(int n, float f){

if(n>=0 && n<=4){
    if(f>=-1000.00 && f<=1000.00){
        m_tran[n]=f;

    }

    else{ cout<<"Greska sa f."<<endl;}
}

else{ cout<<"Greska sa n."<<endl;}



   }

   float tekuci::getTran(int n){

       if(n>=0 && n<=4){
            return m_tran[n];

   }

   else{ cout<<"Greska sa n."<<endl;}
   }


	tekuci::tekuci(const tekuci& temp){

	for(int i=0; i<5; i++){

        m_tran[i]=temp.m_tran[i];
	}
	}
	int main(){
    tekuci a;
    float t;
    for(int i=0; i<5; i++){


        cout<<"Unesite "<<i+1<<". transakciju."<<endl;
        cin>>t;
        a.setTran(i, t);

    }
    cout<<endl<<"Unijeli ste transakcije: "<<endl;
     for(int i=0; i<5; i++){

        cout<<i+1<<". Transakcija: "<<a.getTran(i)<<endl;


    }




    tekuci b(a);

    cout<<endl<<"Pozvan je kopirni konstruktor. "<<endl;
    cout<<"Ispisane transakcije bi trebale biti jednake prethodnima."<<endl;
     for(int i=0; i<5; i++){

        cout<<i+1<<". Transakcija: "<<a.getTran(i)<<endl;


    }



    return 0;
}
