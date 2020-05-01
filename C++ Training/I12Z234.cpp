#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class CVoltage {
public:
double m_F, m_Vre, m_Vim;
CVoltage(): m_F(0), m_Vre(0), m_Vim(0) {}
 void SortVoltage(vector<CVoltage>& V);


};


istream& operator>>(istream& in,  CVoltage& V){  //Ukloni const)

    double a,b, c;
    if(in>>a>>b>>c){
    V.m_Vre=a;
    V.m_Vim=b;
    V.m_F=c;
    return in;}
}

ostream& operator<<(ostream& out, const CVoltage& o){

out<<o.m_Vre<<" "<<o.m_Vim<<" "<<o.m_F<<endl;
return out;

}





void CVoltage::SortVoltage(vector<CVoltage>& V){

int t;
int u;
for(int i=0; i<V.size();i++){

    t=V[i].m_Vre;

    for(int j=i+1; j<=V.size(); j++){

        u=V[j].m_Vre;
        t=V[i].m_Vre;
        if(u<t){

            CVoltage p=V[i];
            V[i]=V[j];
            V[j]=p; }
        }



        }
for(int i=1; i<=V.size();i++){
            cout<<V[i].m_Vre;

    }
        cout<<endl;
}




int main() {
vector<CVoltage> Vm;
CVoltage a, b, c, d, e, f;
a.m_Vre=7;
b.m_Vre=3;
c.m_Vre=5;
d.m_Vre=1;
e.m_Vre=4;

a.m_Vim=5;
b.m_Vim=4;
c.m_Vim=3;
d.m_Vim=8;
e.m_Vim=1;

a.m_F=9;
b.m_F=6;
c.m_F=8;
d.m_F=1;
e.m_F=3;

Vm.push_back(a);
Vm.push_back(b);
Vm.push_back(c);
Vm.push_back(d);
Vm.push_back(e);

//a.SortVoltage(Vm);

/*cout<<"Upisi varijable objekta f: "<<endl;
cin>>f;

cout<<"Upisali ste: "<<endl;
cout<<f;*/

 cout<<"Provjera "<<endl;
vector<CVoltage> vd;
ifstream dat;
dat.open("Volt.txt");
double fr,re,im;
CVoltage o;
cout<<"Provjera "<<endl;

//while(!dat.eof()){  //Imam beskonacnu petlji. Sto sad?
for(int i=0; i<10; i++){
    cout<<"Ucitaj fr "<<endl;
    dat>>fr;  //Uèitava prvu, drugu, treæu varijablu u i-tom redu?
    o.m_F=fr;

    cout<<"Ucitaj re "<<endl;
    dat>>re;
    o.m_Vre=re;

    cout<<"Ucitaj im "<<endl;
      dat>>im;
    o.m_Vim=im;

    vd.push_back(o);

}
dat.close();

 cout<<"Ispisi vektor: "<<endl;

for(int i=0; i<vd.size();i++){
    cout<<vd[i].m_F<<" "<<vd[i].m_Vre<<" "<<vd[i].m_Vim<<endl;

}






return 0;

}
