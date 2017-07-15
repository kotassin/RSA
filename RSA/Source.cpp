
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <cstdio>

using namespace std;

int main() {
	long p, q, m, phi;
	cout << "Please, input p: ";
	cin >> p;
	cout << "Please, input q: "; 
	cin >> q;
  
	m = p*q;
	cout <<endl<< " Module m = " << m << endl;

	phi = (p - 1)*(q - 1);
	cout << " Phi(m) = " << phi << endl;

	cout << " Please, input e:";

	system("pause");
	return 0;
}
