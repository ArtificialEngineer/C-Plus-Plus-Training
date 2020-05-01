/*
63) Napišite program kojim se iz tekstualne datoteke imena "data.txt"
očitavaju znakovi po sistemu "znak po znak".
Program neka na ekranu ispisuje samo one znakove kojima započinje svaki redak teksta .

*/

#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream input;
    input.open("data.txt");
    char a;
input.get(a); // pocinje ucitavanje
cout << a;
while( !input.eof() ) { // petlja i provjera kraja dat.
if( a == '\n' ) {
input.get(a); // input<<a da bi ovo funkcioniralo, trebam preopteretiti operator
cout << a; // ispisujem samo prvi znak retka
} else {
input.get(a);
}
}
input.close(); // zatvaranje datoteke
return 0;


}










/*input.get(a); // poèinje uèitavanje
cout << a;
while( !input.eof() ) { // petlja i provjera kraja dat.
if( a == '\n' ) {
input.get(a);
cout << a; // ispisujem samo prvi znak retka
} else {
input.get(a);
}
}
input.close(); // zatvaranje datoteke
return 0; */
