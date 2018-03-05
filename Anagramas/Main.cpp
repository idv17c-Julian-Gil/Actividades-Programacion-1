#include <iostream>
#include<fstream>
#include<vector>
#include<string>

//Poner comentarios 

using namespace std;

void leer_archivo(vector<string>& vec, string nom_archivo)
{
	ifstream ist{ nom_archivo };
	char i [256];
	string nada= "nada";
	while (nada != "") //mientras que 'nada' no sea (vacio) 
	{
		ist.getline(i,256,'\n'); //va a tomar una linea del archivo hasta que llegue a un salto de linea
		nada = i; //aqui 'nada' vuelve a valer "nada", haciendo que se "reinicie" el while
		vec.push_back(nada); //aqui se mete la linea a un vector
	}
}

bool checar_anagrama(vector<string>& v,int i, int n) //verificar
{
	string sig_pal = v[n], act_pal = v[i], letra, letra_sig;
	if (sig_pal.size() != act_pal.size())
	{
		return false;
	}
	else
	{
		for (int x = 0; x < sig_pal.size(); x++)
		{
			letra = sig_pal[x];
			for (int y = 0; y < act_pal.size(); y++)
			{
				letra_sig = act_pal[y];
				if (letra == letra_sig)
				{
					act_pal[y] = NULL;
					break;
				}

			}
		}
	}
}

void ordenar_anagrama(vector<string>& v) //ordenar
{
	string mover_palabras;
	for (int i = 0; i < v.size(); i++)
		for (int n = i + 1; i < v.size(); n++)
			if (n + 1 > v.size())
			{
				break;
			}
			else
			{
				if (checar_anagrama(v, i, n))
				{
					mover_palabras = v[n];
					v[n] = v[i + 1];
					v[i + 1] = mover_palabras;
					i++;
				}
			}
}

void escribir_nuevo(string n, vector <string> v)
{
	ofstream modificar(n.c_str());
	for (int z = 0; z < v.size(); z++)
	{
		modificar << v[z] << endl;
	}

}

void crea_archivo(string nombre_archivo)
{
	ofstream documento_texto;
	//getline(cin, nombre_archivo);
	documento_texto.open(nombre_archivo.c_str(), ios::out);
}

int main()
{
	cout << "Este programa va a leer las palabras y ver cuales son anagramas" << endl;
	
	vector <string> palabras;

	string n_documento = "anagramas.txt";

	cout << "Estas son las palabras que se van a leer" << endl;

	leer_archivo(palabras, n_documento);

	for (int i = 0; i < palabras.size(); i++)
		cout << palabras[i] << endl;

	string n_archivo = "Acomodados.txt";

	crea_archivo(n_archivo);

	ordenar_anagrama(palabras);

	escribir_nuevo(n_archivo, palabras);

	cin.get();

	return 0;
}