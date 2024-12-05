#include<stdio.h>
int main(){
	float HRA,DA;
	long int sal,gross;
	printf("Enter the salary: ");
	scanf("%ld",&sal);
	if(sal<=10000){
		HRA=(0.2)*sal;
		DA=(0.8)*sal;
		}
	else if(sal<=20000){
		HRA=(0.25)*sal;
		DA=(0.9)*sal;
		}
	else if(sal>20000){
		HRA=(0.3)*sal;
		DA=(0.95)*sal;
		}
	else{
		printf("Enter valid input");
		}
	gross=sal+HRA+DA;
	printf("Gross salary of employee is %ld \n",gross);
	return 0;
}
		
