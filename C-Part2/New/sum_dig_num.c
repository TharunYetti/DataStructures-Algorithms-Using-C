#include <stdio.h>
long long num,temp;
int dig,sum=0;
void main(){
	printf("Enter a number:");
	scanf("%lld",&num);
	temp=num;
	while(temp>0){
		dig=temp%10;
		sum=sum+dig;
		temp=temp/10;
	}
	printf("The sum of the digits in %lld is %d.\n",num,sum);
}
