//read three numbers and print its squareroot of those numbers with the help of goto statement
#include <stdio.h>
#include <math.h>
void main(){
	int num,c=1;
	float r;
	root:
		printf("Enter a number %d:",c);
		scanf("%d",&num);
		r=sqrt(num);
		printf("The square root of %d is %.3f\n",num,r);
		c++;
		if(c<=3)
			goto root;
}
