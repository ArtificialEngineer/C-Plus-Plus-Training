#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <fstream>
using namespace std;

/// ///////////////////////////////////////////////////////////
class osoba{

protected:
string id;
public:

    string ime, prezime;
    cosoba (){  id="000-0000";
        ime=prezime="";

    }

    void setID(const string& temp);
    string getID();
    friend ostream& operator<<( ostream s, const osoba& c1);
};
/// ///////////////////////////////////////////////////////////
ostream& operator<<( ostream s, const osoba& c1){

s<<c1.id<<" "<<c1.ime<<" "<<c1.prezime<<endl;
return s;

}
/// ///////////////////////////////////////////////////////////
string osoba::getID(){
return id;

}
/// ///////////////////////////////////////////////////////////
void osoba::setID(const string& temp){
id=temp;
}
/// ///////////////////////////////////////////////////////////

class student:public osoba{

int ocj[4];
public:
student(){
for(int i=0; i<4; i++){
    ocj[i]=0;
}
}


 int GetOcjena(int n){
    return ocj[n];  }

    void SetOcjena(int o, int n){

    ocj[n]=o;
    }

    friend ostream& operator<<( ostream s, const student& c1);


};


 ostream& operator<<( ostream s, const student& c1){


s<<c1.id<<" "<<c1.ime<<" "<<c1.prezime<<endl;
cout<<"Ocjene su: ";


for(int i=0; i<3; i++){

    s<<c1.ocj[i]<<" ";

}

return s;



}








int main()
{

osoba a;


cout<<"Upisite broj ID osobe u obliku xxx-xxxx"<<endl;
ponovno: string s;
cin>>s;
 if(s.length()!=8  &&  s[3] != '-'){

        cout<<"Upisani broj je neispravan. Upisite ponovno."<<endl;

    goto ponovno;

 }

else{

   a.setID(s);

}

cout<<"Upisite cetiri ocjene:"<<endl;
student as;
int om;
cin>>om;
for(int i=0; i<3; i++){

    cin>>om;
    if(om>=0 && om<=5){

       as.SetOcjena(om, i);

    }

    else{  cout<<"Niste dobro upisali ocjenu."<<endl;}


}

cout<<"Ispis objekta pomocu operatora << "<<endl;
//cout<<as<<endl;



vector<osoba> vec;
string ime;
do{ cin>>ime;}

while(ime!="kraj"){

  student obj;
obj.ime=str;
obj.setID();
obj.SetOcjena();


vec.push_back(obj);

}

ofstream dat;
dat.open("os.txt");

for(int i=0; i<vec.size(); i++){

dat<<vec[i]<<endl;

}


 return 0;
}
