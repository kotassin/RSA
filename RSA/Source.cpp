
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <cstdio>

using namespace std;

int main() {
	int p, q, m, f;
	cout << " Please, input p and q: ";
	cin >> p; cin >> q;

	m = p*q;
	cout << " Module m = " << m << endl;

	f = (p - 1)*(q - 1);
	cout << " F(m) = " << f << endl;

	cout << " Please, input Ea:"
	system("pause");
	return 0;
}