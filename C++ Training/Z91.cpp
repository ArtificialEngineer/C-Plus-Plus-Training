/*91) Napišite dio programa u kojem se koristi niz stringova strVec deklariran s:
vector<string> strVec;
Program treba podržavati sljedeće radnje:
a) Korisnik unosi više stringova u niz strVec
(sve dok nije unesen string „kraj“)

b) Zatim se stringovi ispišu obrnutim redom od reda kojim su uneseni
(bez da se ispisuje string „kraj“)
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main(){

vector<string> v;
string s;

cout<<"Upisisujte stringove: "<<endl;
do{   cin>>s;

    v.push_back(s);
}
while( s!="kraj"&& s!="Kraj"  );




cout<<endl;
/*v.pop_back(); //
cout<<"Ispis zadnjeg 1: "<<v[v.size()]<<endl;

v.pop_back(); //
cout<<"Ispis zadnjeg 2: "<<v[v.size()]<<endl;*/

for(int i=v.size()-2; i>=0; i--){

    cout<<v[i]<<endl;

}





return 0;}



