#include <stdio.h>
#include <math.h>
#include<conio.h>
#include <string.h>
void swap(int*,int*);
void main(){
	clrscr();
	int num1=10,num2=20;
	printf("Before Swap\nNUm1=%d and nUm2=%d\n",num1,num2);
	swap(&num1,&num2);
	printf("After Swap\nNUm1=%d and nUm2=%d\n",num1,num2);

}
void swap(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
