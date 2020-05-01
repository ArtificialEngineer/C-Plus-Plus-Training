/* 57) Deklarirana je klasa Circle, kojom se bilježi radijus kružnice:
class Circle {
public:
Circle() : m_radius(0) {}
void SetRadius(int r) {m_radius = r;};
int GetRadius() {return m_radius;};
Circle& operator++(); //prefiks
Circle operator++(int unused); //postfiks
protected:
int m_radius;
};
bool operator == (Circle &c1, Circle & c2);
Koristeći ovu deklaraciju:
a) Napišite implementaciju operatora ++ za klasu Circle
b) Napišite implementaciju operatora == */

class Circle {
public:
Circle() : m_radius(0) {}

void SetRadius(int r) {m_radius = r;};

int GetRadius() {return m_radius;};

Circle& operator++(); //prefiks

Circle operator++(int unused); //postfiks

protected:

int m_radius;
};
bool operator == (Circle &c1, Circle & c2); //Zašto je ovo izvan klase?


// prefiks operator (nema argument)
Circle& Circle::operator++() {
m_radius++;  // Sada je radijus već uvećan za 1.
return *this;
}
*/// postfiks operator : argument int unused služi kompajleru
*/// da raspozna da je ovo postfix, a ne prefix operator. Zašto mu taj argument pomaže u raspoznavanju?

const Circle Circle::operator++(int unused) {

// služi da privremeno spremimo objekt, tako da nakon inkrementa
// vratimo staro stanje, a ne novo sa inkrementiranim brojačem
Circle temp(*this);
// inkrementiraj radijus
++m_radius;
return temp;  /// Sada vraćamo staro stanje.
/// Ako  negdje upotrijebimo inkrement kao postfiks, npr. k1++, u tom trenutku kompajler mu vraća
/// staru vrijednost radijusa. Vrijednost radijusa se uvećava tek kod početka iduće naredbe.
/// U u prefiks funkciji, uvećana vrijednost radijusa se vraća odmah na mjesto gdje je npr. ++k pozvan.
}
bool operator== (Circle &c1, Circle& c2) {}


int main() {

Circle k1;
float a;
a=3;
k1.SetRadius(a);

k1++;
cout<<k1;
++k1;

cout<<k1;
cout<<k1;

return 0;
}
