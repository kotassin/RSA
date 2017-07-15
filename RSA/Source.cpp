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
long toDigitalCode(string message) {
   
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
		cout << "Please, input e, mutual prime with phi(m): ";
		cin >> e;
	} while ((GCD(e, phi) != 1) || (e > phi));
	
	toCountExtendedEuclid(phi, e, &k, &d, &gcd);
	if (d < 0) d += phi;
	cout <<"Counted d = "<< d <<". Where e*d (mod phi(m)) = "<<(e*d)%phi;

	int todo;
	cout << endl << endl << "Secret and open key are made. Let's make conversation!"<<endl;
	cout << "Choose, what you wanna do: " << endl << "Input 1 - to encrypt" << endl << "Input 2 - to decrypt" << endl << endl << "To exit - input 0." << endl << "Your choice: ";
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
