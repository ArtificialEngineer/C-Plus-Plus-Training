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

int lin1=1;
char br;
itoa(lin1,&br,10 );
out.put(br).put('.').put(' '); //Postavljamo znakove 1. na mjesto prvog reda.

char c;
 int b=1;
while(!in.eof()){
    in.get(c);

    if(c=='\n' || c=='\v'){

        b++;
        int lino=b;
        itoa(lino,&br,10 );
           out.put('\n').put(br).put('.').put(' ').put(c);

        }
    else{

         out.put(c);
    }






}



return 0;
}

/* Dobijem:

1. Prvi
2.
Drugi lalalalal
3.
Treæi llala lal lal al l	 llalala
4.
Èetvrtii */
