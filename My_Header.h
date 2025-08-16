//-----------------------------------------------------------------------------------------------------------------------------------//
//        Project Title: User_Defined_Header_File
//
//        Description  : -> Attached "My_Header.h" file which is a user defined header file provides function prototypes, 
//                          variable declarations, structure and union declarations, user defined MACROS.
//                       -> Preprocessor includes these files by checking the .h file in current directory and gives the 
//                          necessary things as needed by the (Main_File.c) program.
//
//        Author       : Amol R. Mane
//        Date         : 16 August 2025
//-----------------------------------------------------------------------------------------------------------------------------------//

#define DOZEN 12
#define PI 3.14

#pragma pack(1)
struct Demo
{
    int X;
    float Y;
    char Z;
};



