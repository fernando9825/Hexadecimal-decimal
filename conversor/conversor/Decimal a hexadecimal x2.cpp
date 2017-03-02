#include <iostream>
#include <string>

using namespace std;


// Sobrante y conversion General valor Hexadecimal
inline int sobrante(int &i, int &f) {
	int diferencia = 0;
	diferencia = i - f;
	return diferencia;
}

inline string conversion(int c) {

	string retorno;
	string convert;
	convert = to_string(c);

	if (convert == "10") {
		retorno = "A";
		return retorno;
	}

	else if (convert == "11") {
		retorno = "B";
		return retorno;
	}
		

	else if (convert == "12") {
		retorno = "C";
		return retorno;
	}
		

	else if (convert == "13") {
		retorno = "D";
		return retorno;
	}
		

	else if (convert == "14") {
		retorno = "E";
		return retorno;
	}
		

	else if (convert == "15") {
		retorno = "F";
		return retorno;
	}
		
	else {
		return convert;
	}
	
}

inline int division(int &cociente) {
	return cociente / 16;
}

inline int multiplicacion(int &multi) {
	return multi * 16;
}

int main() {
	int decimal = 0;
	int cociente = 0;
	int multi = 0;
	int sobra = 1;
	int inicial = 0;
	string respuesta;
	string respuesta2;
	cout << "Ingrese un decimal: ";
	cin >> decimal;

	// logica...
	inicial = decimal;
	
	while (sobra > 0) {
		
		inicial = division(inicial);
		multi = multiplicacion(inicial);
		
		sobra = sobrante(decimal, multi);
		decimal = division(decimal);
		multi = multiplicacion(decimal);
		
		if (sobra != 0) {
			cout << "Conversion: " << conversion(sobra) << endl;

		}
		
	}
	system("pause");

	return 0;
}
