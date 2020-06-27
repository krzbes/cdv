#include<iostream>

using namespace std;

int main()
{
	cout << "podaj klucz\n";
	int klucz;
	cin >> klucz;
	int tablica[]={1,2,3,4,5,6,6,6,7,8,9,10,11,10,22,33,3,2,1,8},i=0;
	for(;i<20;i++)
	{
		if(tablica[i]==klucz)
		{
			cout << "index wyniku "<< i+1;
			cout << "\nwartosc "<< tablica[i];
			return 0;
		}
	}
	cout<< "nie znaleziono szkanej wartosci\n";
	return 0;
}
