#include <sstream>
#include <iostream>
#include <string>
using namespace std;
string HrvBroj(float x){
string str, str1, str2;
ostringstream ostr;
int pos;
ostr << x;
str = ostr.str();
pos = str.find('.');
str1 = str.substr(0, pos);//koliki je pos? Pos je jednak indeksu na kojem je točka.
str2 = str.substr(pos+1, str.length());
return str1 + ',' + str2;
}
int main() {
float a = float(7.8);
cout << HrvBroj(a) << endl;
return 0;
}
