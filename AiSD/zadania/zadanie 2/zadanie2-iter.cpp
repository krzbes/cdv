#include<iostream>

using namespace std;

int main()
{
	cout << "podaj liczbe\n";
	int silnia;
	cin >> silnia;
	int i=0,wynik=1;
	i++;
	for(;i<silnia;i++)
	{
		wynik+=wynik*(silnia-i);
	}
	if(silnia==0)
	{
		wynik=0;
	}
	cout << wynik;
}
