
#pragma once
#include <iostream>
#include <fstream>
using namespace std;
class multime
{
private:
    int n, c[1001];
public:
	multime();
	multime(const multime&);
	// ~multime();
	//int getNr();
	friend multime operator +(multime &A,multime &B);
	friend multime operator -(multime &A, multime &B);
	friend multime operator *(multime &A,multime &B);
	/*
	multime operator +=(int x);
	void afisare();
	bool operator <(const multime &B);
	bool operator ==(const multime &B);
	bool verif(int x);
	*/
	friend istream& operator>>(istream& is, multime&);
	friend ostream& operator<<(ostream& os, multime&);

};
