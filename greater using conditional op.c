#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter two no.'s:");
    scanf("%d%d",&a,&b);
    int max=a>b?a:b;
    printf("Greater no. is %d",max);
    return 0;
}
