#include <iostream>
#include <fstream>
using namespace std;

void PovecajSmanjiZaDelta(int delta, int& x, int& y) {
x = x + delta;
y = y - delta;
}

int main() {

int x=33, y=22;
for (int delta =0; delta <3; delta++) {
PovecajSmanjiZaDelta (delta, x, y);
}
cout << "x=" << x<< endl<< "y="<< y<< endl;

/*int x=33, y=22, delta = 3;
PovecajSmanjiZaDelta (delta++, x, y);
PovecajSmanjiZaDelta (++delta, y, x);
cout << "x=" << x<< endl<< "y="<< y<< endl;*/



return 0;

}
