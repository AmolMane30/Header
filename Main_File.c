#include<stdio.h>

// This is user defined header which is present inside another .h file
#include "My_Header"

int main()
{
  int No = 21;
  int i = DOZEN;
  float f = 51.98f;
  char ch = 'A';

  struct Demo dobj;
  dobj.X = No;
  dobj.Y = PI;
  dobj.Z = 'T';

  printf("Jay Ganesh...\n");
  printf("No: %d\n",No);
  printf("f : %f\n",f);
  printf("ch : %c\n",ch);
  printf("i : %d\n",i);

  printf("X : %d\n",dobj.X);
  printf("Y : %f\n",dobj.Y);
  printf("Z : %c\n",dobj.Z);

  printf("Size of Structure is : %d bytes.\n",sizeof(dobj));

  return 0;
}
