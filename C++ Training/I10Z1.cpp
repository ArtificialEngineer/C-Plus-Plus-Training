#include <iostream>
#include <string>
#include <cstdlib>
#include <stdio.h>
using namespace std;


string pobr(const string str, int broj){

    string a;
    a=str;
    char c;
   itoa(broj, &c, 10);

    for(int i=0; i<a.length(); i++){

        if(a[i]=='#'){

            a[i]=c;
        }

    }
     return a;

}

/*string ZamijeniRazmakePodvlakom(const string& str) {
string ret; //string koji se vraca

for(  int i = 0 ; i < str.size() ; i++ ) {

if( str[i] == '#' ) {
ret.push_back('5');

} else {

ret.push_back( str[i] );
}
}
return ret;
}*/


int main(){

    string s="imam # godina i # mjeseci.";
    cout<<s<<endl;
    int i;
    cout<<"Upisi int broj koji ce zamijeniti znak #: "<<endl;
    cin>>i;
    cout<<pobr(s,i);

    return 0;}
