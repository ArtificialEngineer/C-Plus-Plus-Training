#include <iostream>
#include <string>
#include <cctype>

using namespace std;

	class SimpleCircle {
public:
double x, y;
SimpleCircle();
SimpleCircle(double x1, double y1, double r1);
SimpleCircle(const SimpleCircle& c);
void SetRadius(double);
double GetRadius();
SimpleCircle& operator=(const SimpleCircle& c);

private:
double m_radius; // ne smije biti negativan
};

SimpleCircle::SimpleCircle(){x=y=m_radius=0;}

SimpleCircle::SimpleCircle(const SimpleCircle& c){

   //double a=c.GetRadius();
//SetRadius(a);

x=c.x;
y=c.y;
//m_radius=c.m_radius;

}
//passing 'const SimpleCircle' as 'this' argument of 'double SimpleCircle::GetRadius()' discards qualifiers [-fpermissive]|
void SimpleCircle::SetRadius(double sr){

m_radius=sr;
}

double SimpleCircle::GetRadius(){
return m_radius;
}
	int main(){

	  /*  SimpleCircle o1;
	    double xm,ym,rm;
	    cout<<"Upisi xm, ym, rm za o1"<<endl;
	    cin>>xm>>ym>>rm;
	    o1.x=xm;
	    o1.y=ym;

        SimpleCircle o2(o1);

        cout<<"Kopirni konstruktor za o2  daje xm : "<<endl;
        cout<<o2.x<<endl;

        cout<<"Kopirni konstruktor za o2 daje ym : "<<endl;
        cout<<o2.y<<endl;

        cout<<"Kopirni konstruktor daje radijus za o2: "<<endl;
        cout<<o2.GetRadius()<<endl;*/

        int b;
        cin>>b;
        SimpleCircle* v;

        v=new SimpleCircle[b];

        for(int i=0; i<b;i++){

                cout<<"x,y i r se postavlja na 0"<<endl;

            v[i].x=0;
            v[i].y=0;
            v[i].SetRadius(0);
        }

        delete [] v;

	return 0;

	}


