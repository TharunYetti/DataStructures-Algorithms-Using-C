#include<stdio.h>
char print(){
	char arr[]="HELLO";
	return arr;
}
void main(){
	int a[]={2,3,4,8,9};
	int *p=&a+1;
	printf("%d\n",&a[5]);
	printf("The adress of array is %d\n",&a);
	printf("The adress of array is %u\n",&a+1);
	printf("The adress of array is %u\n",p);
	printf("%s\n",print());
}

