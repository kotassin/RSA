#include <iostream>
#include <string>

using namespace std;

long GCD(long a, long b) {
		while (a && b)
			if (a >= b)
				a %= b;
			else
				b %= a;
		return a | b;
}
void toCountExtendedEuclid(long a, long b, long *x, long *y, long *d){
	long q, r, x1, x2, y1, y2;
	if (b == 0) {
		*d = a, *x = 1, *y = 0;
		return;
	}

	x2 = 1, x1 = 0, y2 = 0, y1 = 1;

	while (b > 0) {
		q = a / b, r = a - q * b;
		*x = x2 - q * x1, *y = y2 - q * y1;
		a = b, b = r;
		x2 = x1, x1 = *x, y2 = y1, y1 = *y;
	}

	*d = a, *x = x2, *y = y2;
}

long toCode(string message) {
	long coded=1319;

	for (int i = 0; i < message.length; i++){
		coded *= 100;
		coded += toDigital(message[i]);
	}


}
long toDigital(char a) {
	switch (a) {
	case ('a'): {return 1;}
	case ('b'): {return 2; }
	case ('c'): {return 3; }
	case ('d'): {return 4; }
	case ('e'): {return 5; }
	case ('f'): {return 6; }
	case ('g'): {return 7; }
	case ('h'): {return 8; }
	case ('i'): {return 9; }
	case ('j'): {return 10; }
	case ('k'): {return 11; }
	case ('l'): {return 12; }
	case ('m'): {return 13; }
	case ('n'): {return 14; }
	case ('o'): {return 15; }
	case ('p'): {return 16; }
	case ('q'): {return 17; }
	case ('r'): {return 18; }
	case ('s'): {return 19; }
	case ('t'): {return 20; }
	case ('u'): {return 21; }
	case ('v'): {return 22; }
	case ('w'): {return 23; }
	case ('x'): {return 24; }
	case ('y'): {return 25; }
	case ('z'): {return 26; }
	default: {return 0; break;}
	}


long toEncrypt(long message, long e, long mod) {
	long acc = 1, z = message % mod;
	while (e) {
		if (e & 1)
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
	long p, q, m, phi, k, gcd, e, d;
	cout << "Please, input p: ";
	cin >> p;
	cout << "Please, input q: "; 
	cin >> q;
  
	m = p*q;
	cout <<endl<< " Module m = " << m << endl;

	phi = (p - 1)*(q - 1);
	cout << " Phi(m) = " << phi << endl;

	do
	{
		cout << " Please, input e, mutual prime with phi(m): ";
		cin >> e;
	} while ((GCD(e, phi) != 1) || (e > phi));
	
	toCountExtendedEuclid(phi, e, &k, &d, &gcd);
	if (d < 0) d += phi;
	cout <<" Counted d = "<< d <<". Where e*d (mod phi(m)) = "<<(e*d)%phi;

	int todo;
	cout << endl << endl << " Secret and open key are made. Let's make conversation!"<<endl;
	cout << " Choose, what you wanna do: " << endl << " Input 1 - to encrypt" << endl << " Input 2 - to decrypt" << endl << endl << " To exit - input 0." << endl << "Your choice: ";
	cin >> todo;

	while (todo != 0) {
		switch (todo)
		{
		case 0: { break; }
		case 1: { break; }
		case 2: { break; }
		default: { break; }
		}
	}
	

	cout << endl;
	system("pause");
	return 0;
}
