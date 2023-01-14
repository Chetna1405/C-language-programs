#include<stdio.h>
int main(){
    int hindi,eng,math,sci,sst;
    printf("Enter marks of hindi:");
    scanf("%d",&hindi);
    printf("Enter marks of eng:");
    scanf("%d",&eng);
    printf("Enter marks of math:");
    scanf("%d",&math);
    printf("Enter marks of science:");
    scanf("%d",&sci);
    printf("Enter marks of sst:");
    scanf("%d",&sst);
    int t=hindi+eng+math+sci+sst;
    if (t<=500){
    printf("Total marks out of 500 are %d\n",t);
    printf("Average marks =%d\n",t/5);
    printf("Percentage=%d %%",(t*100)/500);
    }
    else
    printf("Marks are wrong.");
    return 0;
}