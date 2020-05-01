#include <iostream>
using namespace std;

class zbroj{

public:
    float x=0;

    void ispis(){
        cout<<"Line 10: Iznos varijable x je: "<<x<<". Njena adresa je: "<<&x<<endl;
    }     //Uklonjen defaultni konstruktor.

    zbroj operator+(zbroj j1){ //može i sa i bez referenca. Kada trebamo koristiti reference, kada ne?
        //Kada koristimo oblik zbroj& operator+(zbroj& j1), tada objekt b i objekt j1 imaju istu adresu. Zašto baš objket b?
        //Funkcija iznad prima objekt j1 kao argument. Koji objekt? Zašto se ne primaju dva argumenta, za svaki objekt po jedan?
        //Ova funkcija zapravo računa a.x+b.x  //Možemo li pomoću referenci napisati doslovno a.x+b.x? Zašto je (a.x == x) kao i (b.x== j1.x)?

        cout<<"Line 22: Usli smo u funkciju preopterecenja operatora. "<<endl;
        zbroj j2;

        cout<<"Line 21: Ispis varijable x i j1.x: "<<x<<" , "<<j1.x<<endl<<endl;
        j2.x=x+j1.x;

        cout<<"Adresa objekta j1 "<<&j1<<endl;
        cout<<"Adresa objekta j2 "<<&j2<<endl<<endl;

        cout<<"Line 27: Dokaz da je izraz x+j1.x tipa float: "<<x+j1.x<<endl;
        cout<<"Line 28: Izlazimo iz funkcije preopterecenja operatora. "<<endl<<endl;
           //j2.ispis()=ispis()+j1.ispis(); Ovo funkcionira ukoliko povratni tip funkcije ispis nije void.
        return j2;
    }
        //return x+j1.x;  Ovo ne možemo ispisati, zato jer return treba vraćati objekt tipa zbroj. A ne varijablu tipa float.

};

int main(){

  cout<<"Main: Line 36-70."<<endl<<"Klasa zbroj: Line 4-34 {"<<endl<<"Funkcija ispis: Line 9-11"<<endl<<"Preopterecenje operatora +: Line 13-31 }"<<endl<<endl;

zbroj a;
zbroj b;
zbroj c;

cout<<"Adresa objekta a "<<&a<<endl; // Zašto je adresa objekta a, jednaka adresi varijable x iz klase, koju objekt poziva, tj. pridjeljuje joj vrijednost? Vrijedi i za ostale objekte.
cout<<"Adresa objekta b "<<&b<<endl;
cout<<"Adresa objekta c "<<&c<<endl<<endl;

cout<<"Line 48: Prvi poziv a.ispis(): "; a.ispis(); //Poziv funkcije ispis. Ispisat će 0 i adresu 1.

a.x=9.9;

cout<<"Line 52: Drugi poziv a.ispis(): "; a.ispis();; //Poziv funkcije ispis. Ispisat će 9.9 i adresu 1.
//a.operator+ ne možemo pozvati na ovaj način. Zašto?

cout<<"Line 55: Prvi poziv b.ispis(): "; b.ispis(); //Poziv funkcije ispis. Ispisat će 0 i adresu 2.

b.x=3.3;

cout<<"Line 59: Drugi poziv b.ispis(): "; b.ispis();; //Poziv funkcije ispis. Ispisat će 13.3 i adresu 2.

cout<<"Line 61: Prvi poziv c.ispis(): "; c.ispis(); cout<<endl; //Poziv funkcije ispis. Ispisat će 0 i adresu 3.

c=a+b; //Kako mogu pretvoriti npr. zbroj b u int b?
//Već imamo dva objekta. Kada napišemo a+b, tek tada pozivamo funkciju preopterećenja operatora.
cout<<"Line 65: Ispis c.x: "<<c.x<<endl; //Ako želimo koristiti cout<<c, moramo preopteretiti << operator. Kako?
cout<<"Line 66: Ispis a.x+b.x: "<<a.x+b.x<<endl;
cout<<"Line 67: Drugi poziv c.ispis(): "; c.ispis();//Poziv funkcije ispis. Ispisat će 13.2 i adresu 3.

    return 0;
}

