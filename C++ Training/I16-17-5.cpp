#include <iostream>
#include <string>
#include <vector>
#include<fstream>
#include<list>
using namespace std;


template<class T> T avg(list<T> lst){

list<T>::iterator it;
T sum=0;
T avg;

for(it=lst.begin(); i<lst.end(); i++){

    sum=sum+*it.at(i);

}
avg=sum/lst.size();

}






int main()
{

tocka niz[10];
int xm, ym;

cout<<"Upisite 10 vrijednosti za xm i ym: "<<endl;

for(int i=0; i<10; i++){
        cout<<"Upisite vrijednosti za xm i ym pod rednim brojem: "<<i+1<<endl;
        idi: cin>>xm>>ym;

         if((xm>=0 && xm <=1680) && (ym>=0 && ym<=1050)){
        cout<<"Upisane su "<<i+1<<". vrijednosti za xm i ym: "<<endl<<endl;
        niz[i].SetX(xm);
        niz[i].SetY(ym);

}
else{
        cout<<"Upisite ponovno "<<i+1<<". vrijednosti za xm i ym: "<<endl;
    goto idi;
}
}

for(int i=0; i<10; i++){
    cout<<"Upisane vrijednosti za xm i ym, pod rednim brojem "<<i+1<<" su: "<<endl;
    cout<<niz[i].GetX()<<" i "<<niz[i].GetY()<<endl<<endl; }

 cout<<"Poziv operatora = : "<<endl;
 cout<<niz;


    ofstream dat;
    dat.open("kol2.txt");
    for(int k=0; k<10; k++){

        dat<<"X je: "<<niz[k].GetX()<<endl;
        dat<<"Y je: "<<niz[k].GetY()<<endl;
        dat<<endl;

    }
        dat.close();

    return 0;
}
