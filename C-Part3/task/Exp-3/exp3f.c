//Check whether the given year is leap or not

#include <stdio.h>
int inp;
void main(){
	printf("Enter a year:");
	scanf("%d",&inp);
	printf("%d",inp);
	if( (inp%100==0) && (inp%400==0) )
		printf("It is a leap year.\n");
	else if(inp%4 ==0)
		printf("It is a leap year.\n");
	else
		printf("It is not a leap year.\n");
}
