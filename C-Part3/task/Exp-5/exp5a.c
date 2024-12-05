#include <stdio.h>
void main(){
	int i,j;
	for(i=1;i<=3;i++){
		for(j=1;j<=(4-i);j++)
			printf("* ");
		for(int k=1;k<=(i-1);k++)
			printf("- ");
		printf("\n");
	}
}
