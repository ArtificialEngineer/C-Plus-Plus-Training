

#include <iostream>
using namespace std;

void Dec(int &y, int x) {x--; y -= x; }
void Neg(int &y, int x) { y = -x; }

int main() {
int a=2, b=2;
cout << "a + b = " << a + b << endl;
Dec(a, b);
cout << a << " " << b << endl;
Neg(b, a);
cout << a << " " << b << endl;
return 0;
}
