/* 86) Napišite generičku funkciju, kojom se iz jednog vektora V
formiraju dva vektora: Vshort treba sadržavati stringove kraće od deset znakova,
a vektor Vlong stringove dulje od deset znakova.
typedef vector <string> Vec;
void Razdijeli_vektor( Vec& V, Vec& Vshort, Vec& Vlong )*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

typedef vector <string> Vec;
void Razdijeli_vektor( Vec& v, Vec& vs, Vec& vl ){

     Vec::iterator it;
     string s;

     for(it=v.begin();it<v.end(); it++){
            s=*it;
        if(s.length()<10){

            vs.push_back(*it);

        cout<<"Novi clan vektora vs je: "<<s<<endl;

        }
else{

    vl.push_back(*it);
    cout<<"Novi clan vektora vl je: "<<s<<endl;

}

     }

}

int main(){

vector <string> a;
vector <string> s;
vector <string> l;
a.push_back("gfsdjkgjghsjkghsj");
a.push_back("kjsfghs");
a.push_back("fjish");
a.push_back("gkvdsjsgfsgfsgf");
a.push_back("fjs");
a.push_back("gfsklgslklfgsfdf");
a.push_back("gfsklgslgsgsgfsgfsklfgsfdf");
a.push_back("hdhg");


Razdijeli_vektor(a,s,l);


return 0;}

