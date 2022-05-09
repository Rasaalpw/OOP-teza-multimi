
#include <iostream>
#include "multimi.h"
using namespace std;

multime::multime()
{
	n = 0;
}

multime::multime(const multime& A)
{
	n = A.n;
	for (int i = 0; i <= 1000; i++)
		c[i] = A.c[i];
}
/*

multime::~multime()
{
	for (int i = n - 1; i >= 0; i--)
		c[i] = 0;
	this->n = 0;
}

int multime::getNr()
{
	int nr = 0;
	for (int i = 0; i <= n - 1; i++)
		if (this->v[i] == 1)
			nr++;
	return nr;
}
*/
multime operator+(multime& A,multime &B)
{
    multime rez;
    for(int i=0;i<=1000;i++)
        rez.c[i]=0;
    for(int i=0;i<=1000;i++)
        rez.c[i]=A.c[i] | B.c[i];
    rez.n=0;
    for(int i=0;i<=1000;i++)
        if(rez.c[i]==1)
            rez.n++;
    return rez;

}

multime operator-(multime &A,multime& B)
{
	multime rez;

	for(int i=0;i<=1000;i++)
        rez.c[i] = 0;
    for(int i = 0;i<=1000;i++)
        rez.c[i] = A.c[i] != B.c[i];
    rez.n = 0;
    for(int i=0;i<=1000;i++)
        if(rez.c[i] == 1)
        rez.n++;
    return rez;
}
multime operator*(multime& A,multime &B)
{
    multime rez;

	for(int i=0;i<=1000;i++)
        rez.c[i] = 0;
    for(int i = 0;i<=1000;i++)
        rez.c[i] = A.c[i] & B.c[i];
    rez.n = 0;
    for(int i=0;i<=1000;i++)
        if(rez.c[i] == 1)
        rez.n++;
    return rez;
    }
/*
bool multime::verif(int x)
{
	if (x < n && this->v[x] == 1)
		return true;
	return false;
}

bool multime::operator<(const multime& B)
{
	int i;
	for (i = 0; i <= n - 1; i++)
		if (this->v[i] == 1 && B.v[i] == 0)
			return false;
	return true;
}

bool multime::operator==(const multime& B)
{
	int maxx, i;
	if (B.n > this->n)
		maxx = B.n;
	else
		maxx = this->n;

	for (int i = 0; i < maxx; i++)
		if (this->v[i] + B.v[i] == 1) ///"i" apare intr-o singura multime
			return false;
	return true;
}

void multime::operator+=(int x)
{
	if (x >= n)
		n = x + 1;
	v[x] = 1;
}

void multime::afisare()
{
	for (int i = 0; i < n; i++)
		if (this->v[i] == 1)
			cout << i << ' ';
	cout << '\n';
}
*/
istream& operator>>(istream& is, multime& A)
{

	is >> A.n;
	int i, x;
	for(i=0;i<=1000;i++)
        A.c[i] = 0;

    for(i=0;i<A.n;i++)
    {
        is >> x;
        A.c[x] = 1;
    }
    return is;
}

ostream& operator<<(ostream& os, multime& A)
{

	for(int i=0;i<1000;i++)
    {
       if(A.c[i]==1)
        os << i << " ";
    }
	return os;
}
