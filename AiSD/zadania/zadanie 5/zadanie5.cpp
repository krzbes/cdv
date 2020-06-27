#include<iostream>

using namespace std;

int main()
{
	cout << "podaj a\n";
	int a;
	cin >> a;
	cout << "podaj b\n";
	int b;
	cin >> b;
	if(a>0 && b>0 && b>a)
	{
		char decyzja;
	do
	{
		cout << "wybierz co chcesz zrobic A - suma B - suma kwadratów C - œrednia arytmetyczna D - koniec\n";
		cin >> decyzja;
		int suma, sumak,srednia;
		switch(decyzja)
		{
			case 'A':
				suma=0;
				for(int pom1=a;pom1<=b;pom1++)
				{
					suma+=pom1;
				}
				cout << "suma to "<< suma<<"\n";
				break;
			case 'B':
				sumak=0;
				for(int pom1=a;pom1<=b;pom1++)
				{
					sumak+=pom1*pom1;
				}
				cout << "suma kwadratow to "<< sumak<<"\n";
				break;
			case 'C':
				suma=0;
				int licznik=0;
				for(int pom1=a;pom1<=b;pom1++)
				{
					suma+=pom1;
					licznik++;
				}
				srednia=suma/licznik;
				cout << "srednia to "<< srednia<<"\n";
				break;
		}
	}
	while(decyzja!='D');
	return 0;
	}
	cout << "bledne dane\n";
	return 0;
}
