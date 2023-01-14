#include<stdio.h>
int main(){
    int length,breadth;
    printf("Enter length:");
    scanf("%d",&length);
    printf("Enter breadth:");
    scanf("%d",&breadth);
    printf("Perimeter is %d\n",2*(length+breadth));
    printf("Area is %d",length*breadth);
    return 0;
}