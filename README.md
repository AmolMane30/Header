# User_Defined_Header_File

Compilation - 

    step1 -> gcc My_File.c -o Myexe
    step2 -> ./ Myexe.exe (Linux)
    step3 -> Myexe.exe    (Windows)

# Header File is only applicable in C and C++ Only -
->Header file is such a file which contains the declarative part of the program.<br>
->We can create our own file with extension .h which is called as user defined header file.<br>
->Generally the header file contains below things in it<br>

      1] Functions Prototype
      2] Variable Declaration
      3] Declaration of Structure or Union
      4] User Defined Macros

-> There are two ways in which we mention the name of header file.<br>

      1] <".h">
      2] ".h"
  1] <".h"> If we mention name in angular bracket the preprocessor will search header file in the compilef specified path where we installed compiler.<br>
  2] ".h" If we include the header file in the double quotes the preprocessor will search the header file in the same folder in which our .c file is stored.(Current Directory).
    
