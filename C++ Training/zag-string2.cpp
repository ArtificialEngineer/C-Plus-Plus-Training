#include <iostream>
#include <string>
using namespace std;

void appendfun(){


string s1, s2, s3, s4, s5;
     int subpos, sublen;
     s1="FK teleoptik je najbolji na svijetu.";

     cout<<"append() funkcija. Prosiruje kraj stringa, s1=Teleoptik ."<<endl<<endl;
     cout<<"1. append() funkcija. Prima jedan argument, string s2."<<endl;
     cout<<"Upisite s2, koji ce se nadodati na s1."<<endl;
     cin>>s2;
     s1.append(s2);
     cout<<"Ispis stringa s1 nakon zamjene sa s2."<<endl;
     cout<<s1<<endl<<endl;

     cout<<"2. append() funkcija. Prima tri argumenta, string s3, subpos i sublen."<<endl;
     cout<<"Upisite s3."<<endl<<endl;
     cin>>s3;
     cout<<endl;
     cout<<"Subpos: pocetni indeks dijela stringa s3, koji ce se nadodati na kraj od s1."<<endl;
     cout<<"Sublen: broj znakova stringa s3 koji ce se nadodati na s1."<<endl<<endl;
     cout<<"Upisite subpos i sublen. "<<endl;
     cin>>subpos;
     cin>>sublen;
     cout<<endl;
     s1.append(s3,subpos,sublen);
     cout<<s1<<endl<<endl;

     cout<<"3. append() funkcija. Prima dva argumenta,";
     cout<<"string -zasto ovako- i sublen "<<endl;
     cout<<"Upisite sublen. "<<endl;
     cin>>sublen;
     cout<<endl;
     s1.append("zasto ovako",sublen);
     cout<<s1<<endl<<endl;
     //Zasto ne mogu staviti s4 i subpos kao argumente?

     cout<<"4. append() funkcija. Prima dva argumenta,"<<endl;
     cout<<"int n i char c. "<<endl;
     cout<<"Int n: kolicina nekog znaka kojeg zelimo dodati na kraj stringa."<<endl;
     cout<<"Char c: to je maloprije spomenuti -neki znak-. "<<endl<<endl;
     int n;
     char c;
     cout<<"Upisite int n: "<<endl;
     cin>>n;
     cout<<"Upisite char c: "<<endl;
     cin>>c;
     cout<<endl;
     s1.append(n,c);
     cout<<s1<<endl<<endl;

     cout<<"5. append() funkcija. Prima dva argumenta,"<<endl;
     cout<<"int first i int last. "<<endl;
     cout<<"Int first i last: oznacavaju pocetno i zavrsno mjesto"<<endl;
     cout<<"dijela stringa s5 kojeg cemo dodati na s1."<<endl<<endl;
     cout<<"Npr. s1.append(s5.begin()+x, s5.end())"<<endl;
     cout<<"Moze i. s1.append(s5.begin()+x, s5.end()-y)"<<endl;
     cout<<"Upisite string s5."<<endl;
     cin>>s5;
     int x, y;
     cout<<"Upisite int x: "<<endl;
     cin>>x;
     cout<<"Upisite char y: "<<endl;
     cin>>y;
     cout<<endl;
     s1.append(s5.begin()+x,s5.end()-y);
     cout<<s1<<endl<<endl;

}


