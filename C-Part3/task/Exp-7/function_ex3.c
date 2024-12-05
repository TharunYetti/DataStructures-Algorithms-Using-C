#include <stdio.h>
int max_of_three();
void main(){
	printf("Hello\n");
	printf("The maximum number is %d\n",max_of_three());
}
int max_of_three(){
	int a,b,c;
	printf("Enter three numbers:");
	scanf("%d %d %d",&a,&b,&c);
	if(a>=b && a>=c)
		return a;
	else if(b>=c)
		return b;
	else
		return c;
}
