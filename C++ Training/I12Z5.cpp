#include <iostream>
#include <string>
#include <cctype>

using namespace std;

	class Tocka2D {
			public:
  			Tocka2D();
  			~Tocka2D();
  			void SetX(double x);
  			void SetY(double y);
  			double GetX();
  			double GetY();
			protected:
  			double m_x, m_y;
	};

	class Tocka3D : public Tocka2D
	{

	    public:
	void SetZ(double Z);
	double GetZ();
	Tocka3D(){ m_x=m_y=m_z=0;}
	Tocka3D(Tocka3D& k);

	private:
	 double m_z;

	};

	void Tocka2D::SetX(double x){
	m_x=x;}

	void Tocka2D::SetY(double y){
	m_y=y;}

	void Tocka3D::SetZ(double z){
	m_z=z;}

	double Tocka2D::GetX(){
	return m_x;}

	double Tocka2D::GetY(){
	return m_y;}

	double Tocka3D::GetZ(){
	return m_z;}

	/*operator==(const Tocka3D& T1, const Tocka3D& T2){//Ako operator definiramo u tijelu klase, pisemo jedan argument

	if(T1.GetX()!=T2.GetX()  || T1.GetY()!=T2.GetY() || T1.GetZ()!=T2.GetZ()){
	return false;
	}

	else{return true:}

	}*/

 Tocka2D::Tocka2D( Tocka2D& k){

 int a,b,c;
 a=k.GetX();
 b=k.GetY();
 c=k.GetZ();

 SetX(a);
 SetY(b);
 SetZ(c);

 }


	int main(){

	    Tocka3D a;
	    a.SetX(5);
	    a.SetY(7);
	    a.SetZ(4);

	    Tocka3D b(a);

	    cout<<b.GetX()<<" "<<b.GetY()<<" "<<b.GetZ()<<endl;


	return 0;

	}


