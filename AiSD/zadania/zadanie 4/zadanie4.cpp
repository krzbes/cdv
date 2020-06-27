#include<iostream>

using namespace std;

int main()
{
	cout << "podaj liczbe godzin przepracowanych tygodniowo\n";
	int LG;
	cin >> LG;
	cout << "podaj stawke godzinowa\n";
	int SG;
	cin >> SG;
	int PL=0,pLG = LG;
	if(LG>40)
	{
		int pom1=LG-40;
		PL = pom1*2*SG;
		pLG-=pom1;
	}
	PL+=pLG*SG;
	cout << "przepracowano godzin:"<<LG <<"\nPlaca: " <<PL
	<<"\nCzy chcesz policzyc roczne wynagrodzenie i podatek? tak 1 nie 0\n";
	int zgoda;
	cin >> zgoda;
	float podatek,dochod;
	int stawka;
	if(zgoda==1)
	{
		int pom2;
		PL*=52;
		if(PL>30000)
		{
			pom2 = PL-30000;
			podatek=5900+(pom2*0.28);
			stawka=28;
			
		}
		else if(PL>20000)
		{
			pom2 = PL-20000;
			podatek=3800+(pom2*0.21);
			stawka=21;
		}
		else
		{
			podatek=PL*0.19;
			stawka=19;	
		}
		dochod = PL - podatek;
		cout <<"wypracowano: "<<PL<<"\nstawka podatkowa: "<<stawka <<"%"
		<< "\npodatek do zaplacenia: "<< podatek << "\nzarobki po odliczeniu podatku: "<<dochod;
	}
	return 0;
}