void assignfun(){

string s1, s2, s3, s4, s5;

     int subpos, sublen;


     cout<<"assign() funkcija. Potpuno zamjenjuje izabrani string s1. "<<endl;
     cout<<"Upisite s1."<<endl;
     cin>>s1;
     cout<<"1. assign() funkcija. Prima jedan argument, string s2."<<endl;
     cout<<"Upisite s2, koji ce potpuno zamijeniti s1."<<endl;
     cin>>s2;
     s1.assign(s2);
     cout<<"Ispis stringa s1 nakon zamjene sa s2."<<endl;
     cout<<s1<<endl<<endl;

     cout<<"2. assign() funkcija. Prima tri argumenta, string s3, subpos i sublen."<<endl;
     cout<<endl;
     cout<<"Subpos: pocetni indeks dijela stringa s3, koji ce zamijeniti s1."<<endl;
     cout<<"Sublen: broj znakova stringa s3 koji ce zamijeniti s1."<<endl<<endl;
     cout<<"Upisite s3."<<endl<<endl;
     cin>>s3;
     cout<<"Upisite subpos i sublen. "<<endl;
     cin>>subpos;
     cin>>sublen;
     cout<<endl;
     s1.assign(s3,subpos,sublen);
     cout<<s1<<endl<<endl;

     cout<<"3. assign() funkcija. Prima dva argumenta,";
     cout<<"string -zasto ovako- i sublen "<<endl;
     cout<<"Upisite sublen. "<<endl;
     cin>>sublen;
     cout<<endl;
     s1.assign("zasto ovako",sublen);
     cout<<s1<<endl<<endl;
     //Zasto ne mogu staviti s4 i subpos kao argumente?

     cout<<"4. assign() funkcija. Prima dva argumenta,"<<endl;
     cout<<"int n i char c. "<<endl;
     cout<<"Int n: kolicina nekog znaka kojim cemo zamijeniti sadrzaj iz s1."<<endl;
     cout<<"Char c: to je maloprije spomenuti -neki znak-. "<<endl<<endl;
     int n;
     char c;
     cout<<"Upisite int n: "<<endl;
     cin>>n;
     cout<<"Upisite char c: "<<endl;
     cin>>c;
     cout<<endl;
     s1.assign(n,c);
     cout<<s1<<endl<<endl;

     cout<<"5. assign() funkcija. Prima dva argumenta,"<<endl;
     cout<<"int first i int last. "<<endl;
     cout<<"Int first i last: oznacavaju pocetno i zavrsno mjesto"<<endl;
     cout<<"dijela stringa s5 im cemo zamijeniti sadrzaj iz s1."<<endl<<endl;
     cout<<"Npr. s1.assign(s5.begin()+x, s5.end())"<<endl;
     cout<<"Moze i. s1.assign(s5.begin()+x, s5.end()-y)"<<endl;
     cout<<"Upisite string s5."<<endl;
     cin>>s5;
     int x, y;
     cout<<"Upisite int x: "<<endl;
     cin>>x;
     cout<<"Upisite char y: "<<endl;
     cin>>y;
     cout<<endl;
     s1.assign(s5.begin()+x,s5.end()-y);
     cout<<s1<<endl<<endl;


}

void comparefun(){

string s1, s2, s3, s4, s5;

     int subpos, sublen;


     cout<<"compare() funkcija. Usporedjuje sadrzaj stringova ili substringova. "<<endl;
     cout<<"Povratni tip 0: stringovi su isti. "<<endl;
     cout<<"Povratni manji od 0: s2 je kraci ili je prvi razlicit znak u s2 manji od onog u s1. "<<endl;
     cout<<"Povratni tip veci od 0: s2 je dulji, ili je prvi razlicit znak u s2 veci od onog u s1."<<endl<<endl;

     cout<<"1. compare() funkcija. Prima jedan argument, string s2."<<endl;
     cout<<"Upisite s1."<<endl;
     cin>>s1;
     cout<<"Upisite s2, kojeg cemo usporediti sa s1."<<endl<<endl;
     cin>>s2;
     cout<<"Usporedba pomocu if izjave."<<endl;
     if(s1.compare(s2)==0){

        cout<<"Stringovi su isti. Povratni tip je 0. "<<endl<<endl;

     }

     else if(s1.compare(s2)<0){

        cout<<"Stringovi nisu isti. Povratni tip je manji od 0. "<<endl<<endl;

     }

     else if(s1.compare(s2)>0){

        cout<<"Stringovi nisu isti. Povratni tip je veci od 0. "<<endl<<endl;

     }

     cout<<"2. compare() funkcija. Prima tri argumenta, , subpos, sublen, string s3."<<endl;
     cout<<endl;
     cout<<"Subpos: pocetni indeks dijela stringa s3, koji se usporedjuje sa s1."<<endl;
     cout<<"Sublen: broj znakova stringa s3 koji s usporedjuje sa s1."<<endl<<endl;
     cout<<"Upisite s3."<<endl<<endl;
     cin>>s3;
     cout<<"Upisite subpos i sublen. "<<endl;
     cin>>subpos;
     cin>>sublen;
     cout<<endl;
     if(s1.compare(subpos,sublen, s3)==0){

            cout<<"String s1 i substring od s3 nisu isti. Povratni tip je 0. "<<endl<<endl;

     }

    else if(s1.compare(subpos,sublen,s3)<0){

            cout<<"String s1 i substring od s3 nisu isti. Povratni tip manji od 0. "<<endl<<endl;

     }

    else if(s1.compare(subpos,sublen,s3)>0){

         cout<<"String s1 i substring od s3 nisu isti. Povratni tip je veci od 0. "<<endl<<endl;

     }



     cout<<"3. compare() funkcija. Prima pet argumenata,"<<endl;
     cout<<"pos, len, string s4, subpos sublen=npos. "<<endl;
     cout<<"Usporeðujemo substring s1 odredjen s pos i len,"<<endl;
     cout<<"sa substringom od s4, odredjen s subpos i sublen."<<endl<<endl;
     cout<<"Upisite string s4."<<endl;
     cin>>s4;
     int pos, len;
     cout<<"Upisite pos: "<<endl;
     cin>>pos;
     cout<<"Upisite len: "<<endl;
     cin>>len;
     cout<<"Upisite subpos: "<<endl;
     cin>>subpos;
     cout<<"Upisite sublen: "<<endl;
     cin>>sublen;



     if((pos, len, s4, subpos,sublen)==0){

            cout<<"String s1 i substring od s3 nisu isti. Povratni tip je 0. "<<endl<<endl;

     }

    else if((pos, len, s4, subpos,sublen)<0){

            cout<<"String s1 i substring od s3 nisu isti. Povratni tip manji od 0. "<<endl<<endl;

     }

    else if((pos, len, s4, subpos,sublen)>0){

         cout<<"String s1 i substring od s3 nisu isti. Povratni tip je veci od 0. "<<endl<<endl;

     }



}

