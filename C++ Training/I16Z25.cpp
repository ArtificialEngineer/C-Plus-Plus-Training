#include <iostream>
#include <string>
#include <vector>
#include <list>
using namespace std;


/*void nspace(string& str){
 string sf;
for(int i=0; i<str.length(); i++){

    if( (str[i]==' ' )|| (str[i]== '\t') ){
       str.erase(i,1);

    }
}


}*/



int main()
{


   /* string sm;
    cout<<"Upisite neku recenicu."<<endl;
    cin.ignore();
    getline(cin, sm);

    cout<<"Recenica bez razmaka: "<<endl;
    nspace(sm);
    cout<<sm<<endl;*/

 list<int> lm;
cout<<"Upisite proizvoljan broj vrijednosti u listu."<<endl;
cout<<"Unos se prekida upisivanjem nekog slovnog znaka"<<endl;
 int im;
 while(cin>>im){

    lm.push_back(im);

 }

int sum=0;
int i=1;
list<int>::iterator it;
float srednja=0;
for(it=lm.begin(); it!=lm.end(); it++){

    sum=sum+*it;
    i++;


}


cout<<"Suma liste je:"<<sum<<endl;
cout<<"Prosjecna vrijednost liste je:"<<sum/i<<endl;



 return 0;
}
