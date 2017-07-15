
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <cstdio>
#include <math.h>

using namespace std;

long toEncrypt (long message,long e, long mod){
	long acc = 1, z = message % mod;
	while (e) {
		if (e& 1)
			acc = (acc * z) % mod;
		z = (z * z) % mod;
		e >>= 1;
	}
	cout << " Message: " << acc;
	return acc;
}

	
long toDecrypt(long message, long d, long mod) {
		long acc = 1, z = message % mod;
		while (d) {
			if (d & 1)
				acc = (acc * z) % mod;
			z = (z * z) % mod;
			d >>= 1;
		}
		cout << " Message: " << acc;
		return acc;
}


int main() {
	long p, q, m, phi, e;
	cout << "Please, input p: ";
	cin >> p;
	cout << "Please, input q: "; 
	cin >> q;
  
	m = p*q;
	cout <<endl<< " Module m = " << m << endl;

	phi = (p - 1)*(q - 1);
	cout << " Phi(m) = " << phi << endl;

	cout << " Please, input e:";
	cin >> e;

	long message = 7, d = 7, mod = 11;
	toDecrypt (message, d, mod);
	toEncrypt(message, e, mod);

	
	system("pause");
	return 0;
}
