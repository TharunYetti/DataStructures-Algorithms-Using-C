//read three numbers and print its squareroot of those numbers with the help of goto statement
#include <stdio.h>
#include <math.h>
void main(){
	int num,r,c=1;
	root:
		printf("Enter a number:");
		scanf("%d",&num);
		r=sqrt(num);
		printf("The square root of %d is %d\n",num,r);
		c++;
		if(c<=3)
			goto root;
}
