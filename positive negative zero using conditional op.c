#include <stdio.h>

int main()
{
    int a;
    printf("Enter a:");
    scanf("%d",&a);
    if(a>0)
    printf("a is positive.");
    if(a<0)
    printf("a is negative.");
    if(a==0)
    printf("a is zero.");

    return 0;
}
