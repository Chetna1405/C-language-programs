#include<stdio.h>
int
main ()
{
  int a, b;
  printf ("Enter 1st no.:");
  scanf ("%d", &a);
  printf ("Enter 2nd no.:");
  scanf ("%d", &b);
  if (a > b)
    printf ("a is greater.");
  if (a < b)
    printf ("b is greater.");
  if (a == b)
    printf ("Both are equal.");
    return 0;
}
