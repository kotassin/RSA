
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <cstdio>

using namespace std;

int main() {
	long p, q, m, f, Ea;
	cout << " Please, input p and q: ";
	cin >> p; cin >> q;

	m = p*q;
	cout << " Module m = " << m << endl;

	f = (p - 1)*(q - 1);
	cout << " F(m) = " << f << endl;

	cout << " Please, input Ea:";
	cin >> Ea;

//обычный алгоритм Евклида через остатки
long Nod(long a, long b){
		while (a && b)
			if (a >= b)
				a %= b;
			else
				b %= a;
		return a | b;
}

	system("pause");
	return 0;
}