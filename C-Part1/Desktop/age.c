#include <stdio.h>
void main(){
	int month,year,date,cdays,cmonths,cyears;
	printf("Enter your year of birth:");
	scanf("%d",&year);
	printf("Enter your Month of birth:");
	scanf("%d",&month);
	printf("Enter your date of birth:");
	scanf("%d",&date);
	int pyear=2023,pmonth=2,pdate=28;
	if(pdate<date){
		pdate+=31;
		pmonth--;
		cdays=pdate-date;
	}
	else
		cdays=pdate-date;
	if(pmonth<month){
		pmonth+=12;
		pyear--;
		cmonths=pmonth-month;
	}
	else
		cmonths=pmonth-month;
	cyears=pyear-year;
	printf("You are %d years %d months and %d days old\n",cyears,cmonths,cdays);
}

