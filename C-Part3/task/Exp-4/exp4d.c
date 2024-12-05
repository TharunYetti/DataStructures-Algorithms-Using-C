//write a c program to input basic salary of an employee and calculate its Gross salary according to following; Basic salary<=10000; HRA=20%,DA=80%...Basic salary<= 20000; HRA=25%,DA=90%....Basic salary> 200000; HRA=30%,DA=95%

#include <stdio.h>
void main(){
	long int salary,gross;
	float hra,da;
	printf("Enter your salary:");
	scanf("%ld",&salary);
	if(salary<=10000){
		hra=salary*(0.2);
		da=salary*(0.8);
	}
	else if(salary<=20000){
		hra=salary*(0.25);
		da=salary*(0.9);
	}
	else if(salary>20000){
		hra=salary*(0.3);
		da=salary*(0.95);
	}
	else{
		hra=0;
		da=0;
	}
	gross=salary+hra+da;
	printf("Your Gross Salary is %ld\n",gross);
}
