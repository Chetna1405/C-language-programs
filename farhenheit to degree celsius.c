/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float f;
    printf("Enter temperature in farhenheit=");
    scanf("%f",&f);
    float c=(f-32)*5/9;
    printf("'%.2f'F=%.2f °C",f,c);

    return 0;
}

