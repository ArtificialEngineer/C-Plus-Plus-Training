#include <iostream>
#include <string>
#include <vector>
using namespace std;





bool IsStringInt(const string& x) {

    for(int i = 0; i<x.length();i++){
    if(!(x.at(i)>='0' && x.at(i)<='9'))
    {
        return false;
                        }

else {return true;}
                                                }
                                                            }



 void podijeli(const vector<string>& v, vector<string>& v1, vector<string>& v2){

    for(int i=0; i<v.size(); i++){

        if(IsStringInt(v[i])){

                v1.push_back(v[i]);
                cout<<v[i]<<endl;

        }

        else{
            v2.push_back(v[i]);
        }

    }
}







int main()
{
   vector<string> vm;
   vector<string> vm1;
   vector<string> vm2;

   string a="nijebroj";
   string b="986827369";
   string c="73624";
   string d="5nij9e";
   string e="09823";

   vm.push_back(a);
   vm.push_back(b);
   vm.push_back(c);
   vm.push_back(d);
   vm.push_back(e);

   podijeli(vm, vm1, vm2);

    for(int i=0; i<vm1.size(); i++){

        cout<<i+1<<". Clan od vm1: "<<vm1[i]<<endl;

    }

    cout<<endl;

    for(int i=0; i<vm2.size(); i++){

        cout<<i+1<<". Clan od vm2: "<<vm2[i]<<endl;

    }




    return 0;
}
