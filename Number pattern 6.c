#include<stdio.h>
int main()
{ int n;
  printf("Enter a number:");
  scanf("%d",&n);
  int i,j,k;
  for(i=1;i<=n;i++)
  {
    k = i;
    for(j=1;j<=i;j++)
    {
      printf("%d ", k);
      k += n-j;
    }
    printf("\n");
  }
  return 0;
}
