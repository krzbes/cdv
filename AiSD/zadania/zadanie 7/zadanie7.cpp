#include<iostream>

using namespace std;

int main()
{
	cout << "podaj m\n";
	int m;
	cin >> m;
	cout << "podaj n\n";
	int n;
	cin >> n;
	int tablica[m][n],suma=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin >> tablica[i][j];
			suma += tablica[i][j];
		}
	}
	cout << "(";
	for(int i=0;i<m;i++)
	{
		cout << "(";
		for(int j=0;j<n;j++)
		{
			cout <<" "<<tablica[i][j];
			if((j+1)<n) cout << " ,";
		}
		cout << ")";
		if((i+1)<m) cout << " ,";
	}
	cout << ")\nsuma wszysktich elementow tablicy "<< suma;
	cout << "\npodaj m elementu do wyswietlenia\n";
	cin >> m;
	cout << "podaj n elementu do wyswietlenia\n";
	cin >> n;
	cout << tablica[m-1][n-1];
	return 0;
}
