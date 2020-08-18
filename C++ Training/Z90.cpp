/*90) Pretpostavite da se podaci o grupi studenata nalaze
u vektoru objekata klase Student iz jednog od prethodnih zadataka:
vector<Student> spisak;

Treba napisati funkciju MatBroj() kojom se dobavlja matični broj studenta
kojem znamo prezime. Prototip funkcije je:
string MatBroj(const vector<Student>& spisak, const string& prezime);
// PRED: spisak sadrži podatke o studentima
// argumenti: spisak – sadrži podatke o studentima
// prezime – prezime studenta kojem se traži matični broj
// POST: funkcija vraća matični broj studenta, ukoliko se prezime
// nalazi u vektoru spisak, a ako ga nema vraća "00000"
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

string MatBroj(const vector<Student>& spisak, const string& prezime){

        vector<Student>::iterator it;
        Student o;

    if(it=spisak.begin();it<spisak.end; it++){
        o=*it;
        if(o.prezime==preizme){

            return o.ime;
        }

        else{return "00000"}

    }


}

int main(){

vector<Student> spisak;
string p;
cout<<"Upisite prezime studenta ciji maticni broj zelite: "<<endl;
cin<<p;
MatBroj(spisak,p);






return 0;}

