#include <stdio.h>
void sq_cub_of_num(int);
void main(){
	int a,b;
	printf("Enter a number to find its sqaure and cube:");
	scanf("%d",&a);
	sq_cub_of_num(a);
}
void sq_cub_of_num(int n){
	printf("The sqaure of number is %d and cube is %d\n",n*n,n*n*n);
}
