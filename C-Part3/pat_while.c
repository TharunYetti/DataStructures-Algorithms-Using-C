#include <stdio.h>
int inp;
void main(){
	printf("Enter A number:");
	scanf("%d",&inp);
	int i=1;
	while(i<=inp){
		int j=1;
		while(j<=i){
			printf("* ");
			j++;
		}
		printf("\n");
		i++;
	}
}
