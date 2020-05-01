#include <iostream>
#include <string>
using namespace std;

int StSp(string x){

int r=0; char s;
for(int i=0; i<x.length(); i++){
    s=x.at(i);
    if(s==' '){
        r++;
    }
}
return r;
}

int main() {

   string sm="ljkgsdfl klfjasdlkfj  kafjl fksaj";
   cout<<StSp(sm);


return 0;

}
