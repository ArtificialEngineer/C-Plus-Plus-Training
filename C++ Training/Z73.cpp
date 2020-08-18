#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){

    ifstream dat;
    dat.open("sin.txt");
    char c;
    int n=0;
    while(!dat.eof()){
       dat>>c;
       n++;

       if(n<41){
        cout<<c;

       }
        else{
                n=1;
            cout<<'\n'<<c;

        }

    }

   return 0;
}
