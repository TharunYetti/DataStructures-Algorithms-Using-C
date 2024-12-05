#include<stdio.h>
typedef struct{
	float real;
	float img;
}complex;
complex mult(complex a,complex b){
	complex temp;
	float real,img;
	real=(a.real*b.real)-(a.img*b.img);
	img=(a.real*b.img)+(a.img*b.real);
	temp.real=real;temp.img=img;
	return temp;
}
void main(){
	complex a,b,c;
	printf("Enter first real and img part with a space between:");
	scanf("%f %f",&a.real,&a.img);
	printf("Enter second real and img part with a space between:");
	scanf("%f %f",&b.real,&b.img);
	c=mult(a,b);
	printf("real=%.2f\tImg=%.2f\n",c.real,c.img);
}
