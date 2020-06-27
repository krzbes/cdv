#include<iostream>

using namespace std;

int main()
{
	int tablica[] = {20,19,1,5,11,8,7,12,13,18,17,16,10,2,3,4,6,9,14,15};
	int bufor = 1;
	while(bufor>0)
	{
		bufor=0;
		for(int i=1;i<20;i++)
		{
			if(tablica[i]<=tablica[i-1])
			{
				bufor=tablica[i];
				tablica[i]=tablica[i-1];
				tablica[i-1]=bufor;
			}
		}
	}
	for(int i=0;i<20;i++)
	{
		cout << tablica[i] << endl;
	}
}
