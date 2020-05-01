#include <iostream>
using namespace std;


void trswap(float& a, float& b, float& c){

int af, bf, cf;

af=a; bf=b; cf=c;
a=cf; b=af; c=bf;

}


	int main(){

        float am, bm, cm;
        am =3;
        bm=7;
        cm=9;
        cout<<am<<" "<<bm<<" " <<cm<<endl;
        trswap(am,bm,cm);
        cout<<am<<" "<<bm<<" " <<cm<<endl<<endl;



       float a,b,c;
       a=2;
       b=3;
       c=4;
        cout<<a<<" "<<b<<" " <<c<<endl;
        if(a=0)
            trswap(c,b,a);
          cout<<a<<" "<<b<<" " <<c<<endl;
          if(c-a)
            trswap(b,c,a);
           cout<<a<<" "<<b<<" " <<c<<endl<<endl;

          float d,e,f;
          d=2;
          e=3;
          f=4;
          float& g=d;
           cout<<d<<" "<<e<<" " <<f<<endl;
           trswap(d,e,f);
            cout<<d<<" "<<e<<" " <<f<<endl;
            trswap(e,d,g);
            cout<<d<<" "<<e<<" " <<f<<endl;

        return 0;
}
