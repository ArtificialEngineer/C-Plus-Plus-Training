/*35) Napi�ite funkciju koja decimalni broj pretvara u string
po hrvatskom standardu.
Takav string mora imati decimalni zarez umjesto decimalne to�ke.
Specifikacija funkcije je:
string HrvBroj(float x)
// PRE: argument funkcije je decimalni broj n
// POST: vra�a string koji sadr�i znamenke broja n i decimalni zarez
// (decimalnu to�ku pretvori u zarez)
primjerice cout << HrvBroj(7.8) << endl; dat �e ispis 7,8 */


#include <iostream>
#include <sstream>
#include <string>
using namespace std;

string HrvBroj(float x){
ostringstream ostr; //Objekt klase
ostr<<x; // U objekt ubacujemo podatke
string str0=ostr.str(); // ?
return str0;

}


int main() {
float a = float(7.8);
cout << HrvBroj(a) << endl;
return 0;
}
