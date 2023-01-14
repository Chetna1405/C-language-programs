/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float c;
    printf("Enter temperature in °celsius=");
    scanf("%f",&c);
    float k=(c*(9/5)+32);
    printf("%.2f°C in farhenheit=%.2f",c,k);;

    return 0;
}
