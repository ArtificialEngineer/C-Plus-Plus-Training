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
    d.open("brojevi.bin", ios::binary);

    for(int i=0; i<10; i++){
        d.write( (char*) &B, sizeof(float)*10);

    }
d.close();



return 0;

}
