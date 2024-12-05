#include<stdio.h>
#include <stdlib.h>
void main(){
	int *p,n;
	printf("ENter how many elements do you want to read:");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	if(p==NULL)
		printf("Memory is insufficient\n");
	else{
		printf("Memory allocated successfully\n");
		for(int i=0;i<n;i++)
			scanf("%d",&p[i]);
		printf("The array is {");
		for(int i=0;i<n;i++)
			printf("%d,",p[i]);
		printf("\b}\n");
	}
}
