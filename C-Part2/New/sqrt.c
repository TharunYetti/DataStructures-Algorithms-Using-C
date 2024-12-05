#include <stdio.h>
#include <math.h>
float a,b,c,r1,r2;
float k;
void main(){
	printf("Enter the coefficents of quadratic equation with a space between a b c:");
	scanf("%f %f %f",&a,&b,&c);
	int p= (b*b)-(4*a*c);
	if(p>=0){
		k =sqrt(p);
		printf("%f\n",k);
	}
	else{
		printf("Det is complex...\n");	
	}
    	
}
