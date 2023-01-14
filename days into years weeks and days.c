/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int d,y,w,rd,s;
    printf("Enter no. of days=");
    scanf("%d",&d);
    y=d/365;
    s=d%365;
    w=s/7;
    rd=s%7;
    printf("%d days=%d years,%d weeks,%d days",d,y,w,rd);

    return 0;
}

