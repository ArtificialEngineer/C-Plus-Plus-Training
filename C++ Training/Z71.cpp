#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;
int main() {
ifstream ob;
int ri,re;
string s;
string z;

ob.open("data.txt");
 int sum=0;
for(int i=0;!(ob.eof()); i++){

        ob>>z;
        cout<<z.length()<<" "; //duljina i-te rijeèi
       //sum=z.length+sum;

}
//cout<<sum;
return 0;
}
