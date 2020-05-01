#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    float A[10];
    for(int i=0; i<10; i++){
        A[i]=i+1;
    }

    float B=33;

    ofstream d;
    d.open("kbrojevi.txt");

    for(int i=0; i<10; i++){
    d<<A[i].real<<" "<<A[i].imag<<endl;

    }
d.close();



return 0;

}
