#include <stdio.h>
void main(){
	int a[5]={7,2,8,3,9};
	int *p;
	p=a;
	printf("%d\n",*((p+2)+p[4]-p[2]-(p+1)+p));//ans 8
	
}
