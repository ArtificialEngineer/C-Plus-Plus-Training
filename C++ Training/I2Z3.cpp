#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {

int c;
cin>>c;
int rez=0;

if(c==1){rez=1; cout<<rez<<endl;}

else if(c==2 || c==3 || c==4){rez=4; cout<<rez<<endl;}

else if(c==5){rez=5; cout<<rez<<endl;}

else{rez=0; cout<<rez;}

}
