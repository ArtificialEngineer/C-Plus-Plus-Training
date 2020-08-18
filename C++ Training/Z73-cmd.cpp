#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char** argv){

    ifstream dat;

    if (argc!=2){

        cout<<"Netocan broj argumenata."<<endl;
        return -1;

    }



    dat.open(argv[1]);

     if( !dat.good() || !dat.is_open()){

        cout<<"Neuspjesno otvaranje datoteke"<<endl;
        return -1;
    }

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
