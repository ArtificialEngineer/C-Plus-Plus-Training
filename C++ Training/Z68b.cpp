#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;
int main() {
ifstream ob;

int zna=0;
int rij=0;
int red=1;
char c;
ob.open("data.txt");

 while(!ob.eof()){

        ob.get(c);
        zna++;

        if(c=='\t' || c==' '){

            rij++;
        }

        else if(c=='\n' ||  c=='\v'){

            red++;
        }



 }
cout<<"Broj znakova je: "<<zna<<endl;
cout<<"Broj rijeci je: "<<rij<<endl;
cout<<"Broj redaka je: "<<red<<endl;

return 0;
}
