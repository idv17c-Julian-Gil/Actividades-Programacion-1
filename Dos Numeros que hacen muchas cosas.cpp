#include <iostream>
#include <string>

using namespace std;

void numeros(int& val1, int& val2)
{
	cout << "Introduce dos numeros seperados por un espacio" << endl;
	cin >> val1 >> val2;
}

int menor(int& chico, int val1, int val2)
{
	//int chico;
	if (val1 < val2)
	{
		chico = val1;
	}
	else 
	{
		chico = val2;
	}

	return chico;
}

int multiplicacion(int& multiplicado, int val1, int val2)
{
	multiplicado = val1 * val2;
	return multiplicado;
}

int division(int& dividido, int val1, int val2)
{
	dividido = val1 / val2;
	return dividido;
}

int mayor(int& grande, int val1, int val2)
{
	if (val1 < val2)
	{
		grande = val2;
	}
	else
	{
		grande = val1;
	}
	return grande;
}

int suma(int& sumados, int val1, int val2)
{
	sumados = val1 + val2;
	return sumados;
}

int resta(int& restado, int val1, int val2)
{
	restado = val1 - val2;
	return restado;
}

void numeros(int& val1, int& val2);
int menor(int& chico, int val1, int val2);
int mayor(int& grande, int val1, int val2);
int suma(int& sumados, int val1, int val2);
int resta(int& restado, int val1, int val2);
int multiplicacion(int& multiplicado, int val1, int val2);

int main()
{
	int val1;
	int val2;
	int chico;
	int grande;
	int restado;
	int sumados;
	int dividido;
	int multiplicado;
	int NumeroMayor;
	int NumeroMenor;
	int NumeroSuma;
	int NumeroResta;
	int NumeroDividido;
	int NumeroMultiplicado;
	numeros(val1, val2);
	menor(chico, val1, val2);
	mayor(grande, val1, val2);
	suma(sumados, val1, val2);
	resta(restado, val1, val2);
	multiplicacion(multiplicado, val1, val2);
	division(dividido, val1, val2);
	NumeroMenor = menor(chico, val1, val2);
	NumeroMayor = mayor(grande, val1, val2);
	NumeroSuma = suma(sumados, val1, val2);
	NumeroResta = resta(restado, val1, val2);
	NumeroDividido = division(dividido, val1, val2);
	NumeroMultiplicado = multiplicacion(multiplicado, val1, val2);

	cout << "El numero mayor es " << NumeroMayor << endl;
	cout << "El numero menor es " << NumeroMenor << endl;
	cout << "La suma de ambos numeros es " << NumeroSuma << endl;
	cout << "La resta de ambos numeros es " << NumeroResta << endl;
	cout << "El producto de ambos numeros es " << NumeroMultiplicado << endl;
	cout << "El radio de ambos numeros es " << NumeroDividido << endl;


	cin.ignore();
	cin.get();
	return 0;
}
