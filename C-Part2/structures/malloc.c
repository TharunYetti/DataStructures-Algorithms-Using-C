#include <stdio.h>
#include <stdlib.h>
void main(){
	int a[3];
	int *p=a;
	p=(int*)malloc(0);
	if(p!=NULL){
		printf("ENter one element:");
		for(int i=0;i<3;i++)
			scanf("%d",&*(p+i));
	}
	for(int i=0;i<3;i++)
		printf("%d\n",*(p+i));
}
