#include "pch.h"
#include <iostream>
#include <iomanip>
const int it = 10;
using namespace std;
int XX = 7,max=7;
int a[it + 1] = { 0,1,1,7,7,5,6,6 };
int b[it + 3] = { 0 };
int main()
{
	cout << "How many pieces does your code have? : ";
	cin >> XX;
	cout << "Now enter your code:"<<endl;
	cin >> a[1];
	max = a[1];
	for (int i = 2; i <= XX; i++) {
		cin >> a[i];
		if (a[i] > max) {
			max = a[i];
		}
	}
	for (int i = 1; i <= max + 2;i++) {
		b[i] = i;
	}
	b[max + 3] = max + 2;
	cout << "-----------------------------------------------------" << endl;
	//cout << "row    profer           V             E" << endl;
	int c=0;
	int H = 0;
	for (int t = 0; t <= XX;t++) {
		cout << setfill(' ') << setw(4) << t+1<< setfill(' ') << setw(3)<<" ";
		for (int i = 1+t; i <=XX; i++) {
			if (a[i] != -87654) {
				cout << a[i] ;
			}
		}
		cout << "      ";
		for (int y = 1; y < H+1; y++) {
			cout << " ";
		}
		for (int i = 1; i <= XX + 2; i++) {
			if (b[i] != -87654) {
				cout << b[i];
			}
		}
		cout << "       ";
	f:		c++;
		int u;
		for (u = 1; u <= XX; u++) {
			if (a[u] == b[c]) {
				goto f;
			}
			else{}
		}
		cout << "  ";
		for (int y = 1; y < H+1; y++) {
			cout << " ";
		}
		H++;
        cout << b[c] << a[H];
		b[c] = -87654;
		a[H] = -87654;
		c = 0;
		cout << endl;
	}
}