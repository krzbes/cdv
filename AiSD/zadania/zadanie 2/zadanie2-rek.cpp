#include<iostream>

using namespace std;

int Silnia(int silnia)
{
	if(silnia>1)
    return silnia*Silnia(silnia-1);
  else
    return 1;
}

int main()
{
	cout << "podaj liczbe\n";
	int silnia;
	cin >> silnia;
	int wynik;
	wynik = Silnia(silnia);
	cout << wynik;
}
