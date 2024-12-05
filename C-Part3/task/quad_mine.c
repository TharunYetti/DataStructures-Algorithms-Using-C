#include <stdio.h>
#include <math.h>
void main(){
	float a,b,c,d;
	printf("ENter the coeffcients:");
	scanf("%f %f %f",&a,&b,&c);
	d=(b*b)-4*a*c;
	float x=-b/2*a;
	//printf("%f %f",x,g);
	if(d>0){
		printf("It has two real and distinct roots.\n");
		printf("Root1= %.2f\nRoot2= %.2f\n",(-b+pow(d,0.5)/(2*a)),(-b-pow(d,0.5))/(2*a));
	}
	else if(d<0){
		printf("It has two imaginary roots.\n");
		printf("Root1= %.2f+i%.2f \nRoot2= %.2f-i%.2f \n",(-b/2*a),pow(-d,0.5)/(2*a),-b/(2*a),pow(-d,0.5)/(2*a));
	}
	else{
		printf("It has two real and equal roots.\n");
		printf("Root1 = Root2 = %.2f \n",(-b/2*a));
	}
}
