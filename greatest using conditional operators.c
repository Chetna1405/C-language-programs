#include <stdio.h>

int main()
{
   int a,b,c;
   printf("Enter three no.'s=");
   scanf("%d%d%d",&a,&b,&c);
   int big=a>b?(a>c?a:c):(b>c?b:c);
   printf("Greatest no. is %d",big);
    return 0;
}
