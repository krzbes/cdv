#include<iostream>

using namespace std;

int main()
{
	cout << "podaj wartosci punktu startowego\n";
	int a,b;
	cin >> a;
	cin >> b;
	cout << "podaj wartosci punktu koncowego\n";
	int c,d;
	cin >> c;
	cin >> d;
	cout << "podaj klucz\n";
	int klucz;
	cin >> klucz;
	if(a<=8 && b<=8 && c<=8 && d<=8 && a<=c && b<=d )
	{
		bool find=false;
		int tablica[][8]=
		{
			{1,2,3,4,5,6,7,8},
			{1,2,3,4,5,6,7,8},
			{1,2,3,4,5,6,7,8},
			{1,2,3,4,5,6,7,8},
			{1,2,3,4,5,6,7,8},
			{1,2,3,4,5,6,7,8},
			{1,2,3,4,5,6,7,8},
			{1,2,3,4,5,6,7,8}
		},i=a-1,j=b-1;
		for(;i<c;i++,j=b-1)
		{
			for(;j<d;j++)
			{
				if(tablica[i][j]==klucz)
				{
					cout << "\nindex wyniku "<< i+1 << " , "<< j+1;
					cout << "\nwartosc "<< tablica[i][j];
					find=true;
				}
			}
	
		}
		if(!find)
			cout<< "nie znaleziono szkanej wartosci\n";
		return 0;
	}
	else
	{
		cout << "bledne zalozenia\n";
		return 0;
	}
	
}
