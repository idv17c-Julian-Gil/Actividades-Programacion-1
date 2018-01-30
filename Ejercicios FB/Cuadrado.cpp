#include <iostream>

using namespace std;

int area;
int perimetro;

int operacion(int& area, int& perimetro, int longitud, int altura)
{
	area = longitud * altura;
	perimetro = longitud + longitud + altura + altura;

	return 0;
}


int main()
{
	
	int altura;
	int longitud;
	
	cout << "Introduce la longitud del rectangulo: ";
	cin >> longitud;

	cout << "Introduce la altura del rectangulo: ";
	cin >> altura;
	
	operacion( area, perimetro, longitud , altura);
	
	cout << "El perimetro es: " << perimetro << endl;
	cout << "El area es: " << area << endl;

	cin.ignore();
	cin.get();

	return 0;
}