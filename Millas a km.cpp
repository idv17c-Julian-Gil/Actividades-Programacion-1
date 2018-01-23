#include <iostream>
#include <string>

using namespace std;

float conversion(float& millas)
{
	cout << "Cuantas millas quieres convertir a kilometros" << endl;
	cin >> millas;
	return millas;
}

float conversion(float& millas);

int main()
{

	float millas;
	//conversion(millas);
	float cantidad;
	cantidad = conversion(millas);
	cout << cantidad << " millas son " << cantidad * 1.609 <<" kilometros"<< endl;

	cin.get();
	cin.get();
	return 0;
}