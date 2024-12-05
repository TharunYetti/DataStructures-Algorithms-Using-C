#include <stdio.h>
void main(){
	int *p,x=10;
	/*
	p=(int *)2000;
	*p=10;
	printf("%d\n",*p);
	*/
	/*
	float y=10.5;
	(float *)p=&y;
	printf("%f",*(float *)p);
	*/
	p=&x;
	int k[2]={20,34};
	int *p1,*p2;
	p1=&k[0];p2=&k[1];
	printf("%ld",p2-p1);
	
}
