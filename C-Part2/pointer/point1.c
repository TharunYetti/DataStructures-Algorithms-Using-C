#include <stdio.h>
void main(){
	float x=3.0,y=4.0;
	int a=10,*p;
	p=&x;
	p=&a;
	printf("\n%ld\n",p);
}
