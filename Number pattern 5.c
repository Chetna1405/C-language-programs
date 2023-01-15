#include<stdio.h>
int main()
{ int n;
  printf("Enter a number:");
  scanf("%d",&n);
  int i,j,k;
  k=1;
  for(i=1;i<n;i++)
  {
    for(j=1;j<=i;j++)
    {
      printf("%d",k++);
    }
    printf("\n");
  }
  return 0;
}
