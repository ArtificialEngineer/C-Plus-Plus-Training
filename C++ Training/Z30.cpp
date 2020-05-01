/* 30) Napišite koji ispis na ekranu nastaje nakon izvršenja segmenta programa:
string word;
word = "predmet";
int num = 3;
cout << "1) " << num / 2 << "+" << num % 2 << endl;
cout << "2) " << 9 << "9" << 6 + num << endl;
cout << "3) " << word.substr(word.find("re"),3) << "ov" << endl;*/


#include <iostream>
#include <stdlib.h>
#include<string>     /* atof */


using namespace std;







// '122'
int main(){
    string word;
    //  0123456
word = "predmet";

cout << "3) " << word.substr(1,3) << "ov" << endl;



string word1 = "Prvi pljesak!";
cout << word1.substr( 0, 6 ) << endl;

string word3;
word3 = "omiljeni predmet";
cout<<word3.length()<<endl;
cout << word3.substr(9,4) << endl;
}


