#include<stdio.h>
void main(){
    int n,i=1,a=1;
    printf("Enter the number : ");
    scanf("%d",&n);
    do{
        a=a*n;
        if (i==2){
            printf("%d square = %d \n",n,a);}
        else if (i==3){
            printf("%d cube = %d \n",n,a);
        }
        i=i+1;
        }while (i<=3);
    }
