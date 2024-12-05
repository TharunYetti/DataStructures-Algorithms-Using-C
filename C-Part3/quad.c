#include <stdio.h>
#include <math.h>
float a,b,c,r1,r2,k;
void main(){
	printf("Enter the coefficents of quadratic equation with a space between a b c:");
	scanf("%f %f %f",&a,&b,&c);
	k = sqrt(b*b-4*a*c);
	r1=(float)( k - b )/(float)(2*a);
	printf("%f\n",r1);
}
