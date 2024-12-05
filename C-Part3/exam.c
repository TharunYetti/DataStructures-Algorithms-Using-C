#include<stdio.h>
#include <stdlib.h>
void padd();
int add(int,int);
int sub(int,int);
void main(){
	int* p,c;
	void(*ptr)();
	ptr=padd;
	ptr();
	(*ptr)();
	c=5;
	p=&c;
	printf("The address of c is %u\n",p);
	printf("The value of c is %d\n",*p);
	printf("\n");
	int(*point[2])(int,int);
	point[0]=add;
	point[1]=sub;
	printf("The sum is %d\n",point[0](2,3));
	printf("The sub is %d\n",point[1](4,3));
	int *pp,*ppp,k=10;
	pp=&k;ppp=&pp;
	printf("%d\n",*pp);
	printf("%d\n",*ppp);
}
void padd(){
    printf("Hai\n");
}
int add(int a,int b){
	return a+b;
}
int sub(int a,int b){
	return a-b;
}
