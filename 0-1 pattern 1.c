#include <stdio.h>

int main()
{   int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int i, j;
  for(i=1;i<=n;i++)
  {
    for(j=i;j>=1;j--)
    {
      printf("%d",j%2);
    }
    printf("\n");
  }
  return 0;
}
