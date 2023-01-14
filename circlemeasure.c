#include<stdio.h>
int main(){
    int radius;
    printf("Enter radius:");
    scanf("%d",&radius);
    printf("Radius of circle is %d\n",radius);
    printf("Diameter of circle is %d\n",2*radius);
    printf("Area of circle is %f\n",3.14*radius*radius);
    printf("Perimeter of circle is %f",2*3.14*radius);
    return 0;
}