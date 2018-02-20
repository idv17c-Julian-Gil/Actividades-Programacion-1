#include"std_lib_facilities.h"

void crea_archivo(string nombre_archivo)
{
	ofstream documento_texto;
	getline(cin, nombre_archivo);
	documento_texto.open(nombre_archivo.c_str(), ios::out);
}

void editar(string nombre_archivo, vector<char> Lista_numeros)
{
	ofstream escribir(nombre_archivo.c_str());
	string minuscula;

	for (int i = 0; i < Lista_numeros.size(); i++)
	{
		minuscula = tolower (Lista_numeros[i]);
		escribir << minuscula;
	}
}

void Ejercicio_1(vector<char>& vec, string nom_archivo)
{
	ifstream ist{ nom_archivo };
	if (!ist) error("No se pudo abrir el archivo\n", nom_archivo); // Si no se puede abrir el archivo, imprime un error si no se pudo abrir
	char i;
	while (ist >> i)
	{
		vec.push_back(i);
	}
}



int main()
{
	cout << "Introduce 'Letras.txt'" << endl;
	string documento, n_documento;
	cin >> documento;
	n_documento = documento + " parte 2";
	vector<char> Texto;
	Ejercicio_1(Texto, documento);
	crea_archivo(n_documento);
	for (int i = 0; i < Texto.size(); i++)
	{
		cout << Texto[i] << endl;
	}

	editar(n_documento, Texto);
	cin.ignore();
	cin.get();
	return 0;
}

