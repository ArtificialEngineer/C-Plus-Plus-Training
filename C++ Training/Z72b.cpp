#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <cctype>
#include <cstdlib>
using namespace std;
int main( ) {

   /* string sin=argv[1];
    string sout=argv[2];*/

ifstream in;
ofstream out;
in.open("sin.txt"); // Otvoren pristup datoteci iz koje kopiramo.
out.open("sout.txt"); // Otvoren pristup datoteci u koju kopiramo.


char c;
while(!in.eof()){
    in.get(c);
     out.put(c);
     /*string s;
        in>>s;*/

   /* if(c=='p'){
        cout<<"Prazan znak"<<endl;

    }

    else if(s=="//" || s=="") {

   cout<<"// ili "" "<<endl;
      }

   else{
    out.put(c);

   }*/
return 0;
} }


