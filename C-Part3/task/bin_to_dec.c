#include <stdio.h>
#include <math.h>
void main(){
	int i=0,num,r,d=0;
	printf("Enter the binary num:");
	scanf("%d",&num);
	while(num!=0){
		r=num%10;
		d+=r*pow(2,i);
		num/=10;
		i++;
	}
	printf("The decimal value of the binary num is %d.\n",d);
}
