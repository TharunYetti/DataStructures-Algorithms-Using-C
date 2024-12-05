#include <stdio.h>
#include <math.h>
void main(){
	int i=0,num,r,d=0;
	printf("Enter the octal num:");
	scanf("%d",&num);
	while(num!=0){
		r=num%10;
		d+=r*pow(8,i);
		i++;
		num/=10;
	}
	printf("The Decimal value of Octal num is %d\n",d);
}
