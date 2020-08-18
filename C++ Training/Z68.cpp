#include <iostream>
#include <fstream>
using namespace std;
int main() {
ifstream ulaz;
ulaz.open("data.txt") ;
if (!ulaz.good() || !ulaz.is_open())
return 1;
int iZnakova = 0;
int iRijeci = 0;
int iLinija = 0;
unsigned char bRijecZapocela = 0;
char c;
while (ulaz.get(c)) {
if ( c != '\n' && c != '\r' ) iZnakova++;
if ( c == ' ' || c == '\n' || c == '\t') {
// broje se samo linije teksta!
if ( c == '\n' && bRijecZapocela )
iLinija++;
if ( bRijecZapocela == 1 ) {
bRijecZapocela = 0;
iRijeci++;
}
} else {
bRijecZapocela = 1;
}
}
//zatvori datoteku
ulaz.close();
cout << "Znakova: " << iZnakova << endl;
cout << "Rijeci: " << (bRijecZapocela ? iRijeci+1 : iRijeci)

<< endl;
cout << "Linija: " << (bRijecZapocela ? iLinija+1 : iLinija)
<< endl;
return 0;
}
