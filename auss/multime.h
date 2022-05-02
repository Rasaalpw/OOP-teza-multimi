#include <iostream>
#define NM 1001

using namespace std;

class multime
{
private:
    int n,*a; ///n=numarul de elemente
    ///a=elementele

public:
    ///constructor
    multime();

    ///operatorul supraincarcat de citire
    friend istream &operator>> (istream &is, multime&A);

    ///operatorul supraincarcat de afisare
    friend ostream &operator << (ostream &os, multime&A);

    ///getNr= folosim pentru a afla nr de elemente din multimi
    int getNr();

    ///constructor de copiere
    multime(const multime &M);

    ///destructor
    ~multime();

    ///reuniunea
    multime operator + (const multime &obj);

    ///intersectie
    multime operator * (const multime &obj);

    ///diferenta
    multime operator - (const multime &obj);

    ///apartenenta
    void apar(const int &x);

    ///incluziunea
    bool operator < (const multime &obj);

    ///egalitatea
    bool operator == (const multime &obj);
};
