#include<iostream>
#include <vector>

using namespace std;

double ctok(double c)    // converts Celsius to Kelvin
{
	double k = c + 273.15;

	return k;
}

/*
El numero 7 ya lo hice en el capitulo 4, funcion void Ecuacion :D
*/

void Toros()
{
	while (true)
	{
		int vaco = 0, tora = 0;
		vector<char> Numeros(4);
		vector<char> Vacas = { '8','4','5','6' };
		cout << "Intenta adivinar los 4 numeros que hay, una vaca equivale a un numero correcto en la posicion incorrecta,\nun toro vale un numero correcto en posicion correcta" << endl;
		cin >> Numeros[0] >> Numeros[1] >> Numeros[2] >> Numeros[3];
		for (int v = 0; v < Vacas.size(); v++)
		{
			if (Numeros[v] == Vacas[v])
			{
				tora++;
			}
			else
			{
				for (int t = 0; t < Vacas.size(); t++)
				{
					if (Numeros[t] == Vacas[v])
					{
						vaco++;
					}
				}
			}
		}
		cout << "Toros: " << tora << "\tVacas: " << vaco << endl;
	}
}

int main()
{
	Toros();
	double c = 0;           // declare input variable
	cout << "Introduce una temperatura en Centigrados" << endl;
	cin >> c;                   // retrieve temperature to input variable
	double k = ctok(c);     // convert temperature
	if (k < 0)
	{
		cout << "ERROR\tEl Cero Absoluto es lo mas bajo que hay" << endl;
	}
	else
	{
		cout << k << '/n';         // print out temperature
	}
	cin.ignore();
	cin.get();
	return 0;
}