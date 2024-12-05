#include <stdio.h>
void main(){
	printf("Enter a positbe number:");
	int n,dig,sum=0;
	scanf("%d",&n);
	do{
		dig=n%10;
		sum+=dig;
		n=n/10;
	}while(n!=0);
	printf("The sum is %d\n",sum);
}
