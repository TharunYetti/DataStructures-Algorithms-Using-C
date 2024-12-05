#include <stdio.h>
typedef struct {
	float real;
	float img;
}complex;
void swap(complex a,complex b){
	complex temp;
	temp=a;
	a=b;
	b=temp;
}
void main(){
	complex c1={2.4,3.6},c2={4.2,5.8};
	printf("Complex Number 1\tReal=%.2f\tImg=%.2f\n",c1.real,c1.img);
	printf("Complex Number 1\tReal=%.2f\tImg=%.2f\n",c2.real,c2.img);
	void swap(c1,c2);
	printf("Complex Number 1\tReal=%.2f\tImg=%.2f\n",c1.real,c1.img);
	printf("Complex Number 1\tReal=%.2f\tImg=%.2f\n",c2.real,c2.img);
	printf("Adding\n");
	printf("The resultant complex number is Real=%.2f\tImg=%.2f\n",c1.real+c2.real,c1.img+c2.img);
}
