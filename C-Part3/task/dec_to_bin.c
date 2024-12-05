#include <stdio.h>
#include <math.h>
void main(){
	int i=0,num,r,d=0;
	printf("Enter the decimal num:");
	scanf("%d",&num);
	while(num!=0){
		r=num%2;
		d+=r*pow(10,i);
		i++;
		num/=2;
	}
	printf("The Binary value of decimal num is %d.\n",d);
}
