#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){

    ifstream in;
    ofstream out;


    in.open("novain.txt");
    out.open("novaout.txt");
    char c;
    int ascii;

    while(in.get(c)){

       //in.get(c);

       if(  (c>='a' && c<='z') || ((c>='A' && c<='Z'))     ) {
        ascii=c;
        out<<ascii<<" ";


       }

        else{

            out<<c<<" ";

        }
    }

   return 0;
}
