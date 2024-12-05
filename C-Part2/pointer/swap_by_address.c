//swap two variavles by call by reference/address
#include <stdio.h>
void main(){
	int a=21,b=76;
	int* p;
	int* q;
	p=&a;q=&b;
	printf("a=%d\tb=%d\n",a,b);
	*p=*p+*q;
	*q=*p-*q;
	*p=*p-*q;
	/* or
	a=a*b;
	b=a/b;
	a=b/a;
	*/
	printf("a=%d\tb=%d\n",a,b);

}
