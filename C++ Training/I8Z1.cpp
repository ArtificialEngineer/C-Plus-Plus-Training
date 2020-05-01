#include <iostream>
#include <string>
using namespace std;

string RazPo( string x){

     string a=x;
for(int i=0; i<x.length(); i++){

    if(a.at(i)==' '){
        a.at(i)='_';
    }
}

return a;

}




int main() {

   string sm="ljkgsdfl klfjasdlkfj  kafjl fksaj";
   cout<<RazPo(sm);


return 0;

}
