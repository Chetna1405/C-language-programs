#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter two no.s a and b:");
    scanf("%d%d",&a,&b);
    (a%2==0)?printf("a is even.\n"):printf("a is odd.\n");
    (b%2==0)?printf("b is even.\n"):printf("b is odd.\n");

    return 0;
}
