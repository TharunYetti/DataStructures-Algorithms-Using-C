#include <stdio.h>
#include <math.h>
float a,b,c;
double d;
void main(){
	printf("Enter the coefficients:");
	scanf("%f %f %f",&a,&b,&c);
	d=b*b-4*a*c;
	if(d>0){
		printf("The roost are real and distinct\n");
		printf("Root1= %f+%f\n",-b/2*a,sqrt(d)/2*a);
		printf("Root1= %f-%f\n",-b/2*a,sqrt(d)/2*a);
	}
	else if(d==0){
		printf("The roost are real and same\n");
		printf("Root = %f\n",-b/2*a);
	}
	else{
		printf("The roots are imaginary\n");
		printf("Root1= %f+i%f\n",-b/2*a,sqrt(-d)/2);
		printf("Root2= %f-i%f\n",-b/2*a,sqrt(-d)/2);
	}
	
	
}
