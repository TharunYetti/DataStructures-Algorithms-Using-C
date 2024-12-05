//Find the relation between two numbers using relational operators
#include <stdio.h>
int a,b;
void main(){
	printf("Enter two numbers with a space between them: ");
	scanf("%d %d",&a,&b);
	if(a>b)
		printf("%d is greater than %d\n",a,b);
	else if(b>a)
		printf("%d is greater than %d\n",b,a);
	else if(a==b)
		printf("Both are same, %d = %d\n",a,b);
	else
		printf("Good Bye!\n");
}
/*

#include <stdio.h>
int a,b;
void main(){
	printf("Enter two numbers with a space between them: ");
	scanf("%d %d",&a,&b);
	(a>b) ? printf("%d is greater than %d\n",a,b) : (b>a) ? printf("%d is greater than %d\n",b,a) : (a==b) ? printf("Both are same, %d = %d\n",a,b) : printf("Bye!\n");
}
*/
