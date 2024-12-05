#include<stdio.h>
void main(){
int year;
	printf("Enter the year= ");
	scanf("%d",&year);
	if(year%400==0 || (year%100!=0 && year%4==0))
	printf(" It is a Leap year");
	else
	printf("It is not an leap year");	
}
