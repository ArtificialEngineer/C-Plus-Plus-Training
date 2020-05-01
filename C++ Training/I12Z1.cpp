#include <iostream>
#include <string>
#include <cctype>
#include <list>

using namespace std;

void StUp( list<string> L){
    list<string>::iterator it;
    int a,b;
    char c;
    string s;
    for(it = L.begin(); it!=L.end(); it++){

        s=*it;   //Uzimamo it-i string. Lista nema funkcije "at" ni F[].
        c=s[0];  //Uzimamo prvi znak it-og stringa.

        a=isdigit(c);// Treba biti 0 ili 1. Ako je 0, znaci da je znak c nije broj.
                    // U ovom slucaju, onda je sigurno slovo.
        if(a==0){

            //b=isupper(c); //Provjeravamo da li je to slovo veliko.
            if(!isupper(c)){  // Ako nije veliko, tj. ako je b==0, povecavamo ga.
                toupper(c);
                cout<<c<<endl;  // Ispise g i f, ali malo, ne poveca ga.

                //Sad povecani prvi znak treba smjestiti u it-i string na 0. mjestu
                s[0]=c; // [] je funkcija iz klase string.
                *it=s;
               // *it.push_front(c); U stringu postoji samo push_back.
               cout<<s<<endl;



            }
        }

    }

}


int main() {
    string a,b,c,d,e;
    a="7kfdfs";
    b="gsdgd";
    c="Kifsj";
    d="fuer";

    list<string> lm;
    lm.push_back(a);
    lm.push_back(b);
    lm.push_back(c);
    lm.push_back(d);

    StUp(lm);


return 0;
}
