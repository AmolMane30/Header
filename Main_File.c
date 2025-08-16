//-----------------------------------------------------------------------------------------------------------------------------------//
//        Project Title: User_Defined_Header_File
//
//        Description  : -> Attached "My_Header.h" file which is a user defined header file provides function prototypes, 
//                          variable declarations, structure and union declarations, user defined MACROS.
//                       -> Preprocessor includes these files by checking the .h file in current directory and gives the 
//                          necessary things as needed by this program.
//
//        Author       : Amol R. Mane
//        Date         : 16 August 2025
//-----------------------------------------------------------------------------------------------------------------------------------//

#include<stdio.h>

// This is user defined header which is present inside another .h file
#include "My_Header.h"

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
  printf("i : %d\n\n",i);

  printf("X : %d\n",dobj.X);
  printf("Y : %f\n",dobj.Y);
  printf("Z : %c\n",dobj.Z);

  printf("Size of Structure is : %ld bytes.\n",sizeof(dobj));

  return 0;
}
