#include <stdio.h>
void main(){
	for(int i=1;i<=5;i++){
		for(int j=1;j<(5-i);j++){
			printf(" ");
		}
		for(int k=1;k<=i;k++){
			printf(" *");
		}
		printf("\n");
	}
}

/*
#include <stdio.h>
void main(){

	int inp;
	printf("ENter a number:");
	scanf("%d",&inp);
	for(int i=1;i<=inp;i++){
		for(int j=1;j<=(inp-i);j++){
			printf(" ");
		}
		for(int k=1;k<=i;k++){
			printf(" *");
		}
		printf("\n");
	}
}
*/

/*
#include <stdio.h>
void main(){
	int num;
	printf("0\n");
	int j=1;
	for(int i=2;i<=10;i++){
		num=(j*(j+1))/2;
		printf("%d,",num);
		j++;
	}
	printf("\b\n");
}
*/
