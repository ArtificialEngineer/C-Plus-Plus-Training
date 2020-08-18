/*87) Napišite funkciju, kojom se iz jednog vektora V formiraju dva vektora: V1 treba sadržavati neparne, a vektor V2 parne elemente vektora:
typedef vector<int> Vec;
void Razdijeli_vektor( Vec& V, Vec& V1, Vec& V2)
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

typedef vector <int> Vec;
void Razdijeli_vektor( Vec& v, Vec& vp, Vec& vn ){

     Vec::iterator it;
     int s;

     for(it=v.begin();it<v.end(); it++){
           //s=*it;
        if((*it)%2==0){

            vp.push_back(*it);

        cout<<"Novi clan vektora vp je: "<<*it<<endl;

        }
else{

    vn.push_back(*it);
    cout<<"Novi clan vektora vn je: "<<*it<<endl;

}

     }

}

int main(){

vector <int> a;
vector <int> s;
vector <int> l;
a.push_back(4);
a.push_back(8);
a.push_back(9);
a.push_back(7);
a.push_back(1);
a.push_back(2);
a.push_back(11);
a.push_back(60);


Razdijeli_vektor(a,s,l);


return 0;}

