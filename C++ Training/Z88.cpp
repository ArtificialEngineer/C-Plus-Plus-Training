/* */

#include <iostream>
#include <string>
#include <vector>

using namespace std;





void SortStrVector(vector<string>& v){


//int t=0; Ne treba mi
int di=0;
int dj=0;
 int i=0;  int j= 0;
string kop;

for(i=0; i<v.size()-1; i++){

    for ( j=i+1; j<v.size(); j++){

        di=v[i].length();
        dj=v[j].length();

        if( dj<di   ){

            kop=v[i];
            v[i]=v[j];
            v[j]=kop;


        }


    }



}

for(int i=0; i<v.size(); i++){

    cout<<v[i]<<" ";


}

}


int main(){

vector<string> vm;
string xm=("u");

vm.push_back("Ajmo");
vm.push_back("se");
vm.push_back("kupati");
vm.push_back("u");
vm.push_back("mooru");

cout<<"Ispisat ce se rijeci u vektoru, od najmanje ka najvecoj."<<endl;

cout<<"Da li je vektor soritran?"<<endl;



SortStrVector(vm);








return 0;}

