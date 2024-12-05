//take three numbers and print its squares and cubes with do while statement
#include <stdio.h>
void main(){
	int num,ch,s;
	do{
		printf(">>>Enter a number:");
		scanf("%d",&s);
		printf("The square of the number is %d\n",s*s);
		printf("The cube of the number is %d\n",s*s*s);
		printf(">>>Enter your choice (1-for again, 0-exit):");
		scanf("%d",&ch);
	}while(ch==1);
	printf("Thank You!\n");
}
//take three numbers and print its squares and cubes with goto statement
/*
#include <stdio.h>
void main(){
	int num,ch,s;
	tharun:
		printf(">>>Enter a number:");
		scanf("%d",&s);
		printf("The square of the number is %d\n",s*s);
		printf("The cube of the number is %d\n",s*s*s);
		printf(">>>Enter your choice (1-for again, 0-exit):");
		scanf("%d",&ch);
		if(ch==1){
			goto tharun;
		}
		printf("Thank You!\n");
}
*/
