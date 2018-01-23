#include <iostream>
#include <string>
#include <cmath>

using namespace std;

/*
Suma, resta, multiplicacion, division, raiz, potencia
*/

void numeros(int& val1, int& val2);
int potencia(int val1,int val2);
int division(int val1, int val2);
int multiplicacion(int val1, int val2);
int suma(int val1, int val2);
void numero(float& val3);

int suma(int val1, int val2)
{
	int resultado;
	resultado = val1 + val2;
	return resultado;
}

int multiplicacion(int val1, int val2)
{
	int resultado;
	resultado = val1 * val2;
	return resultado;
}

int division(int val1, int val2)
{
	int resultado;
	resultado = val1/val2;
	return resultado;
}

int potencia(int val1, int val2)
{
	int resultado;
	resultado = pow(val1,val2);
	return resultado;
}

float raiz(int val3)
{
	float resultado;
	resultado = sqrt(val3);
	return resultado;
}
void numeros(int& val1, int& val2)
{
	cout << "Introduce dos numeros separados por un espacio" << endl;
	cin >> val1 >> val2;
}

void numero(float& val3)
{
	cout << "Introduce un numero" << endl;
	cin >> val3;
}

int main()
{
	int val1;
	int val2;
	float val3;
	int opcion;
	cout << "Escribe el numero de la operacion que deseas realizar" << endl;
	cout << "1. Suma/Resta" << endl;
	cout << "2. Multiplicacion" << endl;
	cout << "3. Division" << endl;
	cout << "4. Potencia" << endl;
	cout << "5. Raiz" << endl;
	cin >> opcion;

	switch (opcion)
	{
	case 1:
		numeros(val1, val2);
		suma(val1, val2);
		int LaSuma;
		LaSuma = suma(val1,val2);
		cout << "Tu resultado es " << LaSuma << endl;
		break;
	case 2:
		numeros(val1, val2);
		multiplicacion(val1, val2);
		int LaMulti;
		LaMulti = multiplicacion(val1, val2);
		cout << "Tu resultado es " << LaMulti << endl;
		break;
	case 3:
		numeros(val1, val2);
		division(val1, val2);
		int LaDivi;
		LaDivi = division(val1, val2);
		cout << "Tu resultado es " << LaDivi << endl;
	case 4:
		numeros(val1,val2);
		potencia(val1,val2);
		int LaPot;
		LaPot = potencia(val1,val2);
		cout << "Tu resultado es " << LaPot << endl;
		break;
	case 5:
		numero(val3);
		raiz(val3);
		float LaRaiz;
		LaRaiz = raiz(val3);
		cout << "Tu resultado es " << LaRaiz << endl;
		break;
	case 9:
		cout << "Presiona Enter para salir" << endl;
		break;
	default:
		cout << "Opcion invalida" << endl;
		break;
	}
	
	cin.get();
	cin.get();
	return 0;

}





