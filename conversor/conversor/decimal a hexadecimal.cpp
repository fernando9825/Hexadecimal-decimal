#include <iostream>
#include <string>
using namespace std;
int main() {
	int inicial = 0;
	int decimal = 0;
	int diferencia = 0;
	string respuesta;
	cout << "Ingrese numero decimal" << endl;
	cin >> decimal;
	inicial = decimal;
	decimal = decimal / 16;
	
	cout << "R/: " << decimal << endl << endl;
	decimal = decimal * 16;
	diferencia = inicial - decimal;
	respuesta = to_string(diferencia);
	cout << "sobrante es igual a: " << respuesta << endl;
	cout << "sobrante 2 :   " << decimal << endl;

	decimal = decimal / 16;
	decimal = decimal / 16;
	cout << " Tercero: " << decimal << endl;

	decimal = decimal * 16;
	cout << "cuarto: " << decimal;
	

	system("pause");

	return 0;
}