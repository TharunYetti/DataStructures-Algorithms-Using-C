//even or odd using bitwise operator

#include <stdio.h>
int num;
void main(){
	printf("Enter a positive number:");
	scanf("%d",&num);
	if(num & 1 == 1)
		printf("%d is an Odd Number.\n",num);
	else
		printf("%d is an Even NUmber.\n",num);
}
