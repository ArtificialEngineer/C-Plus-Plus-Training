#include <iostream>
#include <fstream>
using namespace std;



int main() {

ofstream d1;
ifstream d2;

d1.open("test.dat");

string s="abxkloprs";
d1<<s;

d2.open("test.dat");

char a, b, x;

d2.get(a).get(b).get(x);
if(a=='a' && b=='b' && x=='x'){

    cout<<"Prepoznat tip datoteke"<<endl;
}

else{ cout<<"Nije prepoznat tip datoteke"<<endl;}
/*d1.close;
d2.close;*/

return 0;

}
