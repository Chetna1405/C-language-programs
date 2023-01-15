/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()  
{  
    long a,i,t;
    i=1;
    printf("enter a");
    scanf("%ld",&a);
    while(i<=10)
    {    t=a*i;
        printf("%ld*%ld=%ld\n",a,i,t);
        i++;
    }
    return 0;  
}  

    
