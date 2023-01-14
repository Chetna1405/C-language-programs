#include<stdio.h>
int main(){
    float p,t,r;
    printf("Enter principal amount:");
    scanf("%f",&p);
    printf("Enter rate:");
    scanf("%f",&r);
    printf("Enter time:");
    scanf("%f",&t);
   float si=(p*r*t)/100;
   printf("Simple interest=%.2f",si);
   return 0;
}