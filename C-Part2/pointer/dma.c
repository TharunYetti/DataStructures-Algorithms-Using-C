#include <stdlib.h>
#include <stdio.h>
void main(){
	int *ptr;
	(int*)malloc(sizeof(int)*5);
	if(ptr==NULL || !ptr){
		printf("Memory Not Allocated\n");
		exit(1);
		//any postitve value in exit gives True
	}
	*ptr=120;
	free(ptr);
	
}
