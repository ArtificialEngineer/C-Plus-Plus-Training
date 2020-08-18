#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>

using namespace std;


/// ISBLANK ///

/*void praznine(string sp){

for(int i=0; i<sp.length(); i++){

    if(isblank())

}

} */





int main()
{

     string s;
     float f;
     int i;
     double d;
     cout<<"atof() funkcija. Tj. f=atof(s.c_str())."<<endl;
     cout<<"Upisi string koji sadrzi samo broj tipa float."<<endl;
     cin>>s;
     f=atof(s.c_str());
     cout<<"Ispis stringa spremljenog u float i pomnozen s 2."<<endl;
     cout<<f*2<<endl<<endl;
     // za upis "8j5" kao ispis dobijemo 16.
     // za upis "j85" za ispis dobijemo 0.
     // Mozemo pretvoriti 456.333


     cout<<"atoi() funkcija. Tj. i=atoi(s.c_str())."<<endl;
     cout<<"Upisi string koji sadrzi samo broj tipa int."<<endl;
     cin>>s;
     i=atoi(s.c_str());
     cout<<"Ispis stringa spremljenog u float i pomnozen s 2."<<endl;
     cout<<i*2<<endl<<endl;
     // za upis "8j5" kao ispis dobijemo 16.
     // za upis "j85" za ispis dobijemo 0.
     // Ne možemo pretvoriti 456.333

     cout<<"strtod() funkcija. Tj. d=strod(s.c_str(), &c)."<<endl;
     cout<<"Upisi string koji sadrzi samo broj tipa double."<<endl;
     cin>>s;
     char* c;
     d=strtod(s.c_str(), &c);
     cout<<"Ispis stringa spremljenog u double i pomnozen s 2."<<endl;
     cout<<d*2<<endl<<endl;
     // za upis "8j5" kao ispis dobijemo 16.
     // za upis "j85" za ispis dobijemo 0.
     // Možemo pretvoriti 456.333

     cout<<"strtof() funkcija. Tj. f=strof(s.c_str(), &c)."<<endl;
     cout<<"Upisi string koji sadrzi samo broj tipa float."<<endl;
     cin>>s;

     f=strtof(s.c_str(), &c);
     cout<<"Ispis stringa spremljenog u float i pomnozen s 2."<<endl;
     cout<<f*2<<endl<<endl;
     // za upis "8j5" kao ispis dobijemo 16.
     // za upis "j85" za ispis dobijemo 0.
     // Možemo pretvoriti 456.333



      cout<<"itoa() funkcija. OVA FUNKCIJA NIJE STANDARDNA. "<<endl;
      cout<<"char* itoa(int val, char* str, int base "<<endl;
      cout<<"Upisi broj tipa int val, koji ce se pretvoriti u string."<<endl;
      int val;
      cin>>val;
      cout<<"Upisi broj tipa int, koji oznacava bazu broja val."<<endl;
      int base;
      cin>>base;
      cout<<"Stvaranje char *str. i string s1."<<endl;
      char* str;
      string s1;
      cout<<"Poziv funkcije s=itoa(val, str, base) "<<endl;
      s1=itoa(val, str, base);
      cout<<"Poziv funkcije s.length(): "<<endl;
      cout<<s1.length()<<endl;


        /* This function is not defined in ANSI-C and is not part of C++, but is supported by some compilers.

A standard-compliant alternative for some cases may be sprintf:
sprintf(str,"%d",value) converts to decimal base.
sprintf(str,"%x",value) converts to hexadecimal base.
sprintf(str,"%o",value) converts to octal base.  */


cout<<"Funkciju itoa mozemo zamijeniti zagljavljem <sstream>"<<endl;
cout<<"Odnosno, klasom istringstream"<<endl;
cout<<"Upisite string koji sadrzi nekoliko  brojeva, tipa float."<<endl;
cout<<"Npr: 55 678 921"<<endl;
string strm;
cin.ignore();
getline(cin,strm);
istringstream istr(strm);
float x;
while( istr>> x)
cout<< x << endl;







    return 0;
}
