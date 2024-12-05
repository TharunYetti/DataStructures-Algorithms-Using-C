#include <stdio.h>
void main(){
	int a=10,b=20;
	int *p,*q;
	p=&a;
	*q=*p;
	printf("%u\n",*p);
}
