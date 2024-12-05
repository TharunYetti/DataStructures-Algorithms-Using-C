#include <stdio.h>
int inp;
void main(){
    long long fact=1;
    printf("Enter a number:");
    scanf("%d",&inp);
    for(int i=inp;i>=1;i=i-1){
        fact=fact*i;
    }
    printf("%lld is the Factorial of %d \n",fact,inp);
}
