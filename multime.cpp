#include <iostream>
#include "Multime.h"
using namespace std;

multime::multime()
{
	this->n = 0;
	for (int i = 0; i <= 9999; i++)
	{
		v[i] = 0;
	}
}

multime::multime(const multime& C)
{
	this->n = C.n;
	for (int i = 0; i < n; i++)
		this->v[i] = C.v[i];
}

multime::~multime()
{
	for (int i = n - 1; i >= 0; i--)
		v[i] = 0;
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

void multime::operator+(const multime& B)
{
	if (this->n < B.n)
		this->n = B.n;
	for (int i = 0; i <= n - 1; i++)
		if (B.v[i] == 1)
			this->v[i] = 1;
}

void multime::operator-(const multime& B)
{
	for (int i = 0; i <= n - 1; i++)
		if (B.v[i] == 1)
			this->v[i] = 0;
}

void multime::operator*(const multime& B)
{
	int maxx = 0;
	if (B.n > this->n)
		maxx = B.n;
	else
		maxx = this->n;

	for (int i = 0; i < maxx; i++)
		if ((this->v[i] != 1 || B.v[i]) == 0)
			this->v[i] = 0;
}

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

istream& operator>>(istream& is, multime& B)
{
	int x, nrEl;
	B.n = 0;
	is >> nrEl;
	for (int i = 0; i < nrEl; i++)
	{
		is >> x;
		B.v[x] = 1;
		if (x > B.n)
			B.n = x + 1;
	}
	return is;
}

ostream& operator<<(ostream& os, multime& B)
{
	///os << B.n << '\n';
	int cnt = 0;
	for (int i = 0; i < B.n; i++)
		if (B.v[i] == 1)
			cnt++;
	os << cnt << '\n';
	for (int i = 0; i <= B.n; i++)
		if (B.v[i] == 1)
			os << i << ' ';
	return os;
}