#include<iostream>

using namespace std;

int fibo(int n)
{
	if(n==1){
		return 1;
	}
	if(n==0){
		return 0;
	}
	return fibo(n-1)+fibo(n-2);
}
int main()
{
	cout << "podaj n\n";
	int n;
	cin >> n;
	cout << "wynik "<<fibo(n);
}
