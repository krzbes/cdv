#include <iostream>

void zamiana( int &x, int &y) {

   /* tu wstaw kod */
	printf("%d , %d\n",x, y);
	int bufor;
	
	bufor = x;
	x = y;
	y = bufor;
		
	printf("%d , %d\n",x, y);

}

int main(){
	int a = 5,b = 6;
	zamiana(a,b);
	printf("%d , %d\n",a, b);
}
