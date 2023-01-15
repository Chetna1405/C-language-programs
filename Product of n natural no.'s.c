/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{    int n,i,sum=1;
    printf("enter n");
    scanf("%d",&n);
    
    i=1;
    
    while(i<=n){
       
        sum=sum*i;
        i++;
    }
    printf("%d",sum);

    return 0;
}
