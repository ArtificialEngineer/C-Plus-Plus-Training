#include <iostream>
#include <sstream>
using namespace std;


/// ISBLANK ///

/*void praznine(string sp){

for(int i=0; i<sp.length(); i++){

    if(isblank())

}

} */


/// Ako imam string t;
/// U klasiènom obliku, ne mogu pisati t>>negdje. Mogu samo negdje>>t.
/// t<<negdje. Mogu samo negdje<<t.
/// Sa <sstream> klasom, mogu.


int main()
{
  istringstream is; ///Prije upotrebe se mora ispuniti nekim tekstualnim sadržajem,
                    ///iz njega se može vršiti ekstrakcijanumerièkih i stringovnih tipova.


  ostringstream os;

  is.str();

  ostringstream ostr;
int n = 2345;
ostr<< "Broj iznosi: ";
ostr << hex <<n <<" Hex ili ";  /// WAT? Kako se pretvara u hex?
ostr<< dec<< n << " Dec.";
cout<< ostr.str() << endl; //cout<<ostr; ispisuje adresu.


cout<<"Upisite string koji sadrzi nekoliko  brojeva, tipa float."<<endl;
cout<<"Npr: 55 678 921"<<endl;
string strm;
cin.ignore();
getline(cin,strm);
istringstream istr(strm);
float x;
while( istr>> x)
cout<< x << endl;

return 69;}
