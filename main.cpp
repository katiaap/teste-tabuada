#include <iostream>

using namespace std;

void main() {

	int cont = 0, tabuada, result;
	system ("color a0");

	cout << "\tTABUADA" << endl;
	cout << "\t-------\n" << endl;
	cout << "  Diga a tabuada desejada: ";
	cin >> tabuada;
	cout << "\n";

	while (cont <= 11)
	{
		result = tabuada * cont;
		cout << "  " << tabuada << " X " << cont << " = " << result << endl;
		cont++;
	}
	}