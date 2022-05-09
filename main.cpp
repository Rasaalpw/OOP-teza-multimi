#include <iostream>
#include<fstream>
#include "multime.h"
using namespace std;
ifstream fin("date.in");
ofstream fout("date.out");
int main()
{
    char raspuns;
    multime A, B, C;
    A += 1;
    A += 3;
    A += 7;
    A += 5;
    A += 9;





    B += 1;
    B += 3;
    B += 7;
    B += 5;
    B += 9;
    B += 10;
    while (true)
    {
        cout << '\n';
        cout << "Multimea A: " << endl;
        cout << A << endl;
        cout << "Multimea B: " << endl;
        cout << B << endl;
        cout << '\n';
        cout << "a)   Afisarea numarului de elemente din multimea A.\n" << endl;
        cout << "b)   Reuniunea multimilor A si B.\n" << endl;
        cout << "c)   Diferenta multimilor A si B.\n" << endl;
        cout << "d)   Intersectia multimilor A si B.\n" << endl;
        cout << "e)   Verificarea daca un numar apartine multimii A.\n" << endl;
        cout << "f)   Verificarea daca multimea A este inclusa in multimea B." << endl << "(se afiseaza 1 pentru raspuns AFIRMATIV sau 0 pentru raspuns NEGATIV)\n" << endl;
        cout << "g)   Verificarea daca multimea A este egala cu multimea B." << endl << "(se afiseaza 1 pentru raspuns AFIRMATIV sau 0 pentru raspuns NEGATIV)\n" << endl;
        cout << "h-z) Iesirea din program\n" << endl;
        cout << "Alegeti una din operatiile de mai sus pe care o doriti sa o faceti cu aceste multimi A si B\n " << endl;
        cin >> raspuns;
        if (!(raspuns >= 'a' && raspuns <= 'z'))
        {
            cout << "Nu este o optiune valida!" << endl;
            continue;
        }
        else if (raspuns == 'a')
        {
            cout << "Numarul de elemente ale multimii A este: " << A.getNr() << endl;
        }
        else if (raspuns == 'b')
        {
            C = A;
            C + B;
            cout << C << endl; //Am pus si o metoda C.afisare() cu care sa ma verific.
        }
        else if (raspuns == 'c')
        {
            C = A;
            C - B;
            cout << C;

        }
        else if (raspuns == 'd')
        {
            C = A;
            C* B;
            cout << C << endl;

        }
        else if (raspuns == 'e')
        {
            int x;
            cout << "Introduceti numarul pe care doriti sa il verificati daca exista in multimea A: ";
            cin >> x;
            C = A;
            cout << C.verif(x) << endl; //0=false ;1=true
        }
        else if (raspuns == 'f')///eroare
        {
            C = A;
            cout << (C < B) << endl;//0=false ;1=true
        }
        else if (raspuns == 'g')
        {
            C = A;
            cout << (C == B) << endl;//0=false ;1=true
        }
        else break;
    }
    return 0;
}
