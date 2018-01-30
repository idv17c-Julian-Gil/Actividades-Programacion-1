#include<iostream>

using namespace std;

/*int listas(int Juan)
{
int Juan[5];

return 0;
}*/
const int n = 5;
int Juan[n];
int a;

int main()
{
	cout << "Introduce 5 numeros para ordenar de menor a mayor" << endl;
	for (int i = 0; i < n; ++i)
	{
		cin >> Juan[i];

	}
	for (int i = 0; i<n; i++)
		for (int j = i + 1; j<n; j++)
		{
			if (Juan[i] > Juan[j]) {

				a = Juan[i];

				Juan[i] = Juan[j];

				Juan[j] = a;
			}
		}

	cout << "\n";
	for (int i = 0; i < n; i++) {
		cout << Juan[i] << " ";
	}
	cin.ignore();
	cin.get();
	return 0;
}