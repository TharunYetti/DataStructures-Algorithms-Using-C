#include <stdio.h>
#include <stdlib.h>
void main(){
	struct hello{
		char name[10];
		int age;
		float marks;
	};
	int *ptr;
	ptr=(int*)calloc(sizeof(int)*3);
	ptr=(int*)realloc(24);
	
	
	/*
	printf("Enter your name:");
	scanf("%s",a1.name);
	printf("Enter your age:");
	scanf("%d",a1.age);
	printf("Enter your marks:");
	scanf("%f",a1.marks);
	*/
	struct hello a1={"Tharun",18,34.4};
	//a1.name="Tharun";
	//a1.age=17;
	//a1.marks=98.2;
	printf(" name:%s\n",a1.name);
	printf(" age:%d\n",a1.age);
	printf(" marks:%f\n",a1.marks);
}
