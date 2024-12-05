#include <stdio.h>
void fun();
void main(){
	printf("Hello! Welcome!\n");
	fun();
}
void fun(){
	for(int i=1;i<=5;i++){
		for(int j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
}
