//#include<iostream>
//#include<string>
//#include<istream>
//#include<ostream>
//#include<fstream>
//#include<vector>
#include"std_lib_facilities.h"

//using namespace std;

void leer_archivo(vector<int>& vec, string nom_archivo)
{
	ifstream ist{ nom_archivo };
	if (!ist) error("No se pudo abrir el archivo\n", nom_archivo); // Si no se puede abrir el archivo, imprime un error si no se pudo abrir
	int i;
	while (ist >> i)
	{
		vec.push_back(i);
	}
}

struct Reading
{
	int hora;
	double temperatura;
	Reading(int h, double t) :hora(h), temperatura(t) { }
};

int suma_numeros(vector<int> vec)
{
	int suma = 0;
	for (int i = 0; i < vec.size(); i++)
	{
		suma += vec[i];
	}
	return suma;
}

Reading poner(int& hora)
{
	double temp = randint(44, 108);
	return Reading(hora++, temp);
}

void imprimir_temperatura(Reading Prueba)
{
	cout << Prueba.temperatura << "\n" << Prueba.hora << endl;
}

int main()
{
	cout << "El nombre del archivo es 'Numeros.txt'" << endl;
	cout << "Introduce el nombre del archivo: "; 
	string iname; 
	cin >> iname; 
	vector<int> Numeros;
	leer_archivo(Numeros, iname);
	suma_numeros(Numeros);
	cout << suma_numeros(Numeros);
	cout << "\n" << endl;

	cout << "Introduce un nombre para archivo de la temperatura (seguido por .txt)" << endl;
	string arch_temp;
	cin >> arch_temp;

	vector<Reading> la_temperatura;
	int hora = 0;
	for (int i = 0; i < 50; i++)
	{
		if (hora > 23) hora = 0;
		la_temperatura.push_back(poner(hora));
	}
	ofstream archivo(arch_temp.c_str());
	for (int i = 0; i < la_temperatura.size(); i++)
	{
		archivo << la_temperatura[i].hora << " " << la_temperatura[i].temperatura << endl;
	}


	//Reading Prueba;
	//Prueba.hora = 2;
	//Prueba.temperatura = 12.4;

	//imprimir_temperatura(Prueba);
	cin.ignore();
	cin.get();

	return 0;
}