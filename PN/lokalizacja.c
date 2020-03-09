#include <stdio.h>

int I;
char C;
long L;
short S;  
double D;

main(){
  int i;
  char c;
  long l;
  short s;  
  double d;
  printf("int %i i wskaznik do niej %p oraz jej rozmiar w bitach %d\n",I,&I,sizeof(I));
  printf("char \"%c\" i wskaznik do niej %p oraz jej rozmiar w bitach %d\n",C,&C,sizeof(C));
  printf("long %d i wskaznik do niej %p oraz jej rozmiar w bitach %d\n",L,&L,sizeof(L));
  printf("short %i i wskaznik do niej %p oraz jej rozmiar w bitach %d\n",S,&S,sizeof(S));
  printf("double %f i wskaznik do niej %p oraz jej rozmiar w bitach %d\n\n",D,&D,sizeof(D));
  
  printf("int: %i i adres: %p oraz jej rozmiar w bitach %d\n",i,&i,sizeof(i));
  printf("char: \"%c\" adres: %p oraz jej rozmiar w bitach %d\n",c,&c,sizeof(c));
  printf("long: %d adres: %p oraz jej rozmiar w bitach %d\n",l,&l,sizeof(l));
  printf("short: %i adres: %p oraz jej rozmiar w bitach %d\n",s,&s,sizeof(s));
  printf("double: %f adres: %p oraz jej rozmiar w bitach %d\n",d,&d,sizeof(d));
}
  
