#include<stdio.h>
#include<math.h>
int main(){
    float side;
    printf("Enter side of equilateral triangle:");
    scanf("%f",&side);
    float area=(sqrt(3)/4)*side*side;
    printf("Area of equilateral triangle=%.2f",area);
    return 0;
}