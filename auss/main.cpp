#include <iostream>
#include <stdlib.h>
#include "multime.h"
#include <cstring>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char raspuns;
    multime A, B, C = B;
    cout<<"Introduceti numarul de elemente pe care sa il aiba multimea A si elementele acesteia: ";
    cin>>A;
    cout<<"Introduceti numarul de elemente pe care sa il abia multimea B si elementele acesteia: ";
    cin>>B;
    system("CLS");
    while (true)
    {
        cout << "Multimea A: " << endl;
        cout<<A.getNr()<<endl;
        cout << A << endl;
        cout << "Multimea B: " << endl;
        cout<<B.getNr()<<endl;
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
        else if (raspuns == 'A')
        {
            cout << A;
        }
        else if (raspuns == 'B')
        {
            cout << B;
        }
        else if (raspuns == 'AB')
        {
            cout << "A: " << A<<endl;
            cout << "B: " << B;
        }
        else if (raspuns == 'a')
        {
            cout << "Numarul de elemente ale multimii A este: " << A.getNr() << endl;
        }
        else if (raspuns == 'b')
        {
            multime D = A + B;
            cout << D;
        }
        else if (raspuns == 'c')///facut
        {
            multime D = A - B;
            cout << "Elementele care apartin multimii A dar nu apartin multimii B sunt: ";
            if (D.getNr() == 0)
                cout << "nu exista" << endl;
            else
                cout << D << endl;

            multime E = B - A;
            cout << "Elementele care apartin multimii B dar nu apartin multimii A sunt: ";
            if (E.getNr() == 0)
                cout << "nu exista" << endl;
            else
                cout << E << endl;

        }
        else if (raspuns == 'd')///facut
        {
            multime D = A * B;
            cout << endl;
            cout << D << endl;

        }
        else if (raspuns == 'e')///facut
        {
            int x;
            cout << "Introduceti numarul pe care doriti sa il verificati daca exista in multimea A: ";
            cin >> x;
            A.apar(x);
            cout << "A";
            cout << endl;
            B.apar(x);
            cout << "B";
        }
        else if (raspuns == 'f')//facut
        {
            if ((A < B) == 0)
                cout << "A nu este inclus in B";
            else
                cout << "A este inclus in B";
        }
        else if (raspuns == 'g')///facut
        {
            if((A==B)==1)
            cout << "Multimile A si B sunt egale" << endl;
        }
        else break;
        system("CLS");
    }
    return 0;
}
