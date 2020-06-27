#include<iostream>

using namespace std;

int main()
{
	cout << "podaj a\n";
	int a,b;
	cin >> a;
	cout << "podaj b\n";
	cin >> b;
	while(a!=b){
		if(a>b)
		{
			a=a-b;
		}
		else
		{
			b=b-a;
		}
	}
	cout << a;
}
