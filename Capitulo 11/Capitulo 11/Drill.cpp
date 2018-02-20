#include "std_lib_facilities.h"

void tabla()
{
	cout << '|' << setw(15) << "Julian Gil" << '|' << setw(11) << 6624296166 << '|' << "julian-noe_gil@outlook.com\n"
		<< '|' << setw(15) << "Julian Gil" << '|' << setw(11) << 6621950506 << '|' << "markarcell@gmail.com\n"
		<< '|' << setw(15) << "Thania Cardenas" << '|' << setw(11) << 6621950508 << '|' << "thaniacardenas@hotmail.com\n";
}

int main()
{
	int nacimiento = 1999;
	int a, b, c, d;

	cout << nacimiento << "\tdecimal\n"
		<< oct << nacimiento << "\toctadecimal\n"
		<< hex << nacimiento << "\thexadecimall\n" << endl;
	cout << "Mi edad es: " << dec << 19 << endl;

	cout << "Introduce cuatro numeros: ";
	cin >> a >> oct >> b >> hex >> c >> d;
	cout << a << '\t' << b << '\t' << c << '\t' << d << '\n';
	// 'a' se va a imprimir como entero decimal, 'b' como hexadecimal y 'c' y 'd' como octadecimal

	tabla();

	cin.ignore();
	cin.get();
	return 0;
}