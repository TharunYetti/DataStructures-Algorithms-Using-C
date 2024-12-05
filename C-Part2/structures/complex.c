//addition of complex number
#include <stdio.h>
typedef struct{
	float real;
	float image;
}COMPLEX;
COMPLEX add(COMPLEX a,COMPLEX b){
	COMPLEX sum;
	sum.real=a.real+b.real;
	sum.image=a.image+b.image;
	return sum;
}
void main(){
	COMPLEX n1,n2,final;
	printf("Enter the real and imaginary values of Complex nuimber:");
	scanf("%f %f",&n1.real,&n1.image);
	printf("Enter the real and imaginary values of Complex nuimber:");
	scanf("%f %f",&n2.real,&n2.image);
	final=add(n1,n2);
	printf("The resulatant is %.2f+i%.2f\n",final.real,final.image);
}
