#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdlib>
#include <time.h>

using namespace std;

void archivo_a_vector(vector <string>& todo_archivo, string nom_archivo)
{
	ifstream ist{ nom_archivo.c_str() };
	string i;
	while (ist >> i)
	{
		todo_archivo.push_back(i);
	}

}

void crea_archivo(string nombre_archivo)
{
	ofstream documento_texto;
	documento_texto.open(nombre_archivo.c_str(), ios::out);
}

void in(vector<string> articulos, vector<string>& resto)
{
	for (int i = 0; i < resto.size(); i++)
	{
		for (int n = 0; n < articulos.size(); n++)
		{
			if (articulos[n] == resto[i])
			{
				resto[i] = resto[i] + " " + resto[i + 1];
				resto.erase(resto.begin() + i + 1);
			}
		}
	}
}

void ordenar_por_tipo(vector <string>& sujeto, vector <string>& adjetivo, vector <string>& verbo, vector <string>& adverbio, vector <string>& preposicion, vector <string>& sustantivo, vector<string> archivo)
{
	for (int i = 1; i < archivo.size(); i++)
	{
		while (archivo[i] != "Adjetivo")
		{
			sujeto.push_back(archivo[i]);
		}
	}
}

void ordenar_adjetivo(vector<string>& adjetivo, vector<string> nombre)
{
	for (int i = 6; i <= 9; i++)
	{
		adjetivo.push_back(nombre[i]);
	}
}

void ordenar_sujeto(vector<string>& sujeto, vector<string> nombre)
{
	for (int i = 1; i <= 4; i++)
	{
		sujeto.push_back(nombre[i]);
	}
}

void ordenar_verbo(vector<string>& verbo, vector<string> nombre)
{
	for (int i = 11; i <= 14; i++)
	{
		verbo.push_back(nombre[i]);
	}
}

void ordenar_adverbio(vector<string>& adverbio, vector<string> nombre)
{
	for (int i = 16; i <= 19; i++)
	{
		adverbio.push_back(nombre[i]);
	}
}

void ordenar_preposicion(vector<string>& preposicion, vector<string> nombre)
{
	for (int i = 21; i <= 24; i++)
	{
		preposicion.push_back(nombre[i]);
	}
}

void ordenar_sustantivo(vector<string>& sustantivo, vector<string> nombre)
{
	for (int i = 26; i <= 29; i++)
	{
		sustantivo.push_back(nombre[i]);
	}
}


int main()
{
	vector <string> sujeto, adjetivo, verbo, adverbio, preposicion, sustantivo, todo_archivo, articulo;
	articulo = { "El","La","el","la","los","Los","Las","las" };
	string archivo = "oraciones_examen_practico_parcial2.txt";
	string Yeipi = "Examen ya hecho.txt";
	int examen = 1;

	crea_archivo(Yeipi);
	archivo_a_vector(todo_archivo, archivo);
	in(articulo, todo_archivo);
	ordenar_sujeto(sujeto, todo_archivo);
	ordenar_adjetivo(adjetivo, todo_archivo);
	ordenar_adverbio(adverbio, todo_archivo);
	ordenar_preposicion(preposicion, todo_archivo);
	ordenar_verbo(verbo, todo_archivo);
	ordenar_sustantivo(sustantivo, todo_archivo);

	ofstream nuevo_archivo;
	nuevo_archivo.open(Yeipi);

	srand(time(NULL));

	while (examen <= 6)
	{
		int frase1 = rand() % (11 - 8);
		int frase2 = rand() % (11 - 8);
		int frase3 = rand() % (11 - 8);
		int frase4 = rand() % (11 - 8);
		nuevo_archivo << sujeto[frase1] << " " << adjetivo[frase2] << " " << verbo[frase3] << " " << adverbio[frase4] << " " << preposicion[frase2] << " " << sustantivo[frase1] << '\n' << endl;
		nuevo_archivo << sujeto[frase2] << " " << adjetivo[frase1] << " " << verbo[frase2] << " " << adverbio[frase3] << " " << preposicion[frase1] << " " << sustantivo[frase2] << '\n' << endl;
		examen++;
	}
	cout << "No utilice todo, y mucho esta hardcodeado pero funciona :)" << endl;
	cout << "Y recuerde, los vectores y string son punteros, asi que tecnicamente si use punteros :)" << endl;
	cout << "Pulsa ENTER para salir..." << endl;
	cin.get();

	return 0;
}
