#include<stdio.h>
int main(){
	int age;
	printf("Enter the age: ");
	scanf("%d",&age);
	if(age>=18){
		printf("you are eligible for casting your vote \n");
		}
	else
		{
		printf("You are ineligible for casting your vote \n");
		}
		return 0;
	}
