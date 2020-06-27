#include<iostream>

using namespace std;

int main(){
	cout << "podaj b\n";
	int b,a=1;
	cin >> b;
	for(;b>1;b--)
	{
		a+=b;
	}
	cout << "wynik "<< a;
}
