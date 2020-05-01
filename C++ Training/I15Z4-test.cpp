#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

	int main(){


    vector<string> ve;
    string a,b,c,d,e;

    ofstream dat;
    dat.open("vec.txt");

    a="gsfjhjf";
    b="fjsnhjkf";
    c="fsljkfls";
    d="uihgsjgn";
    e="uivhsjdf";

    ve.push_back(a);
     ve.push_back(b);
      ve.push_back(c);
       ve.push_back(d);
        ve.push_back(e);


    for(int i=0; i<ve.size(); i++){


        dat<<ve[i]<<endl;

    }


vector<int> sor;
sor.push_back(2);
sor.push_back(1);
sor.push_back(7);
sor.push_back(6);
sor.push_back(4);

int i=0;
int t=0;

for(i=1; i<sor.size(); i++){

    if(sor[t]<sor[i]){
        t=i;
    }


}

 cout<<sor[t];

return 0;
}
