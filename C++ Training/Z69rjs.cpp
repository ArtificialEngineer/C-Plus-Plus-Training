#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main() {
ofstream izlaz;
string s;
int i;
izlaz.open("20imena.txt");
for( i = 0 ; i < 20 ; i++ ) {
cin >> s;
izlaz << s << " " << s.length() << endl;
}
izlaz.close();
return 0;
}
