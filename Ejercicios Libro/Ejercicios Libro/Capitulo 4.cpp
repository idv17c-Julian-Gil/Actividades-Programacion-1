#include <iostream>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

int Conversiones()
{
	while (true)
	{
		const float Yen = 0.0092f;
		const float Kroner = 0.16f;
		const float Pound = 1.38f;
		float Cantidad;
		char Denominacion;
		cout << "\tLas monedas aceptadas son Yen (y), Kroner (k), Libra (p) y se convertiran a Dolares Americanos\n" << endl;
		cout << "Introduce una cantidad seguido por un espacio y su denominacion" << endl;
		cin >> Cantidad >> Denominacion;
		if (Denominacion == 'k')
		{
			cout << Cantidad << " " << "Kroner" << " en dolares son $" << (Cantidad*Kroner) << "\n" << endl;
		}
		else if (Denominacion == 'y')
		{
			cout << Cantidad << " " << "Yen" << " en dolares son $" << (Cantidad*Yen) << "\n" << endl;
		}
		if (Denominacion == 'p')
		{
			cout << Cantidad << " " << "Libras" << " en dolares son $" << (Cantidad*Pound) << "\n" << endl;
		}
	}


	return 0;
}

void Personas()
{
	vector<string>Nombres;
	vector<int>Edad;
	int edad;
	bool NombreRepetido = false;
	string nombre;
	int i = 0;
	bool Ciclo = true;
	while (Ciclo == true)
	{
		cout << "Introduce nombres y edades" << endl;
		cin >> nombre;
		cin >> edad;
		if (cin.fail())
		{
			cout << "Introduce solo un nombre y su edad y pulsa enter" << endl;
			cin >> nombre >> edad;
		}
		else
		{
			for (string nombre; cin >> nombre;)
			{
				Nombres.push_back(nombre);
			}
			for (int edad; cin >> edad;)
			{
				Edad.push_back(edad);
			}
			i += 1;
		}
		if (Nombres[i] == "NoName" && Edad[i] == 0)
		{
			Ciclo = false;
		}
	}
	cout << Nombres[i] << Edad[i];
}

void Ecuacion()
{
	double x1, x2, a, b, c, raiz, real, imaginario;
	cout << "Considerando a la ecuacion general como \tax^2+bx+c" << endl;
	cout << "Introduce los valores de a b y c separados por un espacio ";
	cin >> a >> b >> c;
	raiz = b * b - 4 * a*c; //La raiz puede o no ser un numero real por eso si calcula antes
	if (raiz > 0)
	{
		x1 = (-b + sqrt(raiz)) / (2 * a);
		x2 = (-b - sqrt(raiz)) / (2 * a);
		cout << "X1= " << x1 << endl;
		cout << "X2= " << x2 << endl;
	}
	else if (raiz == 0)
	{
		x1 = (-b + sqrt(raiz)) / (2 * a);
		cout << "X= " << x1 << endl;
	}
	else
	{
		real = -b / (2 * a);
		imaginario = sqrt(-raiz) / (2 * a);
		cout << "X1= " << real << "+ " << imaginario << 'i' << endl;
		cout << "X2= " << real << "- " << imaginario << 'i' << endl;
	}
}

void Distancias()
{
	vector <double> Distancia;
	double Suma = 0;
	cout << "Introduce distancias" << endl;
	for (double Entrada; cin >> Entrada;)
	{
		Distancia.push_back(Entrada);
	}
	double Menor = Distancia[0];
	double Mayor = Distancia[0];
	for (double x : Distancia) Suma += x;
	{
		cout << "La suma de las distancias es: " << Suma << endl;
		cout << "El promedio de las distancias es: " << Suma / Distancia.size() << endl;
	}
	for (int i = 1; i<Distancia.size() - 1; i++)
	{
		if (Distancia[i] < Menor)
		{
			Menor = Distancia[i];
		}
		if (Distancia[i] > Mayor)
		{
			Mayor = Mayor;
		}
	}

	cout << "El numero mayor es: " << Mayor << '\n' << "El numero menor es: " << Menor << endl;

	cin.clear();
	cin.ignore(1000, '\n');
	cin.get();
}

void Ajedrez()
{
	int Arroz = 64;
	bool mil = true;
	bool millon = true;
	bool billon = true;
	for (int n = 0; n < Arroz; n++)
	{
		long potencia = pow(2, n);
		//cout << potencia << endl;
		if (potencia >= 1000 && mil == true)
		{
			cout << "Ocupa " << n << " casillas para tener 1000 granos de arroz " << "(" << pow(2, n) << ")" << endl;
			mil = false;
		}
		if (potencia >= 1000000 && millon == true)
		{
			cout << "Ocupa " << n << " casillas para tener 1000000 granos de arroz " << "(" << pow(2, n) << ")" << endl;
			millon = false;
		}
		if (potencia >= 1000000000 && billon == true)
		{
			cout << "Ocupa " << n << " casillas para tener 1000000000 granos de arroz " << "(" << pow(2, n) << ")" << endl;
			billon = false;
		}
	}

}

void Calculadora()
{
	double resultado;
	char operador;
	double Val1 = 0;
	double Val2 = 0;
	cout << "Introduce dos valores a operar seguido por el signo de la operacion (+,-,*,/)" << endl;
	cin >> Val1 >> Val2 >> operador;
	switch (operador)
	{
	case '+':
		resultado = Val1 + Val2;
		break;
	case '-':
		resultado = Val1 - Val2;
		break;
	case'*':
		resultado = Val1 * Val2;
		break;
	case'/':
		resultado = Val1 / Val2;
		break;
	default:
		cout << "Operador invalido";
		break;
	}

	cout << "Tu resultado es: " << resultado << endl;
	cin.clear();
	cin.ignore(1000, '\n');
	cin.get();
}

int main()
{
	Conversiones();
	//Personas();
	Distancias();
	cout << " " << endl;
	Calculadora();
	cout << " " << endl;
	Ecuacion();
	cout << " " << endl;
	Ajedrez();
	cin.clear();
	cin.ignore(1000, '\n');
	cin.get();
	return 0;
}