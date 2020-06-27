#include<iostream>

using namespace std;

int main()
{
	cout << "podaj n\n";
	int n;
	cin >> n;
	int tablica[n],suma=0;
	for(int i=0;i<n;i++)
	{
		cout << "podaj element o nr\n";
		cin >> tablica[i];
		suma += tablica[i];
	}
	cout <<"pierwszy element "<< tablica[0] <<"\n(";
	for(int i=0;i<n;i++)
	{
		cout <<" "<<tablica[i];
		if((i+1)<n) cout << " ,";
	}
	int odejmowanie= tablica[0] - tablica[n-1];
	cout <<" )\n"<<"roznica pierwszego i ostatniego elementu "<<odejmowanie<<"\n";
	cout << "suma wszysktich elementow tablicy "<< suma;
	cout << "\npodaj element do wyswietlenia ";
	int wyswietl;
	cin >> wyswietl;
	cout << tablica[wyswietl-1];
	return 0;
}
