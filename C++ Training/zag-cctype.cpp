#include <iostream>
#include <cctype>
using namespace std;


/// ISBLANK ///

/*void praznine(string sp){

for(int i=0; i<sp.length(); i++){

    if(isblank())

}

} */





int main()
{
    string a="Ima jedan covik";
    char c1='m';
    char c2='F';
    char c3='6';
    char c4='k';

    cout<<"Funkcija isdigit provjerava m i 6"<<endl;
    cout<<"Trebamo dobiti 0 i 1"<<endl;
    cout<<isdigit(c1)<<endl;
    cout<<isdigit(c3)<<endl<<endl;

    cout<<"Funkcija islower provjerava m i F"<<endl;
    cout<<"Trebamo dobiti 1 i 0"<<endl;
    cout<<islower(c1)<<endl;
    cout<<islower(c2)<<endl<<endl;

    cout<<"Funkcija islower provjerava k i F"<<endl;
    cout<<"Trebamo dobiti 1 i 0"<<endl;
    cout<<islower(c4)<<endl;
    cout<<islower(c2)<<endl<<endl;


    cout<<"Funkcija isupper provjerava m i F"<<endl;
    cout<<"Trebamo dobiti 0 i 1"<<endl;
    cout<<isupper(c1)<<endl;
    cout<<isupper(c2)<<endl<<endl;


    cout<<"Funkcija ispace provjerava " ", \t, \n, \v, \f, \r, h, ), 5 "<<endl;
    cout<<"Trebamo dobiti 1, 1, 1, 1, 1, 1, 0, 0, 0 "<<endl;
    cout<<isspace('\t')<<endl;
    cout<<isspace('\n')<<endl;
    cout<<isspace('\v')<<endl;
    cout<<isspace('\f')<<endl;
    cout<<isspace('\r')<<endl;
    cout<<isspace('\t')<<endl;
    cout<<isspace('h')<<endl;
    cout<<isspace(')')<<endl;
    cout<<isspace('5')<<endl<<endl;

    cout<<"Funkcija tolower smanjuje F, trebamo dobiti f "<<endl;
    cout<<tolower('F')<<endl;
    cout<<"Spremimo funkciju u int i, zatim char c5=i, pa pokusajmo cout<<c5 "<<endl;
    int i=tolower('F');
    char c5=i;
    cout<<c5<<endl<<endl;

    cout<<"Funkcija toupper povecava g, trebamo dobiti G "<<endl;
    cout<<toupper('g')<<endl;
    cout<<"Spremimo funkciju u int i, zatim char c6=i1, pa pokusajmo cout<<c6 "<<endl;
    int i1=toupper('g');
    char c6=i1;
    cout<<c6<<endl;


    return 0;
}
