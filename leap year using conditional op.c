
#include <stdio.h>

int main()
{
     int a,b;
    printf("Enter year:");
    scanf("%d",&a);
    (a%4==0)?printf("Leap year."):printf("Non leap year.");

    return 0;
}
