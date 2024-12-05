#include <stdio.h>
void factors_of_number(int);
void main(){
	int num;
	printf("Hello! Welcome\n");
	printf("Enter a number to print the factors of the numbers:");
	scanf("%d",&num);
	factors_of_number(num);
}
void factors_of_number(int n){
	printf("The factors are ");
	for(int i=1;i<=n;i++){
		if(n%i==0){
			printf("%d,",i);
		}
	}
	printf("\b \n");
}
