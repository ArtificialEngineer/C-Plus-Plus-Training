#include <iostream>
#include <string>
#include <vector>
#include<fstream>
using namespace std;


class tocka{

protected:

    int m_x;
    int m_y;

public:


    Tocka();
int GetX() const {return m_x;}
int GetY() const {return m_y;}
void SetX(int x) ;
void SetY(int x) ;

};


void tocka::SetX(int x) {m_x = x;}
void tocka::SetY(int y) {m_y = y;}

ostream& operator << (ostream& out, const tocka& t) {
out << t.GetX() << " " << t.GetY();
return out;
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
