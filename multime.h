#pragma once
#include <iostream>
#include <fstream>
using namespace std;
class multime
{
public:
	int v[10001], n;
	multime();
	multime(const multime&);
	~multime();
	int getNr();
	void operator +(const multime&);
	void operator -(const multime&);
	void operator *(const multime&);
	void operator +=(int x);
	void afisare();
	bool operator <(const multime&);
	bool operator ==(const multime&);
	bool verif(int x);
	friend istream& operator>>(istream& is, multime&);
	friend ostream& operator<<(ostream& os, multime&);

};