void copyfun(){

string s1, s2;
cout<<"copy() funkcija. Kopira substring. "<<endl;

cout<<"1. compare() funkcija. Prima tri argumenta, char c[x], len, pos."<<endl;
cout<<"c: niz znakova. "<<endl;
cout<<"Len: broj znakova koje kopiramo. "<<endl;
cout<<"Pos: pocetno mjesto od kojeg kopiramo. "<<endl;
     cout<<"Upisite s1."<<endl;
     cin>>s1;
     cout<<"Upisite velicinu niza znakova x."<<endl;
     int x;
     cin>>x;
     cout<<"Upisite len."<<endl;
     int len;
     cin>>len;
     cout<<"Upisite pos."<<endl;
     int pos;
     cin>>pos;

     char c[x];

     cout<<"Ispis znakova kopiranih u c[x], preko for petlje."<<endl;
     s1.copy(c, len, pos);

     for(int i=0; i<x; i++){

        cout<<c[i]<<" ";
     }





}

void erasefun(){

ponovno:
string s1, s2, s3;
cout<<"erase() funkcija. Brise znakove u stringu. "<<endl<<endl;

cout<<"1. erase() funkcija. Briše dio stringa, odredjen argumentima pos i len"<<endl;
cout<<"Pos: pocetno mjesto od kojeg brisemo. "<<endl;
cout<<"Len: broj znakova koje brisemo. "<<endl<<endl;

cout<<"Upisi string s1. "<<endl;
cin>>s1;
cout<<"Upisi pos. "<<endl;
int pos;
cin>>pos;
cout<<"Upisi len. "<<endl;
int len;
cin>>len;
s1.erase(pos, len);
cout<<"Ispis stringa s1 nakon brisanja: "<<endl;
cout<<s1<<endl;

/*cout<<"2. erase() funkcija. Brise znak u stringu, odredjen argumentom p."<<endl;
cout<<"P: mjesto na kojem kojem brisemo znak. "<<endl<<endl;

cout<<"Upisi string s2. "<<endl;
cin>>s2;
cout<<"Upisi p "<<endl;
int p;
cin>>p;
s2.erase(p);
cout<<"Ispis stringa s2 nakon brisanja: "<<endl;
cout<<s2<<endl;*/



cout<<"3. erase() funkcija. Brise znak u stringu,"<<endl;
cout<<" odredjena iteratorskim intervalom [first, last)"<<endl;
cout<<"first: mjesto do kojeg brisemo. "<<endl;
cout<<"last: mjesto od kojeg brisemo. "<<endl;
cout<<"Npr. erase (str.begin()+x, str.end()-y)  "<<endl<<endl;

cout<<"Upisi string s3. "<<endl;
cin>>s3;
cout<<"Upisi x "<<endl;
int x;
cin>>x;
cout<<"Upisi y "<<endl;
int y;
cin>>y;
s3.erase (s3.begin()+x, s3.end()-y);
cout<<"Ispis stringa s3 nakon brisanja: "<<endl;
cout<<s3<<endl<<endl<<endl;

/*cout<<"Funkcija je gotova."<<endl;
cout<<"Ponavljanje ove funkcije: 1"<<endl;
cout<<"Povratak na pocetni izbornik: 2"<<endl;
int m;
cin>>m;
switch(m){
case 1:
    goto ponovno;
    break;
case 2:

    break;

}*/

}

