#include <iostream>
#include <string>
using namespace std;

class  Razlomak {
	int m_brojnik;
	int m_nazivnik;
 public:
	Razlomak();
	void Set(int br, int nz);
	void Print();
};

Razlomak::Razlomak(){
m_brojnik=0;
m_nazivnik=1;}

void Razlomak::Set(int br, int nz){
if(nz!=0){
    m_brojnik=br;
    m_nazivnik=nz;
}

}

void Razlomak::Print(){
cout<<m_brojnik<<"/"<<m_nazivnik<<endl;
}




int main() {

 Razlomak A[5];
 int a,b;
 for(int i=0; i<5; i++){

    cout<<"Postavi "<<i+1<<". brojnik i nazivnik."<<endl;
    cin>>a>>b;
    A[i].Set(a,b);
    A[i].Print();
 }


return 0;

}
