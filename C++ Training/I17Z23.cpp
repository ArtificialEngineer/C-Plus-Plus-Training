#include <iostream>
#include <string>
#include <vector>
#include <list>
using namespace std;

bool compare( const list<int>& L,  const vector<int>& V){

list<int> lf=L;
vector<int> vf=V;

list<int>::iterator itl=lf.begin();
vector<int>::iterator itv=vf.begin();

bool isti = true;
bool razliciti = false;

for(itl; itl!=L.end(); itl++){

    if( !(*itl==*itv)  ){

            cout<<"Lista i Vektor vise nisu isti."<<endl;
        return razliciti;
    }

    else{

        cout<<"Lista i vektor su do sada isti."<<endl;

    }

   itv++;

}



}


int main()
{

 list<int> lm;

 lm.push_back(1);
 lm.push_back(2);
 lm.push_back(3);
 lm.push_back(4);
 lm.push_back(1);


 vector<int> vm;

 vm.push_back(1);
 vm.push_back(2);
 vm.push_back(3);
 vm.push_back(4);
 vm.push_back(5);

 compare(lm, vm);

 return 0;
}
