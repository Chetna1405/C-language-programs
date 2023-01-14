#include<stdio.h>
int main(){
    int a,b;
    printf("Enter angle a:");
    scanf("%d",&a);
    printf("Enter angle b:");
    scanf("%d",&b);
    int c=180-(a+b);
    printf("Third angle is %d",c);
    return 0;
}