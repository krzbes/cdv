#include <stdio.h>

main(){
  int i1 = 1, i2 = -1;
  unsigned int ui1 = 1, ui2 = -1;
  long l1 = 2, l2 = -2;
  unsigned long ul1 = 2, ul2 = -2;
  short s1 = 3, s2 = -3;
  unsigned short us1 = 3, us2 = -3;
  float f1 = 2.5;
  double d1 = 2.5;
  char c = 'A';
  
  long licz10=500,licz8=764, licz16=0x1f4, licz2=0b111110100; 
  printf("%o \n", licz2); // %d -liczba %x -szesnastkowa %o - Ûsemkowa
  
  long *p; //wskaünik
  p = &licz16;
  printf("%p,%d, %d\n",p ,sizeof(p),*p);
  }
  