void findfun(){

ponovno:
string s1, s2, s3;
cout<<"find() funkcija. Trazi prvu pojavu nekog stringa ili znaka, u drugom stringu. "<<endl;
cout<<"Ukoliko pronadje zeljeni string/znak. "<<endl;
cout<<"vraca indeks pocetka stringa ili indeks znaka gdje je pronadjen. "<<endl;
cout<<"Ukoliko nije pronadjen, vraca se brojcana konstanta npos, definirana u string zaglavlju. "<<endl;
cout<<"npos je u ovom slucaju 4294967295"<<endl<<endl;
cout<<"1. find() funkcija. Prima argumente str i pos=0."<<endl;
cout<<"Str: string s2 kojeg potrazujemo. "<<endl;
cout<<"Pos: mjesto u s1 od kojeg potrazujemo s2. "<<endl<<endl;


cout<<"Upisi string s1 "<<endl;
cin>>s1;
cout<<"Upisi string s2 "<<endl;
cin>>s2;
cout<<"Upisi pos "<<endl<<endl;
int pos=0;
cin>>pos;


//size_t z = s1.find(s2,pos);
if(s1.find(s2, pos)== 4294967295){
cout<<"String s2 nije pronadjen u stringu s1: "<<endl<<endl;}
else{cout<<"String s2 je pronadjen u stringu s1 na mjestu: "<<s1.find(s2, pos)<< endl<<endl;}


cout<<"find_first_of() funkcija, u nekom stringu s1, trazi BILO KOJI znak iz stringa s2,"<<endl;
cout<<"i vraca indeks na kojem je pronadjen prvi znak koji se podudara."<<endl;
cout<<"find_last_of() cini isto, samo sa straznje strane stringa s1."<<endl;
cout<<"Argumenti su kao i kod funckije find()."<<endl<<endl;

cout<<"1. find_first_of() funkcija. Prima argumente str i pos=0."<<endl;
cout<<"Str: znakovi iz s2 ciju prvu pojavu potrazujemo. "<<endl;
cout<<"Pos: mjesto u s1 od kojeg potrazujemo neki od znakova iz s2. "<<endl<<endl;


cout<<"Upisi string s1 "<<endl;
cin>>s1;
cout<<"Upisi string s2 "<<endl;
cin>>s2;
cout<<"Upisi pos "<<endl<<endl;
cin>>pos;

if(s1.find_first_of(s2, pos)== 4294967295){
cout<<"Nijedan znak stringa s2 nije pronadjen u stringu s1: "<<endl<<endl;}
else{
cout<<"Neki znak stringa s2 je pronadjen u stringu s1 na mjestu: "<<s1.find_first_of(s2, pos)<< endl<<endl;}

cout<<"find_first_not_of() funkcija, u nekom stringu s1, trazi BILO KOJI znak kojeg nema u stringu s2,"<<endl;
cout<<"i vraca indeks na kojem je pronadjen prvi znak koji se ne podudara."<<endl;
cout<<"find_last_not_of() cini isto, samo sa straznje strane stringa s1."<<endl;
cout<<"Argumenti su kao i kod funckije find()."<<endl<<endl;

cout<<"1. find_first_not_of() funkcija. Prima argumente str i pos=0."<<endl;
cout<<"Str: znakovi iz s2 ciju prvu nepojavnost potrazujemo. "<<endl;
cout<<"Pos: mjesto u s1 od kojeg potrazujemo nepostojanje nekog od znakova iz s2. "<<endl<<endl;


cout<<"Upisi string s1 "<<endl;
cin>>s1;
cout<<"Upisi string s2 "<<endl;
cin>>s2;
cout<<"Upisi pos "<<endl;
cin>>pos;

if(s1.find_first_not_of(s2, pos)== 4294967295){
cout<<"Ne postoji znak u stringu s1 kojeg nema u stringu s2.: "<<endl;}
else{cout<<"Znak iz stringa s1 kojeg nema u stringu s2 je pronadjen na mjestu: "<<s1.find_first_not_of(s2, pos)<< endl;}
}

