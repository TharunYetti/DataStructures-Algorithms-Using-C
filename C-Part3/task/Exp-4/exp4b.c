//To read age of a person and determine whether he/she is able to cast his/her vote

#include <stdio.h>
int age;
void main(){
	printf("ENter the age of the person:");
	scanf("%d",&age);
	if(age>=0 && age>=18)
		printf("This person is capable to cast his/her vote.\n");
	else if(age>=0 && age<18)
		printf("This person is not capable to cast his/her vote.\n");
	else
		printf("Age must be positive!!.\n");
}

/*
#include <stdio.h>
int age;
void main(){
	printf("ENter the age of the person:");
	scanf("%d",&age);
	(age>=18) ? printf("This person is capable to cast his/her vote.\n") : printf("This person is not capable to cast his/her vote.\n") ;
}
*/
