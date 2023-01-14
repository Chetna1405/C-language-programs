#include<stdio.h>
int main(){
    int a,i,j,k=0;
    printf("Enter a no.=");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
    for(j=1;j<=a;j++){
      if(i==j){
       if(i*j==a){
                    k=j;
                    break;
                }
            }
        }
    }
    printf("Square root of %d is %d",a,k);
    return 0;
}