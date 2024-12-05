#include <stdio.h>
void main(){
	int a=10,b=20,c=30;
	int *pa,**ppa,***pppa;
	pa=&a;ppa=&pa;pppa=&ppa;
	printf("THe value of a is stored at %d\n",a);
	printf("THe value of a is stored at %ld\n",*pa);
	printf("THe value of pa is stored at %d\n",*ppa);
	printf("THe value of a is stored at %d\n",**ppa);
	printf("THe value of a is stored at %d\n",**ppa);
	printf("THe value of a is stored at %d\n",***pppa);
	printf("%d\n",**ppa+1);
}
