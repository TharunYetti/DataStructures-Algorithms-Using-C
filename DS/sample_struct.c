#include <stdio.h>
typedef struct{
	char name[100];
	int id;
}student;
void main(){
	student s1={"Tharun",200591};
	printf("Enter your name:");
	scanf("%s",s1.name);
	printf("ENter your Id excluding 'R':");
	scanf("%d",&s1.id);
	s1.name[100]="hello";
	s1.id=200591;
	printf("Name:%s\nId:%d\n",s1.name,s1.id);
}