void insertfun(){

string s1, s2, s3, s4, s5;
cout<<"insert() funkcija umece dodatne znakove u string, na mjesto pos-1."<<endl<<endl;

cout<<"1. insert() funkcija, prima dva argumenta. pos i s2."<<endl;
cout<<"pos: mjesto u s1 na koje zelimo umetnuti s2."<<endl;
cout<<"Upisite s1."<<endl;
cin>>s1;
cout<<"Upisite s2."<<endl;
cin>>s2;
cout<<"Upisite pos."<<endl;
int pos;
cin>>pos;
cout<<s1.insert(pos, s2)<<endl<<endl;

cout<<"2. insert() funkcija, prima četiri argumenta. pos, s3, subpos i sublen=npos."<<endl;
cout<<"pos: mjesto u s1 na koje zelimo dio stringa umetnuti s3."<<endl;
cout<<"subpos: mjesto u s3 od kojeg zapocinje izdvajanje substringa.."<<endl;
cout<<"sublen: broj znakova koje izdvajamo iz stringa s3 i ubacujemo u s1"<<endl<<endl;
cout<<"Upisite s1."<<endl;
cin>>s1;
cout<<"Upisite s3."<<endl;
cin>>s3;
cout<<"Upisite pos."<<endl;
cin>>pos;
cout<<"Upisite subpos."<<endl;
int subpos;
cin>>subpos;
cout<<"Upisite sublen."<<endl;
int sublen;
cin>>sublen;


cout<<"3. insert() funkcija, prima tri argumenta. pos, -string bez veze-, n."<<endl;
cout<<"pos: mjesto u s1 na koje zelimo umetnuti dio stringa -string bez veze-."<<endl;
cout<<"n: broj znakova stringa s4 koje zelimo ubaciti u s1."<<endl<<endl;

cout<<"Upisite s1."<<endl;
cin>>s1;
cout<<"Upisite pos."<<endl;
cin>>pos;
cout<<"Upisite n."<<endl;
int n;
cin>>n;
cout<<s1.insert(pos, "string bez veze", n)<<endl<<endl;

cout<<"4. insert() funkcija, prima dva argumenta. pos, -neki string-"<<endl;
cout<<"pos: mjesto u s1 na koje zelimo umetnuti dio stringa -neki string-."<<endl<<endl;


cout<<"Upisite s1."<<endl;
cin>>s1;
cout<<"Upisite pos."<<endl;
cin>>pos;
cout<<s1.insert(pos, "neki string")<<endl<<endl;


cout<<"5. insert() funkcija, prima tri argumenta. pos, int n, char c"<<endl;
cout<<"pos: mjesto u s1 na koje zelimo umetnuti neki znak."<<endl;
cout<<"c: spomenuti znak kojeg zelimo umetnuti."<<endl;



cout<<"Upisite s1:"<<endl;
cin>>s1;
cout<<"Upisite pos."<<endl;
cin>>pos;
cout<<"Upisite n:"<<endl;
cin>>n;

cout<<"Upisite c:"<<endl;
char c;
cin>>c;
cout<<s1.insert(pos, n, c)<<endl<<endl;

/*cout<<"6. insert() funkcija, prima dva argumenta. [first, last) "<<endl;
cout<<"pos: mjesto u s1 na koje zelimo umetnuti neki znak."<<endl;
cout<<"c: spomenuti znak kojeg zelimo umetnuti."<<endl;



cout<<"Upisite s1:"<<endl;
cin>>s1;
cout<<"Upisite pos."<<endl;
cin>>pos;
cout<<"Upisite n:"<<endl;
cin>>n;

cout<<"Upisite c:"<<endl;
char c;
cin>>c;
cout<<s1.insert(pos, n, c)<<endl<<endl;*/
}

