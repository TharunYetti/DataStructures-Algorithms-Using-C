#include <stdio.h>
#include <math.h>
void main(){
	int i=0,num,r,d=0;
	printf("Enter the decimal num:");
	scanf("%d",&num);
	while(num!=0){
		r=num%8;
		d+=r*pow(8,i);
		i++;
		num/=8;
	}
	printf("The Octal value of decimal num is %d\n",d);
}
