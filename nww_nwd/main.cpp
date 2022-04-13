#include<iostream>
using namespace std;



int nwd(int a, int b)
{
	while (a != b) {
		if(b > a) {
			b = b - a;
		}
		else {
			a = a - b;
		}
	}
	return a;
}

int nww(int a, int b) {
	int iloczyn;

	iloczyn = a * b;
	while (a != b) {
		if(a < b) {
			b = b - a;
		}
		else {
			a = a - b;
		}
	}
	int nww = iloczyn / a;
	
	return nww;
}



int main()
{
	int a, b,iloczyn;
	cout << "Podaj liczbe a: ";
	cin >> a;

	cout << "Podaj liczbe b: ";
	cin >> b;

	cout << "NWD z " << a << "," << b << " = " << nwd(a, b) << endl;
	cout << "NWW z " << a << ',' << b << " = " << nww(a, b) << endl;

	return 0;
}
