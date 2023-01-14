#include<stdio.h>
int main(){
    int b,h,a;
    printf("Enter base:");
    scanf("%d",&b);
    printf("Enter height:");
    scanf("%d",&h);
    a=(b*h)/2;
    printf("Area of triangle=%d",a);
    return 0;
}