void resizefun()
{
    cout<<"resize() funkcija. Mijenja duljinu stringa na vise ili manje znakova."<<endl;
cout<<"Nema povratnog tipa. "<<endl;
cout<<"Prima jedan ili dva argumenta, int n i char c.  "<<endl;
cout<<"n: nova duljina stringa koju zelimo."<<endl;
cout<<"c: ako je nova duljina stringa s1 veca od stare,"<<endl;
cout<<"tada se prazna mjesta popune zeljenim znakom c."<<endl<<endl;

  cout<<"Upisi string s1:"<<endl;
  string s1;
  cin>>s1;
  cout<<"Upisi int n:"<<endl;
  int n;
  cin>>n;

  if(n>s1.length()){
  cout<<"Broj n je veci od duljine stringa s1."<<endl;
  cout<<"Pozvat cemo funkciju s dva argumenta."<<endl;
  cout<<"Za to je potrebno jos upisati char c."<<endl;
  cout<<"Upisi char c:"<<endl;
  char c;
  cin>>c;
  s1.resize(n,c);
  cout<<s1<<endl;
}
else{

    cout<<"Broj n je manji ili jednak od duljine stringa s1."<<endl;
  cout<<"Pozvat cemo funkciju s jednim argumentom."<<endl;
  s1.resize(n);
  cout<<s1<<endl;
}

}

void substringfun(){

cout<<"substring() funkcija, stvara string s2 koji je dio stringa s1."<<endl;
cout<<"Prima jedan ili dva argumenta: pos=0, len=npos."<<endl;
cout<<"pos: mjesto u stringu s1 od kojeg substring počinje. Defaultno mjesto je 0."<<endl;
cout<<"len: duljina znakova koje zelimo uzeti u substring. Defaultna duljina je do kraja stringa s1."<<endl;
cout<<endl;
cout<<"Upisite string s1:"<<endl;
string s1, s2;
cin>>s1;

cout<<"Upisite pos:"<<endl;
int pos;
cin>>pos;

cout<<"Upisite len:"<<endl;
int len;
cin>>len;

cout<<"Ispis stringa s2=s1.substr(pos, len):"<<endl;
s2=s1.substr(pos, len);
cout<<s2<<endl;

}

void getlinefun(){

cout<<"getline() funkcija, moze ucitavati stringove s razmakom.."<<endl;
cout<<"Moze imati oblik: getline(cin, varijabla) ili cin.getline(objekt, varijabla)."<<endl<<endl;

string s1, s2;
cout<<"Upisite s1:"<<endl;
//getline(cin, s1);
cin.ignore();
getline(cin, s1);
cout<<"Poziv getline(cin, s1)"<<endl;
cout<<"Ispis s1:"<<endl;
cout<<s1<<endl<<endl;
cout<<"Novi"<<endl;
char novi[20];
cin.getline(novi, 10);
cout<<novi<<endl;

cout<<"Zasto je u programu potrebno koristititi cin.ignore(), prije poziva getline funkcije?"<<endl;







}
 int main()
{

        cout<<"Upisite broj funkcije koju zelite vjezbati: "<<endl<<endl;

        cout<<"1: append"<<endl<<"2: assign"<<endl<<"3: compare "<<endl;
        cout<<"4: copy"<<endl<<"5: erase"<<endl<<"6: find, ";
        cout<<" find_first_of, find_first_not_of, "<<endl;
        cout<<"find_last_of, find_last_not_of"<<endl;
        cout<<"7: insert "<<endl<<"8: resize "<<endl<<"9: substring"<<endl;
        cout<<"10: getline "<<endl;
        int fun;
        cin>>fun;
        switch (fun){
        case 1:
        appendfun();
        cout<<endl<<endl;
        break;

        case 2:
        assignfun();
        cout<<endl<<endl;
        break;

        case 3:
        comparefun();
        cout<<endl<<endl;
        break;

        case 4:
        copyfun();
        cout<<endl<<endl;
        break;

        case 5:
        erasefun();
        cout<<endl<<endl;
        break;

        case 6:
        findfun();
        cout<<endl<<endl;
        break;

        case 7:
        insertfun();
        cout<<endl<<endl;
        break;

        case 8:
        resizefun();
        cout<<endl<<endl;
        break;

         case 9:
        substringfun();
        cout<<endl<<endl;
        break;

         case 10:
        getlinefun();
        cout<<endl<<endl;
        break;

        default: cout<<"Nemoj me zajebavat, utipkaj normalan broj."<<endl;




    }


    return 0;
}
