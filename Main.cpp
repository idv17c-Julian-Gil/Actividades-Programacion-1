#include <iostream>
#include<string>


using namespace std;


int main()
{
	int Numero;
	string EsPar;
	cout << "Introduce un numero que quieres averiguar si es par" << endl;
	cin >> Numero;

	if (Numero % 2 != 0)
	{
		EsPar = " no es par";
	}
	else
	{
		EsPar = " es par";
	}

	cout << Numero << EsPar << endl;
	cin.ignore();
	cin.get();
	return 0;

}