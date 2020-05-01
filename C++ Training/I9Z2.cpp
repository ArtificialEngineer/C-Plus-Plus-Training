

#include <iostream>
using namespace std;

void Djeost(int b, int n, int &d, int& o){
d=b/n;
o=b%n;
}

int main() {
int bm, nm, dm, om;
om=0;
cin>>bm>>nm;
Djeost(bm, nm, dm, om);
cout<<dm<<endl<<om;
return 0;
}
