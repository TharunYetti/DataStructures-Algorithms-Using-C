//calculate sum of digits of a given number
#include <stdio.h>
int num,dig,sum=0;
void main(){
	printf("Enter a number to find sum of its digits:");
	scanf("%d",&num);
	printf("The sum of digits of %d is ",num);
	while(num>0){
		dig=num%10;
		sum=sum+dig;
		num/=10;
	}
	printf("%d.\n",sum);
}
